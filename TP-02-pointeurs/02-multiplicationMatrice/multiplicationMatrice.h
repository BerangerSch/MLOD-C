#pragma once

#include <stdint.h>
#define SIZE 5


typedef struct{
    int nbLines;
    int nbColumns;
    int **values;
}Matrix;

void matrix_mult(Matrix matriceResultat, Matrix matrice1, Matrix matrice2);
void matrix_print(Matrix matriceResultat);
