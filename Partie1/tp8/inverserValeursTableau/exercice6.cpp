/*Programme : inverserValeursTableau
But: Inverser les valeurs d'un tableau
Derniere modification : 22/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Declaration de la procédure
void inverserValeursTableau(int tabVal[], unsigned short int tailleTab);
//But: Inverser les valeurs d'un tableau

int main(void)
{
    //Creation du tableau
    const unsigned short int NB_CASES = 3; //La taille du tableau
    int tabValeurs[NB_CASES] = {1, 2, 3}; //Le tableau des valeurs

    //Traitement
    inverserValeursTableau(tabValeurs, NB_CASES);

    return 0;
}

void inverserValeursTableau(int tabVal[], unsigned short int tailleTab)
{
    for (unsigned short int  i = tailleTab - 1; i >= 0; i--)
    {
        cout << tabVal[i];
    }
}
