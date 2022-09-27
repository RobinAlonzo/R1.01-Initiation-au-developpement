/**
 * @file personne.cpp
 * @author Robin Alonzo
 * @brief Le corps du module personne
 * @date 2021-11-23
 */

#include "personne.h"
#include <iostream>
using namespace std;

void afficher(const Personne& personne)
{
    cout << "  {" << personne.nom << ", " << personne.prenom << ", { " ;
    cout <<        personne.adresse.numRue << ", " ;
    cout <<        personne.adresse.nomRue << ", ";
    cout <<        personne.adresse.codePostal << ", ";
    cout <<        personne.adresse.nomVille << " }";
    cout << "}";
}