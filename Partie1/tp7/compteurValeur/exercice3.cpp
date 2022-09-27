/*Programme: compteur Valeur négatives
But: Compterle nombre de valeur négatives dans un tableau
Date de dernière modification : 14/10/2021
Auteur : R. Alonzo
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Creation du tableau
    const unsigned int NB_CASES = 5; //Le nombre de case du tableau
    float tab[NB_CASES] = {1, 2, -1, -5, 2}; // Le tableau des notes
    //Variables
    unsigned short int resultat = 0; //Le nombre de valeurs négatives
    int i;

    //Traitement
    for (i = 0; i <= NB_CASES - 1; i++)
    {
        if ((tab[i] < 0))
        {
            resultat = resultat + 1; 
        }
    }

    //Affichage du resultat
    cout << "Il y'a " << resultat << " valeurs negatives";


    return 0;
}
