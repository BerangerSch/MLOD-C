#include "multiplicationMatrice.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 5

int main(void){
    Matrix matrice1;
    matrice1.nbLines=5;
    matrice1.values={{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    Matrix matrice2={{6, 7, 8, 9, 10}, {6, 7, 8, 9, 10}, {6, 7, 8, 9, 10}, {6, 7, 8, 9, 10}, {6, 7, 8, 9, 10}};
    uint64_t matriceResultat[SIZE][SIZE];

    matrix_mult(matriceResultat, matrice1, matrice2);
    matrix_print(matrice1);
    matrix_print(matriceResultat);

    return EXIT_SUCCESS;
}