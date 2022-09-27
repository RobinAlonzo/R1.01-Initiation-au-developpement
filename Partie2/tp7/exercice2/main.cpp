#include <iostream>
#include "stdlib.h"
#include <string>
#include "sousProgrammes.h"

using namespace std;

int main()
{

    string nomSysteme ;     // nom système du fichier à traiter
    char choix ;            // réponse de l'utilisateur au menu
    string kk;              // pour arrêter le défilement écran
    float moyenne = 0;          // La moyenne des valeurs présente dans le fichier

    do
    {
        // AfficherMenu - Saisie-verif reponse >> choix
        do
        {
            // effacer écran
            system("cls");
            cout << endl << "FEUILLES DE TD 7 & TP 7 - FICHIERS TEXTE - EXERCICE 2 - CALCUL MOYENNE PLUVIOMETRIQUE" << endl << endl;

            // afficher menu
            cout << "S) Calcul de pluviometrie SIMPLE" << endl;
            cout << "Q) Quitter"<< endl;

            // saisie réponse >> choix
            cout << endl << "votre choix ? " ;
            cin >> choix;
            cout << " " << endl;
        }
        while (!
                ((toupper(choix) == 'Q') || (toupper(choix) == 'S'))
              );

        // choix >> traiter action demandee
        if (toupper(choix) == 'S')
        {
            // C.- Choisir un fichier de pluviométrie
            cout << endl << "nom du fichier a utiliser : ";
            cin >> nomSysteme;

            // et calculer la moyenne pluviométrique simple
            moyenne = produireMoyenne(moyenne,nomSysteme) ;
            
            // pause avant de revenir au menu
            cout << endl << "       ... <entree> pour continuer...";
            std::cin.ignore(100, '\n');
            getline(cin, kk);
        }
    }
    while ( !(toupper(choix) == 'Q'));

    // terminer
    cout << endl << "...au revoir..." << endl;

    return 0;
}