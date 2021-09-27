#include "euclidean.h"

fraction reduce(fraction *f) {
    fraction fResult;
    int p = f -> numerator;
    int q = f -> denominator;

    int mcdValue = mcd(f);

    p = p / mcdValue;
    q = q / mcdValue;

    fResult.numerator = p;
    fResult.denominator = q;

    return fResult;
}

int mcd(fraction *f) {
    int a, b, q, r, mcdValue;

    a = (f -> numerator);
    b = (f -> denominator);

    while(b > 0){
        q = a / b;
        r = a - (b * q);

        a = b;
        b = r;
    }

    return (mcdValue = a);
}

void muestra(fraction f) {
    printf("p/q = %d/%d\n", f.numerator, f.denominator);
}
