#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
rm *.c
rm *.o
