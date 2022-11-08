#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

void afficheElement(Element e) {
	printf("%s ",(char*)e);
}

void detruireElement(Element e) {}

bool equalsElement(Element e1, Element e2){
	return strcmp((char *)e1,(char *)e2)==0;
}

int main(void){
	Liste l;

	l = NULL;
    if(estVide(l)){
	    printf("estVide(l) = %s\n", "TRUE");
    }else{
        printf("estVide(l) = %s\n", "FALSE");
    }

	l = ajoutTete("C",l);
	l = ajoutTete("en",l);
	l = ajoutTete("programmer",l);
	l = ajoutTete("adore",l);
	l = ajoutTete("monde",l);
	l = ajoutTete("le",l);
	l = ajoutTete("Tout",l);

	afficheListe_r(l);

	detruire_r(l);

	return 0;
}