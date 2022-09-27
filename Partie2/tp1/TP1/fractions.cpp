/**
 * @file fractions.cpp
 * @author Robin Alonzo,
 * @brief Le corps du module fractions
 * @date 2021-11-17
 */

#include "fractions.h"
#include <iostream>
using namespace std;

void afficher(const Fraction &frac)
{
    cout << " " << frac.num << "/" << frac.den << " " ;
}

bool estReduite(Fraction frac)
{
    return true;
}

Fraction saisir()
{
    Fraction frac;
    cout << "Saisir le numerateur : " << endl;
    cin >> frac.num;
    cout << "Saisir le denominateur : "<< endl;
    cin >> frac.den;

    return frac;

}