/**
 * @file bibTableau.h
 * @author Robin Alonzo
 * @brief Entete du module bibTableau
 * @date 2021-11-23
 */

#ifndef BIBTABLEAU_H
#define BIBTABLEAU_H 

#include "personne.h"

//Constantes

//Constructeurs

//Observateurs
/**
 * @brief recherche dichotomique d’un entier dans un tableau d’entiers trié
 * 
 * @param tab
 * @param lgtab 
 * @param val 
 * @param trouve 
 * @param pos 
 */
void recherchePremiereOccurence(int tab[], unsigned int lgtab, int val, bool &trouve, unsigned int &pos, unsigned int &parcoursCase);

//Modificateurs


/**
 * @brief Le tri à bulles est un algorithme de tri qui consiste à parcourir la liste pour trier de manière répétée tout en comparant des paires d'éléments adjacents. Si une paire d'éléments est dans le mauvais ordre, ils sont permutés pour les placer dans le bon ordre.
 * 
 * @param tab 
 * @param lgTab 
 */
void triBulle(int tab[], unsigned int lgTab);

/**
 * @brief Faire le tri d'une tableau contenant des personnes
 * 
 * @param tab 
 * @param lgTab 
 */
void triBulle(Personne tab[], unsigned int lgTab);
//Calculs

//Entrées - Sorties 
/**
 * @brief affiche à l'écran le contenu d'aun tableau tab contenant lgTab > 0 éléments
 *       si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')
 * 
 * @param tab 
 * @param lgTab 
 */
void afficher(const int tab[], unsigned int lgTab);

/**
 * @brief affiche à l'écran le contenu d'un tableau tab contenant lgTab > 0 éléments de type Personne
 *        si lgTab = 0, affiche un message indiquant que le tableau n'a pas de valeur significative (tableau 'vide')
 * @param tab 
 * @param lgTab 
 */
void afficher(const Personne tab[], unsigned short int lgTab);    

#endif