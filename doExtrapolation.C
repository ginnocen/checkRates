const Int_t nCol = 12;
const Int_t col[nCol] = {kBlue - 3, kYellow + 1, kMagenta + 2, kGreen + 3, kOrange, kRed + 1, kCyan+1,kBlack,kAzure+1,kGray,kOrange+7,28};
const Int_t style[nCol] = {20};

//void doExtrapolation(int nfills = 15, int nomRun = 285530, int minRun = 285480, std::string inTrigFile = "keepTriggersExtList.txt", std::string rootFile = "outRootDir/triggerTree_Run285480to285549.root") 
void doExtrapolation(int nfills = 15, int nomRun = 285530, int minRun = 285480, std::string inTrigFile = "input/keepTriggersSpectraList.txt", std::string rootFile = "outRootDir/triggerTree_Run285480to285549.root")

{

	cout<<"check 1"<<endl;
  int binNom = nomRun - minRun + 1;

  std::vector<std::string> trigNames;
  std::ifstream trigFile(inTrigFile.c_str());
  std::string tempTrigStr;

  while(std::getline(trigFile, tempTrigStr)){
	cout<<"check 2"<<endl;
    while(tempTrigStr.find(" ") != std::string::npos){
      tempTrigStr.replace(tempTrigStr.find(" "), 1, "");
    }

    if(tempTrigStr.size() == 0) continue;

    trigNames.push_back(tempTrigStr);
    //Printf("trig: %s",tempTrigStr.c_str());
  }

  //HLT_PAAK4CaloJet100_Eta5p1_v_countPerRun_h
  cout<<"check 2"<<endl;

  TFile *f = new TFile(rootFile.c_str());

  const unsigned int nTrig = trigNames.size();
	cout<<"check 2.1, nTrig= "<<nTrig<<endl;
  int nominalCounts[nTrig];// = {0};
  TH1F *hCountPerRun[nTrig];
  TGraph *grIntCount[nTrig];
  TGraph *grIntCountExt[nTrig];
  
  cout<<"check 3"<<endl;

  for(unsigned int iter = 0; iter < nTrig; iter++){
  cout<<"check 4"<<endl;

    TString histName = Form("%s_countPerRun_h",trigNames.at(iter).c_str());
    hCountPerRun[iter] = dynamic_cast<TH1F*>(f->Get(histName.Data()));
    TString graphName = Form("%s_countIntPerRun_gr",trigNames.at(iter).c_str());
    grIntCount[iter] = dynamic_cast<TGraph*>(f->Get(graphName.Data()));
    TString graphExtName = Form("%s_countIntPerRunExt_gr",trigNames.at(iter).c_str());
    //grIntCountExt[iter] = dynamic_cast<TGraph*>(grIntCount[iter]->Clone("graphExtName"));
    grIntCountExt[iter] = new TGraph();
    grIntCountExt[iter]->SetName(graphExtName);
    grIntCountExt[iter]->SetTitle(graphExtName);
    
    nominalCounts[iter] = hCountPerRun[iter]->GetBinContent(binNom);
    Printf("%s nominalCounts = %d",trigNames.at(iter).c_str(),nominalCounts[iter]);
    if(trigNames.at(iter).find("HLT_PAAK4CaloJet40_Eta5p1_v") != std::string::npos)
      nominalCounts[iter] *= 2.;
    if(trigNames.at(iter).find("HLT_PAAK4CaloJet60_Eta5p1_v") != std::string::npos)
      nominalCounts[iter] *= 0.5;
    
    for(unsigned int ifill = 0; ifill<nfills; ifill++) {
      double x,y;
      grIntCount[iter]->GetPoint(grIntCount[iter]->GetN()-1,x,y);
      grIntCountExt[iter]->SetPoint(grIntCountExt[iter]->GetN(),x+(double)(ifill+1)*10.,y+(double)(ifill+1)*nominalCounts[iter]);
    }
  }

  // const Int_t nTrigType = 6;
  // const std::string trigTypes[nTrigType] = {"Calo", "PF", "Photon","BJet","Dmeson","FullTracks"};
  const Int_t nTrigType = 3;
  const std::string trigTypes[nTrigType] = {"Dmeson","FullTracks","PAL1MinimumBiasHF_OR_SinglePixelTrack"};
	
  TCanvas* c1_p[nTrigType];
  TH1F* dummyHist_p[nTrigType];
  cout<<"check 5"<<endl;

  for(unsigned int iter = 0; iter < nTrigType; iter++){
    std::string canvName = "rate" + trigTypes[iter] + "_c";
    std::string dummyName = "dummyHist" + std::to_string(iter) + "_h";

    c1_p[iter] = new TCanvas(canvName.c_str(), canvName.c_str(), 800, 600);

    double nRunBins, ytmp;
	cout<<"check 5.4"<<endl;
    grIntCountExt[iter]->GetPoint(grIntCountExt[iter]->GetN()-1,nRunBins,ytmp);
	cout<<"check 5.5"<<endl;
    dummyHist_p[iter] = new TH1F(dummyName.c_str(), ";Run;Counts", (int)nRunBins, 0, nRunBins);
  cout<<"check 6"<<endl;

    dummyHist_p[iter]->Draw();

    double dummyMax = -1.;
    double dummyMin = 100000000;
    
    unsigned int drawIter = 0;
    std::vector<unsigned int> drawPos;

    TLegend* leg_p = new TLegend(.15, .6, .7, .93);
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
	// if(countIntPerRun_h[trigIter]->GetMaximum() > dummyMax){
	//   dummyMax = countIntPerRun_h[trigIter]->GetMaximum()*10;
	// }

	// if(countIntPerRun_h[trigIter]->GetMinimum() < dummyMin){
	//   dummyMin = countIntPerRun_h[trigIter]->GetMinimum();
	// }

	// if(countPerRun_h[trigIter]->GetMaximum() > dummyMax){
	//   dummyMax = countPerRun_h[trigIter]->GetMaximum()*100;
	// }

	// if(countPerRun_h[trigIter]->GetMinimum() < dummyMin){
	//   dummyMin = countPerRun_h[trigIter]->GetMinimum();
	// }

        grIntCount[trigIter]->SetMarkerColor(col[drawIter]);
        grIntCount[trigIter]->SetMarkerStyle(style[drawIter]);
        grIntCount[trigIter]->SetLineColor(col[drawIter]);
        grIntCount[trigIter]->SetLineWidth(2);
        grIntCount[trigIter]->Draw("l");

        grIntCountExt[trigIter]->SetMarkerColor(col[drawIter]);
        grIntCountExt[trigIter]->SetMarkerStyle(20);
        grIntCountExt[trigIter]->SetLineColor(col[drawIter]);
        grIntCountExt[trigIter]->SetLineWidth(2);
        grIntCountExt[trigIter]->SetLineStyle(2);
        grIntCountExt[trigIter]->Draw("lp");
  cout<<"check 7"<<endl;

        double xtmp2,ytmp2;
        grIntCountExt[trigIter]->GetPoint(grIntCountExt[trigIter]->GetN()-1,xtmp2,ytmp2);
        if(ytmp2>dummyMax) dummyMax = ytmp2;

        std::string legStr = trigNames.at(trigIter).c_str();
        legStr.replace(legStr.find("HLT_"), 4, "");
        legStr.replace(legStr.find("_v"), legStr.size()-legStr.find("_v"), "");
        //leg_p->AddEntry(countIntPerRun_h[trigIter], legStr.c_str(), "L F");
        leg_p->AddEntry(grIntCountExt[trigIter], legStr.c_str(), "LP");
        
        drawIter++;
      }
    }

    dummyMax*=1.1;
    Printf("%d dummyMax = %f",iter,dummyMax);
    
    dummyHist_p[iter]->GetXaxis()->CenterTitle();
    dummyHist_p[iter]->GetYaxis()->CenterTitle();
    dummyHist_p[iter]->GetYaxis()->SetTitleOffset(dummyHist_p[iter]->GetYaxis()->GetTitleOffset()*1.2);

    dummyHist_p[iter]->SetMaximum(dummyMax);
    dummyHist_p[iter]->SetMinimum(0.);//dummyMin/2);

    gPad->SetRightMargin(0.05);
    gPad->SetTopMargin(0.05);
    gPad->SetTicks(1,1);
    
    gStyle->SetOptStat(0);
    
    gPad->Modified();
    //gPad->SetLogy();

    leg_p->Draw("SAME");

    std::string canvNameDirPng = canvName + ".png";
    c1_p[iter]->SaveAs(canvNameDirPng.c_str());
    
  }
  
}
