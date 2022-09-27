/**
 * @file personne.h
 * @author Robin Alonzo
 * @brief Entete du module personne
 * @date 2021-11-23
 */

#ifndef PERSONNE_H
#define PERSONNE_H

#include <iostream>
using namespace std;

// Définition des types du module
struct Adresse 
{
    string numRue; 
    string nomRue;
    unsigned short int codePostal;
    string nomVille; 
};

struct Personne
{
    string nom;
    string prenom;
    Adresse adresse;
};

//Constantes
const Personne PERSONNE_NULLE = {"Voisin","Sophie",{"12","rue des arenes",64240,"Hasparren"}};
//Constructeurs

//Observateurs

//Modificateurs

//Calculs

//Entrées - Sorties 
/**
 * @brief afficher
 * 
 * @param personne La personne à afficher
 */
void afficher(const Personne& personne);

#endif