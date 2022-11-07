#include <stdio.h>
#include <stdlib.h>

int calculTailleTableau(int *tableau1){
    int tailleTableauFinal=0;

    for (long unsigned int i = 0 ; i < sizeof(tableau1) ; i++){
        tailleTableauFinal+=tableau1[i];
    }
    return tailleTableauFinal;
}

void repeat(int *tableau1, int *tableau2, int *tableauFinal){
    int tailleTableauFinal = calculTailleTableau(tableau1);
    for (int j = 0; j < tailleTableauFinal; j++){
        for (long unsigned int k = 0; k < sizeof(tableau1) ; k++){
            for (int l = 0; l < tableau1[k]; l++){
                tableauFinal[j] = tableau2[k];
                j++;
            }
        }
    }
}

int main(void){
    int tailleTableau = 4;
    int tableau1[tailleTableau];
    tableau1[0]=1;
    tableau1[1]=2;
    tableau1[2]=4;
    int tableau2[tailleTableau];
    tableau2[0]=10;
    tableau2[1]=3;
    tableau2[2]=8;

    int tailleTableauFinal= calculTailleTableau(tableau1);
    int tableauFinal[tailleTableauFinal];
    repeat(tableau1, tableau2, tableauFinal);

    for(int i=0; i<tailleTableauFinal; i++){
        printf("%d\n", tableauFinal[i]);
    }

    return 0;
}