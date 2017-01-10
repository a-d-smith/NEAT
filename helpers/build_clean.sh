#!/bin/bash

MY_DIR=`pwd`
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/../build
rm -rf *
cmake ..
make
cd $MY_DIR
