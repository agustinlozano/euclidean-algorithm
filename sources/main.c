#include "euclidean.h"

    //Algoritmo modelo
    /*
        int a, b, q, r, numerator, denominator;

        numerator = 340
        denominator = 45

        a = numerator;
        b = denominator;

        while(b >= 0){
            q = a / b;
            r = a - (b * q);

            a = b;
            b = r;
        }

        numerator = numerator / a;
        denominator = denominator / a;
    */

int main(void) {
    fraction f;
    int mcdValue;

    printf("\tAlgoritmo de Euclides\n");
    initialize(&f);

    mcdValue = mcd(&f);
    printf("\nMCD: %d\n", mcdValue);
    fraction fResult = reduce(&f, mcdValue);

    muestra(fResult);

    return EXIT_SUCCESS;
}
