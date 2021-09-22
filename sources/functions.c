#include "euclidean.h"

void initialize(fraccion *f) {
    int p, q;

    printf("\nVamos a inicializar la fraccion introduciendo los valores");
    printf("\nIngrese el valor del numerador: ");
    scanf(" %d", &p);

    //Aplicar validacion p

    printf("\nIngrese el valor del denominador: ");
    scanf(" %d", &q);

    //Aplicar validacion q

    f -> numerator = p;
    f -> denominator = q;
}

int mcd(fraccion *f) {
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

fraccion reduce(fraccion *f) {
    fraccion fResult;
    int p = f -> numerator;
    int q = f -> denominator;

    //Funcion incompleta.

    return fResult;
}
