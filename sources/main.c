#include "euclidean.h"

int main(void) {
    fraction f = {340, 45};
    fraction f1 = {140, 26};
    fraction f2 = {380, 44};
    fraction f3 = {830, 675};

    printf("\tAlgoritmo de Euclides\n");
    printf("\nDadas las fracciones originales: \n");
    muestra(f);
    muestra(f1);
    muestra(f2);
    muestra(f3);

    printf("\nLas fracciones reducidas resultantes respectivamente son: \n");
    muestra(reduce(&f));
    muestra(reduce(&f1));
    muestra(reduce(&f2));
    muestra(reduce(&f3));

    return EXIT_SUCCESS;
}
