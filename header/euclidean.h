#ifndef EUCLIDEAN
#define EUCLIDEAN

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator, denominator;
} fraction;

int mcd(fraction *f);

fraction reduce(fraction *f);

void muestra(fraction f);

#endif
