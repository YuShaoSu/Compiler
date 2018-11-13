#!/bin/bash

make clean
make

./parser test/no_definition
./parser test/evil1
./parser test/evil2
./parser test/evil3
./parser test/evil4
