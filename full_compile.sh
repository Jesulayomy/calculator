#!/bin/bash
clear
ls
gcc -c addition.c converter.c division.c factorial.c multiplication.c powers.c quadratic.c root.c simultaneous.c subtraction.c
ls
sleep 2
ar -rcs libarithmetic.a *.o
rm *.o
clear
ls
ar -t libarithmetic.a
sleep 2
gcc calc.c -L. -larithmetic -o calculator
clear
