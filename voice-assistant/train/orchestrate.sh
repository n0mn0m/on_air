#!/bin/bash

mkdir -p tmp/
mkdir -p model/

./tfwords.sh
./generate.sh
./train.sh
./freeze.sh
./tfconv.sh
./convert.sh
./spectro.sh
