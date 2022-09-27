/*Programme : echangerDeuxEntiers
BUT: echanger deux entiers
Date de dernière modification : 18/10/2021
Remarques : Code conforme aux spécification internes données en cours
*/
#include <iostream>
using namespace std;

//Declaration des sous programmes
void echangerDeuxEntiers(int &nb1, int &nb2);
//A partir d'un nombre nb1 et d'un nombre nb2 le sous programme 

int main(void)
{
    // VARIABLES
    int valeur1; //Le premier nombre à échanger
    int valeur2; //Le second nombre à échanger

    //TRAITEMENTS
    // clavier >> saisirNb1 >> nb1
    cout << "Entrez le premier nombre :  ";
    cin >> valeur1;
    // clavier >> saisirNb2 >> nb2
    cout << "Entrez le second nombre : ";
    cin >> valeur2;

    echangerDeuxEntiers(valeur1, valeur2);

    return 0;
}

void echangerDeuxEntiers(int &nb1,  int &nb2)
{
    unsigned short int copieNb1;

    // copieNb1 >> nb1
    copieNb1 = nb1; //copieNb1 prend la valeur de nb1
    // nb1 >> nb2
    nb1 = nb2; //La variable nb1 prend la valeur de nb2
    //nb >> copieNb1
    nb2 = copieNb1; //La variable nb2 prend la valeur de copienb1

    cout << "Voici les nombres, nombre1 = " << nb1 << " nombre2 = " << nb2 << endl;

}
