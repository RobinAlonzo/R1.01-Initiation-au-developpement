/*Programme : inverserValeursTableau
But: Inverser les valeurs d'un tableau
Derniere modification : 22/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

// Définition du type UnEtudiant
struct UnEtudiant
{
    string nom;    // nom de l'étudiant
    string prenom; // prénom de l'étudiant
    float note;    // note obtenue à l'examen
};

//Declaration des procédures
void calculerNbEtudiantsMoyenne(UnEtudiant tab[], unsigned short int tailleTab, unsigned short int &compteur, unsigned short int &compteur2);

int main(void)
{

    // Nombre d'étudiants inscrits en semestre 1 :
    const unsigned short int EFFECTIF_S1 = 15;

    // Résultats examen du 15 février :
    UnEtudiant notesExamDu15fevrier[EFFECTIF_S1] = {
        {"Almeras", "Valentin", 15}, {"Gueguen", "Lucie", 8.5},
        {"Pomeroy", "Thibault", 4.5}, {"Souchon", "Elodie", 18},
        {"Besnard", "Emmanuel", 12}, {"Gaudreau", "Lucien", 0},
        {"Duret", "Christelle", 10.5}, {"Laffitte", "Anna", 13},
        {"Barbier", "Remi", 15}, {"Blondeau", "Denise", 7},
        {"Berlioz", "Gabriel", 9.5}, {"Dupont", "Benjamin", 3},
        {"Maret", "Ludovic", 13.5}, {"Boutin", "Alain", 12},
        {"Dubuisson", "Marie", 19}};
        return 0;

    //Variables
    unsigned short int nbEtudiantFort;
    unsigned short int nbEtudiantNul;    

    //Definition 
    calculerNbEtudiantsMoyenne(notesExamDu15fevrier, EFFECTIF_S1,  nbEtudiantFort, nbEtudiantNul);

    }

void calculerNbEtudiantsMoyenne(UnEtudiant tab[], unsigned short int tailleTab, unsigned short int &compteur, unsigned short int &compteur2)
{
    for (unsigned short int i = 0; i < tailleTab; i++)
    {
        if (tab[i].note >= 10)
        {
            compteur ++;
        }
        else
        {
            compteur2 ++;
        }
    }

    cout << "Le nombre d'etudiants ayant la moyenne est de : " << compteur << endl << "Le nombre d'étudiants ayant pas la moyenne est de : " << compteur2;
    
} 