/*Programme : afficherprixReduit
BUT: afficher le prix reduit avec des sous programmes
Date de dernière modification : 18/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Declaration des sous programmes
void afficherPrixReduit(float prixInitial, unsigned short int reduction);
//But : A partir d'un prix initial prixInitial et d'une reduction, le sous programme afficherPrixReduit affiche le prix réduit correspondant

int main(void)
{
    //Variables
    float prixInitial;
    unsigned short int reduction;

    cout << "Entrez le prix initial : "; cin >> prixInitial;
    cout << "Entrez la reduction : "; cin >> reduction;

    afficherPrixReduit(prixInitial, reduction);

    return 0;
}

//Definition des sous programmes
void afficherPrixReduit(float prixInitial, unsigned short int reduction)
{
    cout << (prixInitial * (1.0 - reduction/100.0));
}