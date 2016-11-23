#!/bin/bash

runArray=(285480 285505 285517 285530 285537 285538 285539 285549 285684 285718 285720 285726 285739 285749 285750)

for i in "${runArray[@]}"
do
    ./runAllCommandsSpectra.sh $i
done
   
