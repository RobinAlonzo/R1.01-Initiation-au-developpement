/*Programme: Algo 2020
But: Tricher au controle
Auteur : Robin.A
Remarques:
*/

#include <iostream>
using namespace std;

void AfficherTab();
//But: Afficher un tableau

int main(void)
{

    
    AfficherTab();
    

    return 0;
}

void AfficherTab()
{
    //Variables
    const unsigned short int TAILLE_TAB_1 = 4;
    int tab1[TAILLE_TAB_1] = {-44, -20, -2, -1};
    const unsigned short int TAILLE_TAB_2 = 7;
    int tab2[TAILLE_TAB_2] = {-60, -20, -2, -2, 0, 40,55};
    const unsigned short int TAILLE_TAB_RESULTAT = 11;
    int tabResultat[TAILLE_TAB_RESULTAT];          
    unsigned short int indiceTab1;
    unsigned short int indiceTab2;
    unsigned short int indiceTabResultat;

    //Traitement
    //Se potionner au debut des tableaux 
    indiceTab1 = 0;
    indiceTab2 = 0;
    indiceTabResultat = 0;

    //Fusionner TAB 1 et TAB 2
    while ((indiceTab1 <= TAILLE_TAB_1) && (indiceTab2 <= TAILLE_TAB_2))
    {
        //Copie des éléments
        if ((indiceTab1 < TAILLE_TAB_1) && (indiceTab2 >= TAILLE_TAB_2))
        {
            //Copie des élement de TAB1
            tabResultat[indiceTabResultat] = tab1[indiceTab1];
            indiceTab1 = indiceTab1 + 1;
            indiceTabResultat = indiceTabResultat + 1;
        }
        else if ((indiceTab2 < TAILLE_TAB_2) && (indiceTab1 >= TAILLE_TAB_2))
        {
            //Copie des éléments de tab2
            tabResultat[indiceTabResultat] = tab2[indiceTab2];
            indiceTab2 = indiceTab2 + 1;
            indiceTabResultat = indiceTabResultat + 1 ;
        }
        else
        {
            //Copie des éléments de tab1 ou tab 2
            if (tab1[indiceTab1] < tab2[indiceTab2])
            {
                //Copie des éléments de tab1
                tabResultat[indiceTabResultat] = tab1[indiceTab1];
                indiceTab1 = indiceTab1 + 1;
                indiceTabResultat = indiceTabResultat + 1;
            }
            else if (tab2[indiceTab2] < tab1[indiceTab1])
            {
                //Copie des éléments de tab2
                tabResultat[indiceTabResultat] = tab2[indiceTab2];
                indiceTab2 = indiceTab2 + 1;
                indiceTabResultat = indiceTabResultat + 1;
            }
            else
            {
                //Copie des éléments de tab1 et tab2
                tabResultat[indiceTabResultat] = tab1[indiceTab1];
                tabResultat[indiceTabResultat + 1] = tab2[indiceTab2];
                indiceTab1 = indiceTab1 + 1;
                indiceTab2 = indiceTab2 + 1;
                indiceTabResultat = indiceTabResultat + 2;
            }
            
            
        }
             

    }

    for (indiceTabResultat = 0; indiceTabResultat < TAILLE_TAB_RESULTAT - 1; indiceTabResultat++)
    {
        cout << tabResultat[indiceTabResultat];
        cout << " ";
    }    
}
