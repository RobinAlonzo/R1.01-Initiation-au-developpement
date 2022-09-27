/*
 Programme : saisirEntierComprisEntre1EtUneBorneSup
 But :  Saisir un entier compris entre 1 et une borne sup
 Date de dernière modification : 23 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    unsigned short int borneSup;
    int somme = 0;
    int i;

    //Traitements
    //saisirBorneSup >> borneSup
    cout << "Saisir la borne superieur : ";
    cin >> borneSup;

    for (i = 0 ; i <= borneSup; i = i+1)
    {
        somme = somme + i;
    }

    cout << "Somme = " << somme <<endl;


    return 0;
}
