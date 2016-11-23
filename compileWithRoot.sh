#!/bin/bash
if [ $# -ne 1 ]
then
    echo "Usage: ./compile.sh <inputFile>"
    exit 1
fi

path=$PWD
echo $path
binPath=$path/bin/

mkdir -p $binPath

slashStr="/"
fileName=$1
rest=${fileName#*$slashStr}
pos=$(( ${#fileName} - ${#rest} ))
fileName=${fileName:pos:${#fileName}-pos}
fileName=$binPath/$fileName

g++ $1 $(root-config --cflags --libs) -Werror -Wall -Wextra -I $path -O2 -o "${fileName/%.C/}.exe"
