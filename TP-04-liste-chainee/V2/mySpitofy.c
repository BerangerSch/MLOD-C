#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedListOfMusic.h"

void afficheElement(Element e)
{
    Musique *musique = (Musique *)e;
    printf("%s,", musique->name);
    printf("%s,", musique->artist);
    printf("%s,", musique->album);
    printf("%s,", musique->genre);
    printf("%s,", musique->discNumber);
    printf("%s,", musique->trackNumber);
    printf("%s", musique->year);
    printf("\n");
}

void detruireElement(Element e)
{
    Musique *mus = (Musique *)e;
    free(mus->name);
    free(mus->genre);
    free(mus->album);
    free(mus->artist);
    free(mus->discNumber);
    free(mus->trackNumber);
    free(mus->year);
    free(mus);
    e = NULL;
}

// compare deux elements (0 = FALSE/1 = TRUE)
bool equalsElement(Element e1, Element e2)
{
    Musique *mus1 = (Musique *)e1;
    Musique *mus2 = (Musique *)e2;

    if (strcmp(mus1->name, mus2->name) != 0){
        return 0;
    }
    if (strcmp(mus1->genre, mus2->genre) != 0){
        return 0;
    }
    if (strcmp(mus1->album, mus2->album) != 0){
        return 0;
    }
    if (strcmp(mus1->artist, mus2->artist) != 0){
        return 0;
    }
    if (strcmp(mus1->discNumber, mus2->discNumber) != 0){
        return 0;
    }
    if (strcmp(mus1->trackNumber, mus2->trackNumber) != 0){
        return 0;
    }
    if (strcmp(mus1->year, mus2->year) != 0){
        return 0;
    }
    return 1;
}

// Fonction pour lire le fichier csv en entrée
Liste readFile(FILE *csv)
{
    Liste l;
    int tailleLigne = 256;
    l = NULL;
    Musique *musicTemp;
    char *line, *copy, *value, *tracer;
    line = calloc(tailleLigne, sizeof(char));
    while (fgets(line, tailleLigne, csv) != NULL)
    {
        musicTemp = (Musique *)malloc(sizeof(Musique));
        copy = strdup(line);
        tracer = copy;

        value = strsep(&copy, ",\n");
        musicTemp->name = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->name, value);

        value = strsep(&copy, ",\n");
        musicTemp->artist = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->artist, value);

        value = strsep(&copy, ",\n");
        musicTemp->album = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->album, value);

        value = strsep(&copy, ",\n");
        musicTemp->genre = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->genre, value);

        value = strsep(&copy, ",\n");
        musicTemp->discNumber = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->discNumber, value);

        value = strsep(&copy, ",\n");
        musicTemp->trackNumber = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->trackNumber, value);

        value = strsep(&copy, ",\n");
        musicTemp->year = calloc(strlen(value) + 1, sizeof(char));
        strcpy(musicTemp->year, value);

        l = ajoutFin_i(musicTemp, l);
        free(tracer);
    }
    free(line);
    return l;
}

Liste triParAnnee(Liste l){
    Liste p = l;
    Liste triee;
    
}

int main(void)
{
    FILE *fichierCsv;
    fichierCsv = fopen("music.csv", "r");
    Liste bibliotheque;

    bibliotheque = readFile(fichierCsv);
    afficheListe_i(bibliotheque);
    detruire_i(bibliotheque);

    fclose(fichierCsv);
    return 0;
}