/**
 * @file main.cpp
 * @author Robin Alonzo,
 * @brief Tester les services proposés par le module Fraction
 * @date 2021-11-17
 */

#include "fractions.h"
#include <iostream>
using namespace std;

//Déclarations des sous programmes de tests
void testAfficher();
void testEstReduite();
void testSaisir();

int main(void)
{

    saisir();
    return 0;
}

// definition des sous programmes de test
void testAfficher()
{
    //Test de la procédure afficher
    afficher(FRACTION_NULLE);
    afficher({-1,3});
    afficher({0,3});
}

void testEstReduite()
{
    //Test de la fonction est réduite
    if (estReduite(FRACTION_NULLE))
    {
        cout << "La fraction est reduite" << endl;
    }
    else
    {
        cout << "La fraction n'est pas reduite" << endl;
    }
}

void testSaisir()
{
    Fraction frac1;
    frac1 = saisir();
    afficher(frac1);
}