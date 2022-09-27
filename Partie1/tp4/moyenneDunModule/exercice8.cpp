/*
 Programme : moyenneDunModule
 But :  Calculer la moyenne d'un module
 Date de dernière modification : 30 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    float note;// Note saisie par l'utilisateur
    float const VAL_ARRET = 999; //La constante qui permettre d'arrêter la saisie de note
    float somme = 0; //La somme des notes saisie
    float nbrNotes = 0; //Le nombre de notes saisies
    float moyenne = 0; //La moyenne obtenue

    //Traitements
    while (true)
    {
        //clavier >> saisirNote >> note
        cout << "Saisir une note : ";
        cin >> note;

        if (note == VAL_ARRET)
        {
            break;
        }

        if (note >= 0 && note <= 20)
        {
            //note >> calculeSommeNote >> somme
            somme = somme + note;
            //ajoutsNotes >> nbrNotes
            nbrNotes = nbrNotes + 1;
        }
        else
        {
            cout << "Recommencez";
        }
    }

    //somme, diviseur >> calculeMoyenne >> moyenne
    if (nbrNotes > 0)
    {
        moyenne = somme / nbrNotes;
    }

    if (nbrNotes > 0)
    {
        cout << "La moyenne est de : "<< moyenne <<endl;
    }
    else
    {
        cout << "Impossible de calculer la moyenne car aucune note saisie.";
    }

    return 0;
}
