#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
ar -t liball.a
rm *.c
rm *.o
