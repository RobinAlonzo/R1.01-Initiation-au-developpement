/*Programme: rechercheVoyelleDebut
But: Recherche la postition de la premiere voyelle dans une chaine de cacractère
Date de dernière modidication : 14/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Creation de machaine de caractère
    string chaine = "Bonjour je suis Robin"; //La chaine de caractères

    //Rechercher la position de la 1ere voyelle
    //Initialisation de la recherche
    bool trouve = false; //Indique si la voyelle est trouve
    unsigned short int posCrte = 0; //La position du caractère
    unsigned short int posDerLettre = (chaine.size() -1  ); //La posisition du dernier caractère de la chaine

    //Effectuer la recherche
    while (!(posCrte > posDerLettre))
    {
        //Verifie si on a trouve la voyelle
        if ((chaine[posCrte] == 'a') || (chaine[posCrte] == 'e') || (chaine[posCrte] == 'i') || (chaine[posCrte] == 'o') || (chaine[posCrte] == 'u') || (chaine[posCrte] == 'y'))
        {
            trouve = true;
            break;
        }

        posCrte = posCrte + 1;
    }

    //Afficher le resultat de la recherche
    if (trouve == true)
    {
        cout << "Il y'a une voyelle en position " << posCrte;
    }
    else
    {
        cout << "Il y'a pas de voyelle";
    }    

    return 0;
}
