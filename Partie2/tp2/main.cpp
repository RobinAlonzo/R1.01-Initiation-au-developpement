/**
 * @file main.cpp
 * @author Robin Alonzo
 * @brief     Mettre à dispositon d'un programmeur des sous-programmes applicables aux tableaux.
    Conformes aux exercices des TD n°1 et et 3 de R1.01
    
    Il peut s'agit de tableaux d'entiers ou d'enregistrements de type Personne.
    Les tableaux manipulés doivent être triés par ordre décroissant de valeur.
    Dans le cas des tableaux d'enregistrements de type Personne, ils seront triés par ordre 
    décroissant de nom.
 * @date 2021-11-23
 * 
 */
#include "bibTableau.h"
#include "personne.h"
#include <iostream>
using namespace std;

//Déclarations des sous programmes de tests
void testAfficherTableauEntier();
void testRechercherPremierreOccurence();
void testAfficherPersonne();

int main()
{
    return 0;
}

//Définitions des sous programmes de tests
void testAfficherTableauEntier()
{
    const unsigned int LGTAB = 5;
    int tab[LGTAB] = {1,2,3,4};

    afficher(tab, LGTAB);
}

void testRechercherPremierreOccurence()
{
    const unsigned int LGTAB = 10;
    int tab[LGTAB] = {60, 45, 30, 25, 15, 10, 0, -15, -20, -45};
    int valCherche = -20;
    bool trouve = false;
    unsigned int pos;
    unsigned int parcoursCase = 0;

    recherchePremiereOccurence(tab, LGTAB, valCherche, trouve, pos, parcoursCase);
    if (trouve)
    {
        cout << parcoursCase << " " << pos;
    }
    else
    {
        cout << "L'element n'a pas etait trouve";
    }
    

}

void testAfficherPersonne()
{
        afficher(PERSONNE_NULLE);

}