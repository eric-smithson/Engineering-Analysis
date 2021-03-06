#include <stdio.h>
#ifndef STATLIB_H
#define STATLIB_H
#include <math.h> /* for sqrt()used in stdDeviation() */
extern double mean(int totnum, double data[]);
extern double minimum(int totnum, double data[]);
extern double maximum(int totnum, double data[]);
extern double median(int totnum, double data[]);
extern double variance(int totnum, double data[]);
extern double stdDeviation(int totnum, double data[]);
extern int aboveVal(int totnum, double data[], double val);
extern void sort(int totnum, double data[]);
#ifdef _CH_
#pragma importf "statlib.c"
#endif
#endif /* STATLIB_H */
