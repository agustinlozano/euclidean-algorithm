#include "euclidean.h"

    //Algoritmo modelo
    /*
        int a, b, q, r, numerator, denominator;

        a = 340;
        b = 45;

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
    fraccion fraction;
    int mcdValue;

    printf("\tAlgoritmo de Euclides\n");
    initialize(&fraction);

    mcdValue = mcd(&fraction);
    printf("\nMCD: %d", mcdValue);
    fraccion fResult = reduce(&fraction);

    //muestra(fraction);
    
    return EXIT_SUCCESS;
}
