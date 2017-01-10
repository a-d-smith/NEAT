#!/bin/bash

MY_DIR=`pwd`
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/../build
make
cd $MY_DIR
