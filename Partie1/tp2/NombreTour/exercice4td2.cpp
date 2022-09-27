/*
 Programme : NombreTour
 But :  Compter le nombre de tours que fera une roue de vélo pour parcourir une distance 
 Date de dernière modification : 10 septembre 2021
 Auteur : R. Alonzo
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double distance; //La distance à parcourir
    double rayon; //Le rayon de la roue du vélo en cm
    double rayonRouekm; //Le rayon de la roue en km
    double perimetreRoue; //Le perimetre de la roue du velo
    double nbrTour; //Nombre de tour de roue du vélo
    const double TAUX_CM_KM = 100000; // Le taux de conversion utilisé pour convertir des cm en km.
    const double pi = 3.14; // La valeur de pi

    //TRAITEMENTS
    // clavier >> saisirDistance >> distance
    cout << "Entrez la distance à parcourir :  ";
    cin >> distance;
    // clavier >> saisirRayon >> rayon
    cout << "Entrez le rayon de la roue en cm : ";
    cin >> rayon;

    // rayon, TAUX_CM_KM >> convertirRayonEnKm >> rayonRouekm
    rayonRouekm = rayon / TAUX_CM_KM;  
    // 2, pi, rayonRouekm >> calculeperimetreRoue >> perimetreRoue
    perimetreRoue = 2*pi*rayonRouekm;  
    // distance, perimetreRoue >> calculeNombreTour >> nbrTour
    nbrTour = distance / perimetreRoue;

    // nbrTour >> afficherNombreTour >> écran
    cout << "Le nombre de tour est de " << nbrTour << endl;

    return 0;

}