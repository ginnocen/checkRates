//c headers
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

//ROOT headers
#include "TDatime.h"

//include headers
#include "include/checkMakeDir.h"
#include "include/returnFileList.h"

const std::string outDirStr = "outParseDir/";
const std::string txtStr = ".txt";

int parseFiresRateFile(const std::string filterTrigFile, const std::string inFiresFile)
{
  checkMakeDir(outDirStr);
  
  if(!checkFile(filterTrigFile)){
    std::cout << "Filter file \'" << filterTrigFile << "\' is not a file, check input. return 1." << std::endl;
    return 1;
  }
  else if(filterTrigFile.size() < txtStr.size()){
    std::cout << "Filter file \'" << filterTrigFile << "\' is not a file ending in \'" << txtStr << "\', check input. return 1." << std::endl;
    return 1;
  }
  else if(filterTrigFile.substr(filterTrigFile.size() - txtStr.size(), txtStr.size()).find(txtStr) == std::string::npos){
    std::cout << "Filter file \'" << filterTrigFile << "\' is not a file ending in \'" << txtStr << "\', check input. return 1." << std::endl;
    return 1;
  }

  if(!checkFile(inFiresFile)){
    std::cout << "Fires file \'" << inFiresFile << "\' is not a file, check input. return 1." << std::endl;
    return 1;
  }
  else if(inFiresFile.size() < txtStr.size()){
    std::cout << "Fires file \'" << inFiresFile << "\' is not a file ending in \'" << txtStr << "\', check input.return 1." << std::endl;
    return 1;
  }
  else if(inFiresFile.substr(inFiresFile.size() - txtStr.size(), txtStr.size()).find(txtStr) == std::string::npos){
    std::cout << "Fires file \'" << inFiresFile << "\' is not a file ending in \'" << txtStr << "\', check input. return 1." << std::endl;
    return 1;
  }
  
  std::string outFileName = inFiresFile;
  while(outFileName.find("/") != std::string::npos){
    outFileName.replace(0, outFileName.find("/")+1, "");
  }

  outFileName.replace(outFileName.find(txtStr), txtStr.size(), "");
  outFileName = outDirStr + outFileName;

  outFileName = outFileName + "_PARSE.txt";

  std::ofstream outFile(outFileName.c_str());
  outFile << "Inputs:" << std::endl;
  outFile << " filterTrigFile: " << filterTrigFile << std::endl;
  outFile << " inFiresFile: " << inFiresFile << std::endl;
  outFile << std::endl;
  outFile.close();

  std::ifstream filterFile(filterTrigFile.c_str());
  std::string tempStr;
  while(std::getline(filterFile, tempStr)){
    while(tempStr.find(" ") != std::string::npos){
      tempStr.replace(tempStr.find(" "), 1, "");
    }

    if(tempStr.size() == 0) continue;

    std::vector<std::string> filterStrings;

    while(tempStr.find("*") != std::string::npos){
      filterStrings.push_back(tempStr.substr(0, tempStr.find("*")));
      tempStr.replace(0, tempStr.find("*")+1, "");
    }
    if(tempStr.size() != 0) filterStrings.push_back(tempStr);
    
    std::ifstream firesFile(inFiresFile.c_str());
    while(std::getline(firesFile, tempStr)){
      bool keepLine = true;

      for(unsigned int iter = 0; iter < filterStrings.size(); iter++){
	std::string tempFilterString = filterStrings.at(iter);

	if(tempFilterString.find("!") != std::string::npos){

	  tempFilterString.replace(0, 1, "");

	  if(tempStr.find(tempFilterString) != std::string::npos){
            keepLine = false;
            break;
          }
	}
	else{
	  if(tempStr.find(tempFilterString) == std::string::npos){
	    keepLine = false;
	    break;
	  }
	}
      }

      if(keepLine){
	outFile.open(outFileName.c_str(), std::ios::app);
	outFile << tempStr << std::endl;
	outFile.close();
      }
    }
    firesFile.close();
  }

  

  filterFile.close();

  return 0;
}

int main(int argc, char *argv[])
{
  if(argc != 3){
    std::cout << "Usage: parseFiresRateFile.exe <filterTrigFile> <inFiresFile>" << std::endl;
    std::cout << "Number of args given: " << argc << std::endl;
    for(int iter = 0; iter < argc; iter++){
      std::cout << "  argv[" << iter << "]: " << argv[iter] << std::endl;
    }
    return -1;
  }

  std::string fileDirStr = argv[2];
  
  int retVal = 1;
  if(checkFile(fileDirStr)){
    parseFiresRateFile(argv[1], fileDirStr);
  }
  else if(checkDir(fileDirStr)){
    std::vector<std::string> fileList = returnFileList(fileDirStr, ".txt");

    for(unsigned int iter = 0; iter < fileList.size(); iter++){
      parseFiresRateFile(argv[1], fileList.at(iter));
    }
  }

  return retVal;
}
