#!/bin/bash

echo $1

#run Emilien’s tool
sh getFiresRun.sh
#1st step Chris’s tool
sh compileWithRoot.sh src/parseFiresRateFile.C
#execute
#./bin/parseFiresRateFile.exe input/keepTriggersCoreList.txt  outDir/accept_Run285517.txt
./bin/parseFiresRateFile.exe input/keepTriggersCoreList.txt  outDir/accept_Run$1.txt

#./bin/parseFiresRateFile.exe input/keepTriggersCoreList.txt outDir/avg_prescale_Run285517.txt
./bin/parseFiresRateFile.exe input/keepTriggersCoreList.txt outDir/avg_prescale_Run$1.txt

#compile next script
sh compileWithRoot.sh src/triggerParseTreeHist.C
#execute
./bin/triggerParseTreeHist.exe outParseDir/ input/keepTriggersCoreList.txt
