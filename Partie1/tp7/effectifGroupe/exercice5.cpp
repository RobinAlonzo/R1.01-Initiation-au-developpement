/*Programme: effectifGroupe
But: Compter l'effectif d'un groupe de tp
Date de dernière modification : 14/10/2021
Auteur : R. Alonzo
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main(void)
{
    //Creation de l'enregistrement et du tableau
    struct Etudiant
    {
        string nom;            // nom de l'étudiant
        string prenom;         // prénom de l'étudiant
        unsigned short int td; // numéro de TD de l'étudiant
        unsigned short int tp; // numéro de TP de l'étudiant
    };

    // Nombre d'étudiants inscrits en semestre 1
    const unsigned int EFFECTIF_S1 = 15;

    // Etudiants inscrits en semestre 1 :
    Etudiant etudiantsS1[EFFECTIF_S1] = {
        {"Almeras", "Valentin", 1, 1}, {"Gueguen", "Lucie", 1, 1}, {"Pomeroy", "Thibault", 1, 1}, {"Souchon", "Elodie", 1, 2}, {"Besnard", "Emmanuel", 1, 2}, {"Gaudreau", "Lucien", 2, 3}, {"Duret", "Christelle", 2, 3}, {"Laffitte", "Anna", 2, 4}, {"Barbier", "Remi", 2, 4}, {"Blondeau", "Denise", 2, 4}, {"Berlioz", "Gabriel", 2, 4}, {"Dupont", "Benjamin", 3, 5}, {"Maret", "Ludovic", 3, 5}, {"Boutin", "Alain", 3, 5}, {"Dubuisson", "Marie", 3, 5}};


    //Variables
    unsigned short int nombreEtudiants = 0; // Le nombre d'etudiants
    int i;

    //Traitement
    for (i = 0; i <= EFFECTIF_S1 - 1; i++)
    {
        if (etudiantsS1[i].tp == 5)
        {
            nombreEtudiants = nombreEtudiants + 1;
        }
    }

    //Affichage
    cout << "Le nombre d'etudiants du TP 5 est : " << nombreEtudiants;

    return 0;
}
