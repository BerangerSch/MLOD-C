#include "echangeContenu.h"

void echangeContenu(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}