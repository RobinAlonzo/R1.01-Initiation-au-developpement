#include "fichierTexte.h"
#include <iostream>
using namespace std;

int main(void)
{
    UnFichierTexte fichierSource;
    string chaine; 
    bool fdf = false; 

    int nombre;
    nombre = 2;
    nombre = 3;

    

    associer(fichierSource, "fev-2022");
    associer(fichierSource, "dec-2021");
    ouvrir(fichierSource, consultation);
    lireMot(fichierSource, chaine, fdf);
    if (!fdf)
    {
        cout << chaine; 
    }
    
    fermer(fichierSource);
    return 0;
}
