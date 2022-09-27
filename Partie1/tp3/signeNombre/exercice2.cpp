/*
 Programme : signeNombre
 But :  Etablir le signe d'un nombre
 Date de dernière modification : 15 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nombre; //Le nombre auquel il faut vérifier le signe
    string signe; //Le signe du nombre étudié

    //TRAITEMENTS
    //clavier >> saisirNombre >> nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    //nombre >> determinerSigne >> signe
    if (nombre>0)
    {
        signe = "Positif";
    }
    if (nombre<0)
    {
        signe = "Négatif";
    }
    else if (nombre==0)
    {
        signe = "Nul";
    }

    // signe >> ecran
    cout << "Le nombre entré est " << signe << endl;

    return 0;

}