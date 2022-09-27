/*Programme : valeurAbsolue
But: Donner la valeur absolue d'un nombre
Date de dernière modification : 27/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

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

//Declarations des procédures
Adresse adressePersonne(Personne individu);
//But: Donner l'adresse d'une personne

int main(void)
{
    //Variables
    Personne bigChef = {"Pillois", "Theo", {"9 ", "rue de la cathedrale ", 31500 , " Toulouse"}}; //La personne
    Adresse adresseBigChef; //l'adresse de l'individu

    //Traitement
    adresseBigChef = adressePersonne(bigChef);
    cout << adresseBigChef.numRue << adresseBigChef.nomRue << adresseBigChef.codePostal << adresseBigChef.ville;

    return 0;
}

Adresse adressePersonne(Personne individu)
{
    Adresse resultat;

    resultat = individu.adresse;

    return resultat;
}