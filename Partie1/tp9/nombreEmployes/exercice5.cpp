/*Programme : valeurAbsolue
But: Donner la valeur absolue d'un nombre
Date de dernière modification : 27/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

//Creation de l'enregistrement
struct Adresse
{
    string numRue;           // le numéro de rue (par exemple 2bis)
    string nomRue;           // Le nom de la rue (par exemple allée du Parc Montaury)
    unsigned int codePostal; // Le code postal (par exemple 64600)
    string ville;            // le nom de la ville (par exemple Anglet)
};

struct Personne
{
    string nom;      // Le nom de la personne
    string prenom;   // Le prénom de la personne
    Adresse adresse; // L'adresse de la personne
};

const unsigned int NBRE_EMPLOYES = 15; // nombre d'employés dans la structure
Personne listeEmployes[NBRE_EMPLOYES] = { // nom, prénom et adresse des employés
    {"Almeras", "Valentin", {"29", "impasse Michelle Reynaud", 64600, "Anglet"}},
    {"Gueguen", "Lucie", {"631bis", "rue Leconte", 64100, "Bayonne"}},
    {"Pomeroy", "Thibault", {"158", "boulevard Devaux", 64200, "Biarritz"}},
    {"Souchon", "Elodie", {"68", "chemin Eric Pascal", 64200, "Biarritz"}},
    {"Besnard", "Emmanuel", {"08", "place Ferrand", 64600, "Anglet"}},
    {"Gaudreau", "Lucien", {"46", "impasse Simone Humbert", 64100, "Bayonne"}},
    {"Duret", "Christelle", {"02bis", "Chemin Imbert", 64200, "Biarritz"}},
    {"Laffitte", "Anna", {"31", "rue Lemoins", 64600, "Anglet"}},
    {"Barbier", "Remi", {"88", "impasse Richard Marin", 64100, "Bayonne"}},
    {"Blondeau", "Denise", {"83", "avenue Laroche", 64200, "Biarritz"}},
    {"Berlioz", "Gabriel", {"55", "rue Descamps", 64100, "Bayonne"}},
    {"Dupont", "Benjamin", {"40", "boulevard Duvois", 64200, "Biarritz"}},
    {"Maret", "Ludovic", {"76", "impasse de Meunier", 64600, "Anglet"}},
    {"Boutin", "Alain", {"13", "boulevard de Guillou", 64200, "Biarritz"}},
    {"Dubuisson", "Marie", {"24", "rue Capucine Chevallier", 64600, "Anglet"}}
}; 

//Declaration des procédures
unsigned short int employeParVille(const unsigned short int NBRE_EMPLOYES, const Personne listeEmployes[], const unsigned short int codeVille);

int main(void)
{
    cout << employeParVille(NBRE_EMPLOYES, listeEmployes, 64200);
    
    return 0;
}

//Declaration de la fonction
unsigned short int employeParVille(const unsigned short int NBRE_EMPLOYES, const Personne listeEmployes[], const unsigned short int codeVille)
{
    unsigned short int nbHabitants = 0; 
    //Calculer nbHabitants
    for (unsigned short int i = 0; i < NBRE_EMPLOYES; i++)
    {
        if ((listeEmployes[i].adresse.codePostal == codeVille))
        {
            nbHabitants ++;
        }
    }

    return nbHabitants;
    

}