/*
 Programme : saisieNoteAvecMessageErreur
 But :  Saisir une note et sortir un message d'erreur
 Date de dernière modification : 23 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/


#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    double note; //Saisir la note

    //Traitements

    //afficherEcran >> ecran
    cout << "Entrez une note entre 0 et 20 : ";

    while (true)
    {   
        //clavier >> saisirNote >> note
        cin >> note;

        //Si note inferieur ou égale à 0 et superieur ou egale a 0 >> On sort de la boucle
        if ((note > 0) && (note < 20))
        {
            break;
        }

        //afficherEcran >> ecran
        cout << "La valeur n'est pas bonne. Recommencez : ";
    }
    

    return 0;
}
