#ifndef	MAIN_H_
#define	MAIN_H_

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

float mul(float, float);
float divi(float, float);
float add(float, float);
float sub(float, float);
float root(float);
float fact(float);
float powr(float, int);
float simu(float, float, float, float, float, float);
int convert_to_d(int n, int b);
int convert(int n, int b, int d);
float quad(float, float, float);
int to_dest(int in_dec, int d);

#endif
