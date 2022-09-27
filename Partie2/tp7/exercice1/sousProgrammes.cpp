#include "sousProgrammes.h"
#include "fichierTexte.h"
#include "pile.h"
#include <iostream>
using namespace std;

void afficherFichierTexte(string nomSysFic)
{
      UnFichierTexte fichier; //Le fichier à afficher
      string ligne; //La ligne à afficher
      bool finDeFichier = false; //Indique la fin du fichier
      //Preparation du fichier
      //Associer le nom système au nom logique
      associer(fichier, nomSysFic);

      //Ouvrir le fichier
      ouvrir(fichier, consultation);

      //Affichage du fichier
      while (true)
      {
            lireLigne(fichier, ligne, finDeFichier);

            if (finDeFichier)
            {
                  break;
            }

            cout << ligne; 
            
      }

      //Fermer le fichier
      fermer(fichier);
      
}


void afficherInverseFichierTexte(string nomSysFic)
{     
      UnePile pileDeLigne; //La pile contenant les lignes du fichier
      unsigned int taillePile; //La taille de la pile
      UnFichierTexte fichier; //Le fichier à afficher
      string ligne; //La ligne à afficher
      bool finDeFichier = false; //Indique la fin du fichier
      //Preparation du fichier
      //Associer le nom système au nom logique
      associer(fichier, nomSysFic);

      //Ouvrir le fichier
      ouvrir(fichier, consultation);

      //Stockage des lignes dans une pile
      while (true)
      {
            //Essayer de lire la ligne
            lireLigne(fichier, ligne, finDeFichier);

            if (finDeFichier)
            {
                  break;
            }

            //Empiler les lignes
            empiler(pileDeLigne, ligne);         
            
      }

      //Fermer le fichier
      fermer(fichier);

      //Afficher la pile
      taillePile = taille(pileDeLigne);

      for (unsigned int i = 1; i < taillePile; i++)
      {
            depiler(pileDeLigne, ligne);
            cout << ligne;
      }
      
      
}

void etendreFichierTexte (string nomSysFicSource, string nomSysFicCible)
{
      UnFichierTexte fichierSource; //Le fichier à copier
      UnFichierTexte fichierCible; //Le fichier cible
      string ligne; //La ligne à copier
      bool finDefichier = false; //Indique la fin de ligne
      //Preparation des fichier
      //Associer le nom système au nom logique
      associer(fichierSource, nomSysFicSource);
      associer(fichierCible, nomSysFicCible);

      //Ouvrir les fichiers
      ouvrir(fichierSource, consultation);
      ouvrir(fichierCible, extension);

      //Extension du fichier cible
      while (true)
      {
            //Essayer de lire la ligne
            lireLigne(fichierSource, ligne, finDefichier);

            if (finDefichier)
            {
                  break;
            }
            //Ajouter une ligne
            ecrireLigne(fichierCible, ligne);            
            
      }

      //Fermer les fichiers
      fermer(fichierCible);
      fermer(fichierSource);
}

void viderFichierTexte(string nomSysFic)
{
      UnFichierTexte fichier; //Le fichier à afficher
      //Preparation du fichier
      //Associer le nom système au nom logique
      associer(fichier, nomSysFic);

      //Ouvrir le fichier
      ouvrir(fichier, creation);

      //Fermeture
      fermer(fichier);
}