#ifndef EUCLIDEAN
#define EUCLIDEAN

#include <stdio.h>
#include <stdlib.h>

#define MACRO

typedef struct {
    int numerador, denominador;
} fraccion;

int mcd(fraccion *);
//Calcula el minimo comun divisor y lo retorna

fraccion reduce(fraccion *);
//Retorna la fraccion reducida

void muestra(fraccion);
//Imprime los valores por pantalla

#endif
