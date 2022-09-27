/*Programme : valeurAbsolue
But: Donner la valeur absolue d'un nombre
Date de dernière modification : 27/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Déclaration des procédures
double valeurAbs(double val);
//But: valeurAbs retourne les valeurs absolue de val

int main(void)
{
    //Variables
    double valeur; //Le nombre rentré

    //Traitement
    cout << "Le nombre est :";
    cin >> valeur;

    cout << valeurAbs(valeur);

    return 0;
}

double valeurAbs(double val)
{
    
    return (val > 0 ? val : - val);
}
