/*
 Programme : EchangesNombres
 But :  Echnager deux nombres
 Date de dernière modification : 10 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nb1; //Le premier nombre à échanger
    double nb2; //Le second nombre à échanger
    double copieNb1; //La copie du nombre 1 pour faire l'échange

    //TRAITEMENTS
    // clavier >> saisirNb1 >> nb1
    cout << "Entrez le premier nombre :  ";
    cin >> nb1;
    // clavier >> saisirNb2 >> nb2
    cout << "Entrez le second nombre : ";
    cin >> nb2;

    // copieNb1 >> nb1
    copieNb1 = nb1; //copieNb1 prend la valeur de nb1
    // nb1 >> nb2
    nb1 = nb2; //La variable nb1 prend la valeur de nb2
    //nb >> copieNb1
    nb2 = copieNb1; //La variable nb2 prend la valeur de copienb1

    // nb1, nb2 >> afficherNombre >> écran
    cout << "Voici les nombres, nombre1 = " << nb1 << " nombre2 = " << nb2 << endl;

}