/*
 Programme : comparaisonCartes
 But :  Comparer des cartes
 Date de dernière modification : 07 octobre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Initialisation des cartes
    enum Couleur {pique, carreau, trefle, coeur};
    enum Valeur {deux, trois, quatre, cinq, sic, sept, huit, neuf, dix, vlaet, dame, roi, as};

    struct Carte
    {
        Couleur coul;
        Valeur val;
    };

    Carte carte1;
    carte1.coul = pique;
    carte1.val = trois;
    Carte carte2;
    carte1.coul = carreau;
    carte1.val = trois;

    //Variables
    bool egalite = false; //Indique si il y'a une égalité



    

    return 0;
}
