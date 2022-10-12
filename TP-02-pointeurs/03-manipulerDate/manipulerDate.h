#pragma once


typedef enum{
    january=1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december,
}Month;

typedef struct{
    int day;
    Month month;
    int year;
}Date;

int nbJours(Month mois, int annee);

void initialiseDate(Date *d);
Date creerDateParCopie();
Date* newDate();

void afficheDate(Date *d);
