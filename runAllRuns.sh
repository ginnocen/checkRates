#!/bin/bash

runArray=(285480 285505 285517 285530 285537 285538 285539 285549)

for i in "${runArray[@]}"
do
    ./runAllCommandsExt.sh $i
done
   
