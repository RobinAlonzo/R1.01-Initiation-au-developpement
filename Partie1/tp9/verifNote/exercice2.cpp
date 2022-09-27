/*Programme : valeurAbsolue
But: Donner la valeur absolue d'un nombre
Date de dernière modification : 27/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Déclarations des procédures 
bool verifNote(double note);
//But: verifNote retourne un boolean

int main(void)
{
    //Variables
    double note; //La note rentré  par l'utilisateur

    //Traitement
    cout << "Entrer une note : ";
    cin >> note;

    cout << verifNote(note); //Affiche un boolean

    return 0;
}

//Definitions des procédures
bool verifNote(double note)
{
    if (note >= 0 && note <= 20 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
