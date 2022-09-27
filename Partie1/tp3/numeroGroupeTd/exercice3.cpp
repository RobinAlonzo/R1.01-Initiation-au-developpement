/*
 programme: Numero de groupe de TD
 but: Chercher le numéro de groupe de td avec le numero de tp
 Date de dernière modification : 16 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    // Variables
    int unsigned short numeroTp; //Le numero de TP de l'étudiant
    int unsigned short numeroTd; //Le numero de TD de l'étudiant
    bool numeroTpInv = false; //Indique que le nombre de TP est

    // Traitements
    //clavier >> saisirNumeroTp >> numeroTp
    cout << "Saisir le numero de votre TP : ";
    cin >> numeroTp;

    //numeroTp >> recherTd >> numeroTd, numeorTpinv
    switch (numeroTp)
    {
    case 1:
    case 2:
        numeroTd = 1;
        break;      

    case 3:
    case 4:
        numeroTd = 2;
        break;           
    
    case 5:
        numeroTd = 3;
        break;

    default:
        numeroTpInv = true;
        break;
    }

    //numeroTp, numeroTpInv >> afficherNumeroTd >> ecran

    if (numeroTpInv == true)
    {
        cout << "Numero de TP invalide. Recommencez";
    }
    else
    {
        cout << "Le numero de TP " << numeroTp << " correspond au groupe de TD : " << numeroTd << endl;
    }

    return 0;
}
