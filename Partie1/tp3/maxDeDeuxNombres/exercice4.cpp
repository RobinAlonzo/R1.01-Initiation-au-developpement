/*
 Programme : maxDeDeuxNombres
 But :  Voir le max entre deux nombres
 Date de dernière modification : 30 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Variables
    float nb1; //Le premier nombre
    float nb2; //Le second nombre
    float max; //Le nombre le plus grand
    bool egalite = false; //Verifie l'egalite

    //Traitements
    //clavier >> saisirPremierNombre >> nb1
    cout << "Saisir le premier nombre : ";
    cin >> nb1;

    //clavier >> saisirSecondNombre >> nb2
    cout << "Saisir le second nombre : ";
    cin >> nb2;

    if (nb1 > nb2)
    {
        max = nb1;
        egalite = false;

    }
    else if (nb1 < nb2)
    {
        max = nb2;
        egalite = false;
    }
    else
    {
        egalite = true;
    }
    
    switch (egalite)
    {
    case (false):
        cout << "Le nombre le plus grand est : " << max <<endl;
        break;        
    
    case (true):
        cout << "Ces deux nombres sont identiques il y a pas de maximum";
        break;
    }

    return 0;
}
