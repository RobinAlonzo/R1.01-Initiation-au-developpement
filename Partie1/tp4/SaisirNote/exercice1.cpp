/*
 Programme : saisieNote
 But :  Saisir une note
 Date de dernière modification : 23 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    double note; //La note saisie au clavier 

    //Traitements
    do
    {
        //clavier >> SaisirNote >> note
        cout << "Saisir la note : ";
        cin >> note;
    } while ((note < 0) | (note > 20));
    
    //afficherMerci >> ecran
    cout << "Merci";

    return 0;
}
