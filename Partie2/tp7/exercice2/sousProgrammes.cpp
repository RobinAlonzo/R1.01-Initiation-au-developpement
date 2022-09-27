#include <iostream>
#include "sousProgrammes.h"
#include "fichierTexte.h"
using namespace std;

bool produireMoyenne (float &moyenne, string nomSysFic)
{
    UnFichierTexte fichierUn; //Le nom logique du fichier
    bool fdf; //Indique la fin de fichier
    bool resultat; //Indique si une moyenne est produite ou non
    float nombre; //Le nombre lit dans le fichier
    float somme = 0; //La somme des valeurs présentes dans le fichier
    unsigned int compteur = 0; //Le nombre de valeurs présentes dans un fichiers
    //Preparation du fichier
    //Associer le nim système au nom logique
    associer(fichierUn, nomSysFic);

    //Ouverture du fichier
    ouvrir(fichierUn,consultation);

    //Lecture et addition des valeurs
    while (true)
    {
        //Essayer de lire un mot
        lireMot(fichierUn, nombre, fdf);

        //Verifie si fin de fichier
        if (fdf)
        {
            break;
        }

        //Addition des valeurs
        somme = somme + nombre;
        compteur = compteur + 1;
      
    }

    //Fermeture du fichier
    fermer(fichierUn);

    //Calcule de la moyenne et affichage
    moyenne = somme/compteur;        

    //Verification de la valeur retourné
    if (somme == 0)
    {
        resultat = false;
    }
    else
    {
        cout << "La moyenne est de " << moyenne << endl;
        resultat = true;
    }    
    
    return resultat;
}
