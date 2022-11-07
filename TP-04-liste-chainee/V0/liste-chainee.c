#include "liste-chainee.h"
#include <stdlib.h>
#include <stdio.h>

#define TODO NULL;

// retourne vrai si l est vide et faux sinon
bool estVide(Liste l) {
	return l == NULL;
}

// créer une liste d'un seul élément contenant la valeur v
Liste creer(Element v){
	Liste *liste = malloc(sizeof(*liste));
	Cellule *cellule = malloc(sizeof(*cellule));

	if(estVide(*liste)){
		exit(EXIT_FAILURE);
	}

	cellule->val = v;
	cellule->suiv = NULL;
	*liste = cellule;

	return *liste;
}

// ajoute l'élément v en tete de la liste l
Liste ajoutTete(Element v, Liste l) {
	Cellule *celluleSuiv = malloc(sizeof(*celluleSuiv));
	Cellule *celluleTete = malloc(sizeof(*celluleTete));

	celluleSuiv->val = l->val;
	celluleSuiv->suiv = l->suiv;

	celluleTete->val = v;
	celluleTete->suiv = celluleSuiv;

	free(l);
	return celluleTete;
}


void afficheElement(Element e) {
	printf("%i ",e);
}

// affiche tous les éléments de la liste l
// Attention, cette fonction doit être indépendante du type des éléments de la liste
// utiliser une fonction annexe affiche_element
// Attention la liste peut être vide !
// version itérative
void afficheListe_i(Liste l) {
	if(estVide(l)){
		exit(EXIT_FAILURE);
	}

	struct cellule_s *suivant;
	Cellule cellule = *l;

	while(suivant != NULL){
		afficheElement(cellule.val);
		suivant = cellule.suiv;
	}
}

// version recursive
void afficheListe_r(Liste l) {
	if(estVide(l)){
		exit(EXIT_FAILURE);
	}
	Cellule cellule = *l;
	afficheElement(cellule.val);
	if(cellule.suiv!=NULL){
		afficheListe_r(cellule.suiv);
	}
}

void detruireElement(Element e) {
	free(&e);
}

// Détruit tous les éléments de la liste l
// version itérative
void detruire_i(Liste l) {
	if(estVide(l)){
		exit(EXIT_FAILURE);
	}
	Cellule cellule = *l;
	struct cellule_s *suivant = cellule.suiv;

	while(suivant != NULL){
		suivant = cellule.suiv;
		detruireElement(&cellule);
	}
}

// version récursive
void detruire_r(Liste l) {
	TODO;
}

// retourne la liste dans laquelle l'élément v a été ajouté en fin
// version itérative
Liste ajoutFin_i(Element v, Liste l) {
	return TODO;
}

// version recursive
Liste ajoutFin_r(Element v, Liste l) {
	return TODO;
}

// compare deux elements
bool equalsElement(Element e1, Element e2){
	return e1 == e2;
}

// Retourne un pointeur sur l'élément de la liste l contenant la valeur v ou NULL
// version itérative
Liste cherche_i(Element v,Liste l) {
	return TODO;
}

// version récursive
Liste cherche_r(Element v,Liste l) {
	return TODO;
}

// Retourne la liste modifiée dans la laquelle le premier élément ayant la valeur v a été supprimé
// ne fait rien si aucun élément possède cette valeur
// version itérative
Liste retirePremier_i(Element v, Liste l) {
	return TODO;
}


// version recursive
Liste retirePremier_r(Element v, Liste l) {
	return TODO;
}


void afficheEnvers_r(Liste l) {
	TODO;
}



