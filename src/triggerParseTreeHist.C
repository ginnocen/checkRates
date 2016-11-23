//c headers
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

//ROOT headers
#include "TFile.h"
#include "TTree.h"
#include "TH1F.h"
#include "TPad.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TGraph.h"

//include headers
#include "include/checkMakeDir.h"
#include "include/returnFileList.h"


const std::string txtStr = ".txt";
const std::string numStr = "0123456789";
const std::string outRootDir = "outRootDir/";
const std::string pdfDir = "pdfDir/";
const std::string pngDir = "pngDir/";

const Int_t nCol = 12;
const Int_t col[nCol] = {kBlue - 3, kYellow + 1, kMagenta + 2, kGreen + 3, kOrange, kRed + 1, kCyan+1,kBlack,kAzure+1,kGray,kOrange+7,28};
const Int_t style[nCol] = {20};


int triggerParseTreeHist(const std::string inParseDir, const std::string inTrigFile)
{
  checkMakeDir(outRootDir);
  checkMakeDir(pdfDir);
  checkMakeDir(pngDir);

  if(!checkDir(inParseDir)){
    std::cout << "inParseDir \'" << inParseDir << "\' is not a valid directory, return 1" << std::endl;
    return 1;
  }

  if(!checkFile(inTrigFile)){
    std::cout << "inTrigFile \'" << inTrigFile << "\' is not a valid file, return 1" << std::endl;
    return 1;
  }
  else if(inTrigFile.size() < txtStr.size()){
    std::cout << "inTrigFile \'" << inTrigFile << "\' does not end in \'" << txtStr << "\', return 1" << std::endl;
    return 1;
  }
  else if(inTrigFile.substr(inTrigFile.size() - txtStr.size(), txtStr.size()).find(txtStr) == std::string::npos){
    std::cout << "inTrigFile \'" << inTrigFile << "\' does not end in \'" << txtStr << "\', return 1" << std::endl;
    return 1;
  }

  std::vector<std::string> fileListAccept = returnFileList(inParseDir, "accept_");
  std::vector<std::string> fileListAvgPrescal = returnFileList(inParseDir, "avg_prescale_");

  const unsigned int fileListSize = fileListAccept.size();
  const unsigned int fileListSize2 = fileListAvgPrescal.size();

  if(fileListSize != fileListSize2){
    std::cout << "File list sizes for \'accept_\' (" << fileListSize << ") and \'avg_prescale_\' (" << fileListSize2 << ") are not the same. return 1" << std::endl;
    return 1;
  }

  std::cout << "Files to process: " << fileListSize << std::endl;
  std::vector<unsigned int> fileRun;
  
  for(unsigned int iter = 0; iter < fileListSize; iter++){
    std::string tempStr = fileListAccept.at(iter);
    std::string tempStr2 = fileListAvgPrescal.at(iter);

    if(tempStr.find("Run") != std::string::npos){
      tempStr.replace(0, tempStr.find("Run")+3, "");
      tempStr.replace(tempStr.find("_"), tempStr.size()-tempStr.find("_"), "");

      tempStr2.replace(0, tempStr2.find("Run")+3, "");
      tempStr2.replace(tempStr2.find("_"), tempStr2.size()-tempStr2.find("_"), "");
      
      if(tempStr.size() != tempStr2.size() || tempStr.find(tempStr2) == std::string::npos){
	std::cout << "Mismatch in accept files, \'" << fileListAccept.at(iter) << "\', and avg_prescale files \'" << fileListAvgPrescal.at(iter) << "\'. return 1" << std::endl;
	
	std::cout << "from 1: " << tempStr << std::endl;
	std::cout << "from 2: " << tempStr2 << std::endl;
	
	return 1;	
      }

      for(unsigned int iter2 = 0; iter2 < tempStr.size(); iter2++){
	if(numStr.find(tempStr.substr(iter2,1)) == std::string::npos){
	  std::cout << "Run number from file, \'" << tempStr << "\' contains non-number. return 1" << std::endl;
	  return 1;
	}
      }

      fileRun.push_back((unsigned int)std::stoi(tempStr));
    }
    else{
      std::cout << "Input file \'" << tempStr << "\' does not contain \'Run\' string, return 1." << std::endl;
      return 1;
    }
  }

  unsigned int sortIter = 0;
  while(sortIter < fileRun.size()){
    bool swapBool = false;

    for(unsigned int iter = sortIter+1; iter < fileRun.size(); iter++){
      if(fileRun.at(sortIter) > fileRun.at(iter)){
	std::string tempStr1 = fileListAccept.at(sortIter);
	std::string tempStr2 = fileListAvgPrescal.at(sortIter);
	unsigned int tempRun = fileRun.at(sortIter);

	fileListAccept.at(sortIter) = fileListAccept.at(iter);
	fileListAvgPrescal.at(sortIter) = fileListAvgPrescal.at(iter);
	fileRun.at(sortIter) = fileRun.at(iter);

	fileListAccept.at(iter) = tempStr1;
	fileListAvgPrescal.at(iter) = tempStr2;
	fileRun.at(iter) = tempRun;

	swapBool = true;	
      }
    }

    if(!swapBool) sortIter++;
  }

  for(unsigned int iter = 0; iter < fileRun.size(); iter++){
    std::cout << "File " << iter << "/" << fileRun.size() << " (Run==" << fileRun.at(iter) << "): " << std::endl;
    std::cout << " " << fileListAccept.at(iter) << std::endl;
    std::cout << " " << fileListAvgPrescal.at(iter) << std::endl;
  }

  if(fileRun.size() == 0){
    std::cout << "No runs given, return 1" << std::endl;
    return 1;
  }

  unsigned int Run;

  std::vector<std::string> trigNames;
  std::ifstream trigFile(inTrigFile.c_str());
  std::string tempTrigStr;

  while(std::getline(trigFile, tempTrigStr)){
    while(tempTrigStr.find(" ") != std::string::npos){
      tempTrigStr.replace(tempTrigStr.find(" "), 1, "");
    }

    if(tempTrigStr.size() == 0) continue;

    trigNames.push_back(tempTrigStr);
  }

  const unsigned int nTrig = trigNames.size();
  unsigned int trigCount[nTrig];
  unsigned int trigCount_Integrated[nTrig];
  float trigAvgPrescal[nTrig];
  bool trigRunHas[nTrig];

  for(unsigned int iter = 0; iter < nTrig; iter++){
    trigCount[iter] = 0;
    trigCount_Integrated[iter] = 0;
    trigRunHas[iter] = false;
  }

  const std::string outFileName = outRootDir + "triggerTree_Run" + std::to_string(fileRun.at(0)) + "to" + std::to_string(fileRun.at(fileRun.size()-1)) + ".root";
  TFile* outFile_p = new TFile(outFileName.c_str(), "RECREATE");
  TTree* outTree_p = new TTree("trigTree", "trigTree");

  const Int_t nRunBins = fileRun.at(fileRun.size()-1) + 1 - fileRun.at(0);
  TH1F* countPerRun_h[nTrig];
  TH1F* countIntPerRun_h[nTrig];
  TGraph *countIntPerRun_gr[nTrig];

  outTree_p->Branch("Run", &Run, "Run/i");

  for(unsigned int iter = 0; iter < trigNames.size(); iter++){
    std::string branchName1 = trigNames.at(iter) + "_Count";
    std::string branchEndName1 = trigNames.at(iter) + "_Count/i";

    std::string branchName2 = trigNames.at(iter) + "_Count_Integrated";
    std::string branchEndName2 = trigNames.at(iter) + "_Count_Integrated/i";

    std::string branchName3 = trigNames.at(iter) + "_AvgPrescal";
    std::string branchEndName3 = trigNames.at(iter) + "_AvgPrescal/F";

    std::string branchName4 = trigNames.at(iter) + "_RunHas";
    std::string branchEndName4 = trigNames.at(iter) + "_RunHas/O";

    outTree_p->Branch(branchName1.c_str(), &trigCount[iter], branchEndName1.c_str()); 
    outTree_p->Branch(branchName2.c_str(), &trigCount_Integrated[iter], branchEndName2.c_str()); 
    outTree_p->Branch(branchName3.c_str(), &trigAvgPrescal[iter], branchEndName3.c_str()); 
    outTree_p->Branch(branchName4.c_str(), &trigRunHas[iter], branchEndName4.c_str()); 

    std::string countHistName = trigNames.at(iter) + "_countPerRun_h";
    std::string countIntHistName = trigNames.at(iter) + "_countIntPerRun_h";
    std::string countIntGraphName = trigNames.at(iter) + "_countIntPerRun_gr";

    countPerRun_h[iter] = new TH1F(countHistName.c_str(), ";Run;Counts", nRunBins, 0, nRunBins);
    countIntPerRun_h[iter] = new TH1F(countIntHistName.c_str(), ";Run;Counts (Integrated)", nRunBins, 0, nRunBins);
    countIntPerRun_gr[iter] = new TGraph();//TH1F(countIntGraphName.c_str(), ";Run;Counts (Integrated)", nRunBins, 0, nRunBins);
    countIntPerRun_gr[iter]->SetName(countIntGraphName.c_str());
    countIntPerRun_gr[iter]->SetTitle(countIntGraphName.c_str());
  }

  for(unsigned int iter = 0; iter < fileRun.size(); iter++){

    Run = fileRun.at(iter);
    
    for(unsigned int trigIter = 0; trigIter < trigNames.size(); trigIter++){
      trigCount[trigIter] = 0;
      trigRunHas[trigIter] = false;
    }

    std::ifstream runTrigFile(fileListAccept.at(iter).c_str());
    std::string tempTrigStr2;

    while(std::getline(runTrigFile, tempTrigStr2)){
      
      for(unsigned int trigIter = 0; trigIter < trigNames.size(); trigIter++){
	if(tempTrigStr2.find(trigNames.at(trigIter)) != std::string::npos){
	  
	  if(trigRunHas[trigIter] != true){
	    trigRunHas[trigIter] = true;
	    
	    tempTrigStr2.replace(0, tempTrigStr2.find("_v")+3, "");
	    
	    while(tempTrigStr2.find(" ") != std::string::npos){
	      tempTrigStr2.replace(tempTrigStr2.find(" "), 1, "");
	    }

	    trigCount[trigIter] = std::stoi(tempTrigStr2);
	    countPerRun_h[trigIter]->Fill(Run - fileRun.at(0), trigCount[trigIter]);
	    trigCount_Integrated[trigIter] += std::stoi(tempTrigStr2);
	    countIntPerRun_h[trigIter]->Fill(Run - fileRun.at(0), trigCount_Integrated[trigIter]);
            countIntPerRun_gr[trigIter]->SetPoint(countIntPerRun_gr[trigIter]->GetN(),Run - fileRun.at(0), trigCount_Integrated[trigIter]);

	    std::ifstream runTrigFile2(fileListAvgPrescal.at(iter).c_str());
	    std::string tempTrigStr3;

	    while(std::getline(runTrigFile2, tempTrigStr3)){
	      if(tempTrigStr3.find(trigNames.at(trigIter)) != std::string::npos){
		tempTrigStr3.replace(0, tempTrigStr3.find("_v")+3, "");
		while(tempTrigStr3.find(" ") != std::string::npos){
		  tempTrigStr3.replace(tempTrigStr2.find(" "), 1, "");
		}

		trigAvgPrescal[trigIter] = std::stof(tempTrigStr3);
	      }
	    }
	    runTrigFile2.close();
	  }
	  else{
	    std::cout << "Multiple lines for same trigger, \'" << tempTrigStr2 << "\', \'" << trigNames[trigIter] << "\'. return 1" << std::endl;

	    delete outTree_p;
	    outFile_p->Close();
	    delete outFile_p;

	    return 1;
	  }
	}
      }
    }
    runTrigFile.close();
    outTree_p->Fill();
  }

  outFile_p->cd();
  
  outTree_p->Write("", TObject::kOverwrite);

  for(unsigned int iter = 0; iter < nTrig; iter++){
    countPerRun_h[iter]->Write("", TObject::kOverwrite);
    countIntPerRun_h[iter]->Write("", TObject::kOverwrite);
    countIntPerRun_gr[iter]->Write("", TObject::kOverwrite);
  }

  const Int_t nTrigType = 7;
  const std::string trigTypes[nTrigType] = {"Calo", "PF", "Photon","BJet","Dmeson","FullTracks","PAL1MinimumBiasHF_OR_SinglePixelTrack_part"};

//  const Int_t nTrigType = 6;
//  const std::string trigTypes[nTrigType] = {"Calo", "PF", "Photon","BJet","Dmeson","FullTracks"};

  TCanvas* c1_p[nTrigType];
  TH1F* dummyHist_p[nTrigType];


  for(unsigned int iter = 0; iter < nTrigType; iter++){
    std::string canvName = "rate" + trigTypes[iter] + "_Run" + std::to_string(fileRun.at(0)) + "to" + std::to_string(fileRun.at(fileRun.size()-1)) + "_c";
    std::string dummyName = "dummyHist" + std::to_string(iter) + "_h";

    c1_p[iter] = new TCanvas(canvName.c_str(), canvName.c_str(), 800, 600);
    dummyHist_p[iter] = new TH1F(dummyName.c_str(), ";Run;Counts", nRunBins, 0, nRunBins);

    dummyHist_p[iter]->Draw();

    double dummyMax = -1;
    double dummyMin = 100000000;
    
    unsigned int drawIter = 0;
    std::vector<unsigned int> drawPos;

    TLegend* leg_p = new TLegend(.3, .6, .85, .93);
    leg_p->SetTextFont(43);
    leg_p->SetTextSize(16);
    leg_p->SetBorderSize(0);
    leg_p->SetFillColor(0);
    leg_p->SetFillStyle(0);
    
    for(unsigned int trigIter = 0; trigIter < nTrig; trigIter++){
      if(trigNames.at(trigIter).find(trigTypes[iter]) != std::string::npos){
        if(iter<2) {
          if(trigNames.at(trigIter).find("BJet") != std::string::npos) continue;
        }
        Printf("iter: %d %s",trigIter,trigNames.at(trigIter).c_str());        
	if(countIntPerRun_h[trigIter]->GetMaximum() > dummyMax){
	  dummyMax = countIntPerRun_h[trigIter]->GetMaximum()*10;
	}

	if(countIntPerRun_h[trigIter]->GetMinimum() < dummyMin){
	  dummyMin = countIntPerRun_h[trigIter]->GetMinimum();
	}

	if(countPerRun_h[trigIter]->GetMaximum() > dummyMax){
	  dummyMax = countPerRun_h[trigIter]->GetMaximum()*100;
	}

	if(countPerRun_h[trigIter]->GetMinimum() < dummyMin){
	  dummyMin = countPerRun_h[trigIter]->GetMinimum();
	}

	countIntPerRun_h[trigIter]->SetMarkerColor(col[drawIter]);
	countIntPerRun_h[trigIter]->SetMarkerStyle(style[drawIter]);
	countIntPerRun_h[trigIter]->SetLineColor(col[drawIter]);
	countIntPerRun_h[trigIter]->SetLineWidth(2);
        //countIntPerRun_h[trigIter]->DrawCopy("hist same");//HIST C SAME");

        countIntPerRun_gr[trigIter]->SetMarkerColor(col[drawIter]);
        countIntPerRun_gr[trigIter]->SetMarkerStyle(style[drawIter]);
        countIntPerRun_gr[trigIter]->SetLineColor(col[drawIter]);
        countIntPerRun_gr[trigIter]->SetLineWidth(2);
        countIntPerRun_gr[trigIter]->Draw("l");//HIST C SAME");

        countIntPerRun_h[trigIter]->SetFillColor(col[drawIter]);
        countIntPerRun_h[trigIter]->SetFillStyle(3244);
        std::string legStr = trigNames.at(trigIter).c_str();
        legStr.replace(legStr.find("HLT_"), 4, "");
        legStr.replace(legStr.find("_v"), legStr.size()-legStr.find("_v"), "");
        //leg_p->AddEntry(countIntPerRun_h[trigIter], legStr.c_str(), "L F");
        leg_p->AddEntry(countIntPerRun_gr[trigIter], legStr.c_str(), "L");
        drawPos.push_back(trigIter);
	drawIter++;
      }
    }

    dummyHist_p[iter]->GetXaxis()->CenterTitle();
    dummyHist_p[iter]->GetYaxis()->CenterTitle();
    dummyHist_p[iter]->GetYaxis()->SetTitleOffset(dummyHist_p[iter]->GetYaxis()->GetTitleOffset()*1.2);

    dummyHist_p[iter]->SetMaximum(dummyMax);
    dummyHist_p[iter]->SetMinimum(dummyMin/2);

    gPad->SetRightMargin(0.05);
    gPad->SetTopMargin(0.05);
    gPad->SetTicks(1,1);
    
    gStyle->SetOptStat(0);
    
    gPad->Modified();
    //gPad->SetLogy();

    leg_p->Draw("SAME");

    for(unsigned int trigIter = 0; trigIter < drawIter; trigIter++){
      countPerRun_h[drawPos.at(trigIter)]->SetFillColor(col[drawIter]);
      countPerRun_h[drawPos.at(trigIter)]->SetFillStyle(3244);
      countPerRun_h[drawPos.at(trigIter)]->SetLineWidth(1);

      TH1F* tempDummy_p = new TH1F("tempDummy_p", "", nRunBins*(drawIter+2), 0, nRunBins);
      tempDummy_p->SetFillColor(col[trigIter]);
      tempDummy_p->SetLineWidth(1);
      tempDummy_p->SetFillStyle(3244);

      for(int binIter = 0; binIter < countPerRun_h[drawPos.at(trigIter)]->GetNbinsX(); binIter++){
	tempDummy_p->SetBinContent(binIter*(drawIter+2)+1+trigIter+1, countPerRun_h[drawPos.at(trigIter)]->GetBinContent(binIter+1));
	tempDummy_p->SetBinError(binIter*(drawIter+2)+1+trigIter+1, countPerRun_h[drawPos.at(trigIter)]->GetBinError(binIter+1));
      }

      //tempDummy_p->DrawCopy("SAME HIST");
      delete tempDummy_p;
    }

    std::string canvNameDir = pdfDir + canvName + ".pdf";

    c1_p[iter]->SaveAs(canvNameDir.c_str());

    std::string canvNameDirPng = pngDir + canvName + ".png";
    c1_p[iter]->SaveAs(canvNameDirPng.c_str());

    std::string canvNameDirC = pngDir + canvName + ".C";
    c1_p[iter]->SaveAs(canvNameDirC.c_str());
    
    delete leg_p;
    delete dummyHist_p[iter];
    delete c1_p[iter];
  }


  delete outTree_p;

  for(unsigned int iter = 0; iter < nTrig; iter++){
    delete countPerRun_h[iter];
    delete countIntPerRun_h[iter];
    delete countIntPerRun_gr[iter];
  }
  outFile_p->Close();
  delete outFile_p;

  fileRun.clear();
  fileListAccept.clear();
  fileListAvgPrescal.clear();

  return 0;
}

int main(int argc, char *argv[])
{
  if(argc != 3){
    std::cout << "Usage: triggerParseTreeHist.exe <inParseDir> <inTrigFile>" << std::endl;
    std::cout << "Number of args given: " << argc << std::endl;
    for(int iter = 0; iter < argc; iter++){
      std::cout << "  argv[" << iter << "]: " << argv[iter] << std::endl;
    }
    return -1;
  }
  
  return triggerParseTreeHist(argv[1], argv[2]);
}
