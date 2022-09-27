/**
 * @file bibTableau.cpp
 * @author Robin Alonzo
 * @brief Le corps du module bibTableau
 * @date 2021-11-23
 */

#include "bibTableau.h"
#include "personne.h"
#include <iostream>
using namespace std;

void afficher(const int tab[], unsigned int lgTab)
{
        if (lgTab > 0)
        {
            cout << "{";
            for (unsigned short int i = 0; i<lgTab-1; i++)
            {
                cout << tab[i] << ", " ;

            };
            cout << tab[lgTab-1] << "} "<< endl;
        }
        else
        {
            cout << "tableau vide " << endl;
        }
}

void recherchePremiereOccurence(int tab[], unsigned int lgtab, int val, bool &trouve, unsigned int &pos, unsigned int &parcoursCase)
{
    //Initialiser la recherche
    unsigned int borneSup = 0;
    unsigned int borneInf = lgtab - 1;
    unsigned int milieu;

    //Effectuer la recherche
    while (borneInf >= borneSup)
    {
        //Calcul milieu de l'espace de recherche restant
        milieu = (borneSup + borneInf)/2;

        //Verification si la valeur n'est pas au milieu du tableau
        if (tab[milieu] == val)
        {
            trouve = true;
            pos = milieu;
            break;
        }

        //Progresser dans la recherche
        if (tab[milieu] > val)
        {
            parcoursCase ++;
            borneSup = milieu + 1;
        }
        else
        {
            parcoursCase ++;
            borneInf = milieu - 1;
        }
        
    }
    
}