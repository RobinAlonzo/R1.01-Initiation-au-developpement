/*
 Programme : SaisirTemperature
 But :  Declarer un tableau simple
 Date de dernière modification : 23 octobre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    const unsigned short int NB_CASES = 11; //Creation du nombre de case
    float tabTemp [NB_CASES]; // Création du tableau
    int i; //Initialisation de l'itérateur i

    //clavier >> saisirTemperature >> tabTemp
    for (i = 0; i <= NB_CASES; i++)
    {
        cout <<"Saisir la température : ";
        cin >> tabTemp[i];
    }

    return 0;
}
