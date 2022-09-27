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

/**
 * @brief Echanger deux entiers
 * 
 * @param nombre1 
 * @param nombre2 
 */
void echangerDeuxEntiers(int &nombre1, int &nombre2);

void echangerDeuxEntiers(int &nombre1, int &nombre2)
{
    int temp;
    temp = nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
}

/**
 * @brief Echanger deux entiers
 * 
 * @param nombre1 
 * @param nombre2 
 */
void echangerDeuxPersonnes(Personne &personne1, Personne &personne2);

void echangerDeuxPersonnes(Personne &personne1, Personne &personne2)
{
    Personne temp;
    temp = personne1;
    personne1 = personne2;
    personne2 = temp;
}

void afficher(const int tab[], unsigned int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{";
        for (unsigned short int i = 0; i < lgTab - 1; i++)
        {
            cout << tab[i] << ", ";
        };
        cout << tab[lgTab - 1] << "} " << endl;
    }
    else
    {
        cout << "tableau vide " << endl;
    }
}

void afficher(const Personne tab[], unsigned short int lgTab)
{
    if (lgTab > 0)
    {
        cout << "{" << endl;
        for (unsigned short int i = 0; i < lgTab - 1; i++)
        {
            afficher(tab[i]);
            cout << ", " << endl;
        };
        afficher(tab[lgTab - 1]);
        cout << endl
             << "} " << endl;
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
        milieu = (borneSup + borneInf) / 2;

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
            parcoursCase++;
            borneSup = milieu + 1;
        }
        else
        {
            parcoursCase++;
            borneInf = milieu - 1;
        }
    }
}

/**
 * @brief 
 * 
 * @param tab 
 * @param ici 
 */
void faireMonterLaBulleIci(int tab[], unsigned int ici);

void faireMonterLaBulleIci(int tab[], unsigned int ici)
{

    for (unsigned int i = 0; i < ici; i++)
    {

        if (tab[i] > tab[i + 1])
        {
            echangerDeuxEntiers(tab[i], tab[i+1]);
        }
    }
}

/**
 * @brief 
 * 
 * @param tab 
 * @param ici 
 */
void faireMonterLaBulleIciPersonne(Personne tab[], unsigned int ici);

void faireMonterLaBulleIciPersonne(Personne tab[], unsigned int ici)
{
    Personne personne1;
    Personne personne2;

    for (unsigned int i = 0; i < ici; i++)
    {  
        personne1 = tab[i];
        personne2 = tab[i+1]; 

        if (personne1.nom > personne2.nom)
        {
            echangerDeuxPersonnes(tab[i], tab[i+1]);
        }
    }
}

void triBulle(int tab[], unsigned int lgTab)
{
    for (unsigned int i = 0; i < lgTab; i++)
    {
        faireMonterLaBulleIci(tab, i);
    }
    
}

void triBulle(Personne tab[], unsigned int lgTab)
{
    for (unsigned int i = 0; i < lgTab; i++)
    {
        faireMonterLaBulleIciPersonne(tab, i);
    }
    
}