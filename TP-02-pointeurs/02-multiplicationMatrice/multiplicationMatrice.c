#include "multiplicationMatrice.h"

#include <stdint.h>
#include <stdio.h>

#define SIZE 5


void matrix_mult(Matrix matriceResultat, Matrix matrice1, Matrix matrice2){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            matriceResultat.values[i][j] = 0;
            for(int k=0; k<SIZE; k++){
                matriceResultat.values[i][j] += matrice1.values[i][k] * matrice2.values[k][j];
            } 
        }
    }
}

void matrix_print(Matrix matriceResultat){
    for(int i=0; i<matriceResultat.nbColumns; i++){
        for(int j=0; j<matriceResultat.nbLines; j++){
            printf("%ld     ", matriceResultat.values[i][j]);
        }
        printf("\n");
    }
}