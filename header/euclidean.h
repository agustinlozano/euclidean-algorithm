#ifndef EUCLIDEAN
#define EUCLIDEAN

#include <stdio.h>
#include <stdlib.h>

#define MACRO

typedef struct {
    int numerator, denominator;
} fraccion;

void initialize(fraccion *f);

int mcd(fraccion *f);

fraccion reduce(fraccion *f);

void muestra(fraccion f);

#endif
