/**
 * @file bibTableau.h
 * @author Robin Alonzo
 * @brief Entete du module bibTableau
 * @date 2021-11-23
 */

#ifndef BIBTABLEAU_H
#define BIBTABLEAU_H 

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

/**
 * @brief 
 * 
 * @param tab 
 * @param lgtab 
 * @param val 
 * @param trouve 
 * @param pos 
 * @param parcoursCase 
 */
void recherchePremiereOccDichoPersonne(int tab[], unsigned int lgtab, int val, bool &trouve, unsigned int &pos, unsigned int &parcoursCase);
//Modificateurs

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


#endif