#!/usr/bin/env bash

set -e

cd build
cmake -G "Unix Makefiles" ..
make
./bridb
