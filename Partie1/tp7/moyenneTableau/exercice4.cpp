/*Programme: moyenneTableau
But: Faire la moyenne d'une tableau de notes
Date de dernière modidication : 174/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Creation du tableau
    const unsigned int NB_CASES = 10; //Le nombre de case du tableau
    float tab[NB_CASES] = {1, 2, 1, 5, 2, 12, 13, 8, 16, 14}; //Le tableau contenant les notes

    //Variables
    unsigned int short moyenne = 0; //La moyenne des notes 
    unsigned int short somme = 0; //La somme des notes
    int i;

    //Calcule de la somme des notes
    for (i = 0; i <= NB_CASES - 1; i++)
    {
        somme = somme + tab[i];
    }

    //Calcule de la moyenne
    moyenne = somme / NB_CASES;

    //Affichage
    cout << "La moyenne est de " << moyenne;


    return 0;
}
