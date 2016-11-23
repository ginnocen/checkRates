#!/bin/bash

mkdir -p outDir

runArray=(285480 285505 285517 285530 285537 285538 285539 285549 285684 285718 285720 285726 285739 285749 285750)
#runArray=(285480)
hlttypeArray=("accept" "avg_prescale")

for i in "${runArray[@]}"
do
    for j in "${hlttypeArray[@]}"
    do	
	/afs/cern.ch/user/e/echapon/workspace/public/RunPrep2016/HLT_runbyrun/recorded_by_hltpath_fromDQM  --hlttype $j --minrun $i --maxrun $i >& outDir/$j\_Run$i.txt
#       /afs/cern.ch/user/e/echapon/workspace/public/RunPrep2016/HLT_runbyrun/recorded_by_hltpath_fromDQM  --hlttype $j --minrun $i --maxrun $i --basedir /afs/cern.ch/user/m/mverweij/work/pPb8TeV/rates/chrisTool/DQM --json /afs/cern.ch/user/m/mverweij/work/pPb8TeV/rates/chrisTool/rateDir/JSONDir/json_8tev.txt >& outDir/$j\_Run$i.txt
    done
done
