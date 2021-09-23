#ifndef EUCLIDEAN
#define EUCLIDEAN

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator, denominator;
} fraction;

void initialize(fraction *f);

int mcd(fraction *f);

fraction reduce(fraction *f, int mcd);

void muestra(fraction f);

#endif
