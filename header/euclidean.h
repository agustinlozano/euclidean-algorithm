#ifndef EUCLIDEAN
#define EUCLIDEAN

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator, denominator;
} fraction;

fraction reduce(fraction *f);
/*  
 *  Es la funcion que se encarga de aplicar el algoritmo
 *  a la fraccion original, depende de la funcion mcd para
 *  calcular el maximo comun divisor, luego retorna la 
 *  fraccion resultante.
 */

int mcd(fraction *f);
/*  
 *  Calcula el maximo comun divisor estructura tipo fraction,
 *  luego lo retorna.
 */

void muestra(fraction f);
/*  
 *  Imprime el numerador y denominador de una estructura tipo fraction.  
 */

#endif
