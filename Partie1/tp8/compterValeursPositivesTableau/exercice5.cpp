/*Programme : compterValeursPositivesTableau
But: Compter les valeurs positives d'un tableau
Derniere modification : 22/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Declaration des procédures
void compterValeursPositives(const int tab[], unsigned short int tailleTab, unsigned short int &compteur);
//But: Compter les valeurs positives d'un tableau

int main(void)
{
    //Creation d'un tableau
    const unsigned short int NB_CASES = 10; //La taille du tableau
    int tabValeurs[NB_CASES] = {0, 1, -1, 3, 10, -20, 15}; //Le tableau contenant les valeurs

    //Variables
    unsigned short int compteur = 0; //Le compteur des valeurs positivies

    //Traitement
    compterValeursPositives(tabValeurs, NB_CASES, compteur);


    return 0;
}

//Définition des procédures
void compterValeursPositives(const int tab[], unsigned short int tailleTab, unsigned short int &compteur)
{
    for (unsigned short int i = 0; i < tailleTab - 1; i++)
    {
        if (tab[i] > 0)
        {
            compteur ++;
        }
    }

    cout << "Le nombre de valeurs positives est de : " << compteur;
    
}