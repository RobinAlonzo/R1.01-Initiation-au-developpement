/*
 Programme : calculette
 But :  Faire des calcules
 Date de dernière modification : 15 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double valeur1; //Le premier nombre
    double valeur2; //Le second nombre
    char operateur; //L'opérateur du calcul
    double resultat; //Le résulat du calcul effectué
    bool divZero = false; //Indique une division par zero
    bool operateurInvalide = false; //Indique que l'opérateur est invalide

    // TRAITEMENTS

    // clavier >> saisirValeur1 >> valeur1
    cout << "Saisir le premier nombre : ";
    cin >> valeur1;

    // clavier >> saisirValeur2 >> valeur2
    cout << "Saisir le second nombre : ";
    cin >> valeur2;

    // clavier >> saisirOperateur >> operateur
    cout << "Saisir l'opérateur : ";
    cin >> operateur;

    // valeur1, valeur2, operateur >> calculerOperation >> resultat, operateurInvalide, divZero
    switch (operateur)
    {
    case '+':
        resultat = valeur1 + valeur2;
        break;

    case '-':
        resultat = valeur1 - valeur2;
        break;        
    
    case '*':
        resultat = valeur1 * valeur2;
        break;  

    case '/':
        if (valeur2 != 0)
        {
            resultat = valeur1 / valeur2;
        }
        else
        {
            divZero = true;
        }
        break;            

    default:
        operateurInvalide = true;
        break;
    }

    // operateurInvalide, divZero, resulat >> afficherResultat >> ecran
    if (operateurInvalide == true)
    {
        cout << "Operation impossible";
    }
    else
    {
        if (divZero == true)
        {
            cout <<"Division par 0 impossible";
        }
        else
        {
            cout <<"Le résultat est " << resultat << endl;
        }
    }





}