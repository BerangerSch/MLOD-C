#include "manipulerDate.h"

#include <stdio.h>
#include <stdlib.h>


int nbJours(Month mois, int annee){
    int nbJours;
    switch (mois){
    case january: nbJours = 31;
        break;
    case february: 
        if(annee%4 == 0){
            nbJours=29;
        }else{
            nbJours=28;
        }
        break;
    case march: nbJours = 31;
        break;
    case april: nbJours = 30;
        break;
    case may: nbJours = 31;
        break;
    case june: nbJours = 30;
        break;
    case july: nbJours = 31;
        break;
    case august: nbJours = 31;
        break;
    case september: nbJours = 30;
        break;
    case october: nbJours = 31;
        break;
    case november: nbJours = 30;
        break;
    case december: nbJours = 31;
        break;
    }
    return nbJours;
}

void initialiseDate(Date *d){
    printf("Day ?   ");
    scanf("%d", &d->day);
    printf("\nMonth ?  ");
    scanf("%d", (int*) &d->month);
    printf("\nYear ?    ");
    scanf("%d", &d->year);
    printf("\n");
}

Date creerDateParCopie(){ //A éviter
    Date d;
    initialiseDate(&d);
    return d;
}

Date *newDate(){
    Date *d = (Date *)malloc(sizeof(Date));
    initialiseDate(d);
    return d;
}

void afficheDate(Date *d){
    printf("Today we are %dth of %u, %d\n", d->day, d->month, d->year);
}
