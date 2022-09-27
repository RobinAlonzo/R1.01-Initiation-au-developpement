/*Programme : calculerPrixReduit
BUT: afficher le prix reduit avec des sous programmes
Date de dernière modification : 18/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Declaration des sous programmes
void calculerPrixReduit(float prixInitial, unsigned short int reduction, float &prixReduit);
//But : A partir d'un prix initial prixInitial et d'une reduction, le sous programme calcule le prix réduit prixReduit correspondant

int main(void)
{
    //Variables
    float prixDepart;
    float prixFinal;
    unsigned short int reduction;

    cout << "Entrez le prix initial : "; cin >> prixDepart;
    cout << "Entrez la reduction : "; cin >> reduction;

    calculerPrixReduit(prixDepart, reduction, prixFinal);
    
    return 0;
}

//Definition des sous programme
void calculerPrixReduit(float prixInitial, unsigned short int reduction, float &prixReduit)
{
    prixReduit = (prixInitial * (1.0 - reduction/100.0));
    cout << prixReduit;
}
