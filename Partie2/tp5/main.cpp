/*
 Programme : Hanoi - itératif - avec Tableau de piles et sous-programmes 
 But :  Résolution des tours de Hanoi - version itérative - pour 3 à 9 disques
 Date de dernière modification : 04-12-2021
 Auteur : Pantxika Dagorret
 Remarques : Code conforme aux spécification précisées dans le sujet R1.01-partie2 - TD n°4
*/
#include <iostream>
#include "pile.h"
using namespace std;


const unsigned int NB_TOURS = 3;     // CONSTANTE dite 'GLOBALE' : 
                                            // portée = tous les Sous-programmes
                                            // présents dans ce fichier
                                                                            
/* ---------- Observateurs
   ------------------------------------------------------------------*/
bool estDeplacable(UnePile tourOrigine, UnePile tourDestination);

/* ---------- Primitives modifiant 1 tour
   ------------------------------------------------------------------*/

void remplirTour(UnePile &tourARemplir, unsigned int nbDisques);
// But remplit la tourARemplir avec nbDisques, du plus grand (en bas) au plus 
// petit (au sommet) de la tour

/* ---------- Primitives modifiant plusieurs tours
   ------------------------------------------------------------------*/

void initialiserTours(UnePile tours[]);
// But : initialise les NB_TOURS tours du tableau lesTours

void deplacerDisque(UnePile &tourOrigine, UnePile &tourDestination);
// But : déplace un disque d'une tour à une autre
// pré-condition : estDeplacable(tourOrigine, tourDestination) est VRAI
//                 c'est à dire :
//
//                 estVide(tourOrigine)  = FAUX
//                 et  (
//                        (estVide(tourDestination) = VRAI ) 
//                         OU 
//                        ( estVide(tourDestination)  = FAUX
//                          et
//                          sommet(tourOrigine) < sommet(tourDestination)
//                         )
//                     )


void deplacerPetit(UnePile tours[], unsigned int NB_TOURS, unsigned int &posPetit);
/* A partir des tours (tours), du nombre de tours (NB_TOURS) et de la position du petit disque (posPetit), cette procédure
déplace le petit disque sur la tour suivante si c'est possible.*/

void deplacerAutre(UnePile tours[], unsigned int posPetit, unsigned int nbDisques);
/*A partir des tours (tours) et de l'indice posPetit, cette prodédure déplace un disque sur la tour suivante si c'est possible*/

/* ---------- Affichages
   ------------------------------------------------------------------*/

void afficherTour(UnePile tour);
// Affiche le contenu de la tour passée en paramètre

void afficherTours(const UnePile lesTours[]);
// Affiche le contenu des tours passées en paramètre 


/* ---------- Algorithmes de résolution du problème des tours de Hanoi
   --------------------------------------------------------------------*/

void resoudreToursHanoiManuel(unsigned int nbDisques); 
// Buts : 1- faire résoudre les tours de Hanoi avec nbDisques au joueur
//        2-pour tester les primitives 
//        - initialiserTours()
//        - remplirTour()
//        - afficherTour()
//        - afficherTours()
//        - deplacerDisque()

void resoudreToursHanoiAutomatique(unsigned int nbDisques);
// But : résoudre automatiquement les tours de Hanoi avec nbDisques disques


/* ---------- Boîte à outils pour resolutionToursHanoiManuel ()
   -------------------------------------------------------------------*/

   void saisieVerifDeplacementDemande(bool& reponseOk, unsigned int& origine, unsigned int& destination);
   // saisie du choix des tours prenant part au déplacement d'un disque :
   // 12 pour deplacement d'un disque de la tour 1 vers la tour 2
   // 13 pour deplacement d'un disque de la tour 1 vers la tour 3
   // 31 pour deplacement d'un disque de la tour 3 vers la tour 1
   // ...
   // 0 si aucun deplacement demandé

   int carToChiffre (char car);
   // convertit un caractère en chiffre



/* ---------- Boîte à outils pour resolutionToursHanoiAutomatique ()
   -------------------------------------------------------------------*/
    unsigned int tourSuivante(unsigned int posTour, unsigned int NB_TOURS);
    /*A partir de l'indice d'une tour (posTour) et du nombre total de tours, cette fonction retourne l'indice de la tour suivante selon l'odre t1>t2>t3>t1...*/

// ======================================================================
int main()
{

    const unsigned int NB_MINIMUM_DISQUES = 3;   // nbre minimum autoris� de disques
    const unsigned int NB_MAXIMUM_DISQUES = 9;   // nbre maximum autoris� de disques
    unsigned int nbDisques;                     // nbre de disques à déplacer
    
    // (clavier), NB_MINIMUM_DISQUES, NB_MINIMUM_DISQUES >> saisie du nbre de disques >> nbDisques
    do
    {
        cout << "Entrer le nbre de disques de la tour de Hanoi (entre " << NB_MINIMUM_DISQUES << " et " << NB_MAXIMUM_DISQUES << ") : ";
        cin >> nbDisques;
    }
    while (!((nbDisques >=NB_MINIMUM_DISQUES) && (nbDisques <= NB_MAXIMUM_DISQUES)));


    // nbDisques >>  résoudre Hanoi manuellement pour le nb de disques entré >> ()
    //resoudreToursHanoiManuel(nbDisques);

    return 0;
}

// ======================================================================

// ---------- Observateurs
bool estDeplacable(const UnePile &tourOrigine, const UnePile &tourDestination)
{
    //Initialisation
    bool resultat = false;
    unsigned int elementDeplace;
    if (estVide(tourOrigine))
    {
        resultat = false;
    }
    else if (estVide(tourDestination))
    {
        resultat = true;
    }
    else
    {
        depiler
    }
    
    

}

// ---------- Primitives modifiant 1 tour
void remplirTour(UnePile & tourARemplir, unsigned int nbDisques)
{
    for (unsigned int i = nbDisques; i > 0 ; i--)
    {
        empiler(tourARemplir, i);
    }
    
}

// ---------- Primitives modifiant plusieurs tours
void initialiserTours(UnePile tours[])
{
    for (unsigned int i = 0; i < NB_TOURS; i++)
    {
        initialiser(tours[i]);
    }
    
}

void deplacerDisque(UnePile &tourOrigine, UnePile &tourDestination)
{
    unsigned int disque;
    depiler(tourOrigine, disque);
    empiler(tourDestination, disque);
}

void deplacerPetit(UnePile tours[], unsigned int NB_TOURS, unsigned int &posPetit)
{
    //Calculer les futurs position du plus petit disque
    unsigned int futurPetit; //La position futur du plus petit disque
    futurPetit = (posPetit + 1) % NB_TOURS;

    //Déplacer disque
    deplacerDisque(tours[posPetit], tours[futurPetit]);

    //Mise à jour posPetit
    posPetit = futurPetit;
}

void deplacerAutre(UnePile tours[], unsigned int posPetit, unsigned int nbDisques)
{
    unsigned int toursCand1; //Numéro de la première tour candidate
    unsigned int toursCand2; //Numéro de la deuxième tour candidate
    if (taille(tours[posPetit]) != nbDisques)
    {
        //Déplacement possible: Déterminer la tour de départ et d'arriver
        //Déterminer les tours candidates
        toursCand1 = tourSuivante(posPetit, NB_TOURS);
        toursCand2 = tourSuivante(toursCand1, NB_TOURS);

        //Faire le déplacement


    }
    else
    {
        /* code */
    }
    
}


// ---------- Affichages

void afficherTour(UnePile tour)
// paramètre passé par valeur
{
    unsigned int disque;
    cout << "{ ";
    while (!estVide(tour))
    {
        depiler(tour, disque);
        cout << disque << ". ";
    }
    cout << " }";
}

void afficherTours(const UnePile lesTours[])
{
    for (unsigned int i = 0; i < NB_TOURS; i++)
    {
        afficherTour(lesTours[i]);
    }
    
}

// ---------- Algorithme de résolution du problème des tours de Hanoi
/*
void resoudreToursHanoiManuel(unsigned int nbDisques)

{

    UnePile lesTours[NB_TOURS];

    unsigned int tourOrigine;       // tour origine du déplacement
    unsigned int tourDestination;   // tour destination du déplacement
    bool deplacementDemande;        // = vrai si, mors de la saisie, un déplacement est demandé, 
                                    // = faux si pas de déplacement demandé

     // Préparer mes tours
    initialiserTours(lesTours);
    remplirTour(lesTours[0], nbDisques);

    afficherTours(lesTours); cout << endl;
       
    // faire des déplacements manuels jusqu'à gagner
    do
    {
        // saisie - verif
       saisieVerifDeplacementDemande(deplacementDemande, tourOrigine, tourDestination);

        if (deplacementDemande)
        {
            // faire le déplacement demandé
            if (estDeplacable(lesTours[tourOrigine], lesTours[tourDestination]))
            {
                deplacerDisque (lesTours[tourOrigine], lesTours[tourDestination]);
                afficherTours(lesTours);
            }
            else
            {
                cout << "Le deplacement est impossible";
            }
        }
    } while (!(estVide(lesTours[0]) && estVide(lesTours[1])));

}
*/

void resoudreToursHanoiAutomatique(unsigned int nbDisques)
{
    UnePile lesTours[NB_TOURS];
    unsigned int posTourAvecPlusPetitDisque = 0;

    // Préparer les tours
    initialiserTours(lesTours);
    remplirTour(lesTours[0], nbDisques);
    afficherTours(lesTours);
    cout << endl << "-----------------------------------------------" << endl<< endl;

    // lesTours >> déplacer les disques >> lesTours
    while (true)
    {
        if (sontVides(lesTours[0], lesTours[1]))
        {
            break;
        }

        deplacerPetit(lesTours, NB_TOURS, posTourAvecPlusPetitDisque);
        afficherTours(lesTours); cout << endl;

        if (sontVides(lesTours[0], lesTours[1]))
        {
            break;
        }

        deplacerAutre(lesTours, posTourAvecPlusPetitDisque);
        afficherTours(lesTours); cout << endl << endl;
    }
}

/* ---------- Boîte à outils pour Hanoi Manuel 
   -------------------------------------------------------------------*/

   void saisieVerifDeplacementDemande(bool& deplacement, unsigned int& origine, unsigned int& destination)
   {
        string demandeSaisie    ;  // la demande de déplacement saisie
        bool reponseOk ;            // indicateur de validité de la réponse saisie : "12", "21", .... "31", ou "0xx"
        
        
        deplacement = false;   // = faux si l'utilisateur saisit "0" (pas de déplacement), vrai s'il saisit une des autres combinaisons autorisées
        cout << endl << " tourOrigine-tourDestination (exple : 12), 0 si pas de deplacement " ;

        do
        {
            // saisie 
            cout << " : " ;
            cin >> demandeSaisie;

            // analyse de validité
            reponseOk = false;
            if (
                (demandeSaisie[0] == '0') 
                || (    (demandeSaisie[0] >= '1') && (demandeSaisie[0] <= '3')
                     && (demandeSaisie[1] >= '1') && (demandeSaisie[1] <= '3')
                   )
               ) 
            {
                reponseOk = true;
            }
        } while (!reponseOk);

        // demandeSaisie >> Analyse de la réponse correcte >>  >> deplacement, [origine, destination] 
        if (demandeSaisie[0] != '0')
        {
            origine = carToChiffre(demandeSaisie[0]) - 1;
            destination = carToChiffre(demandeSaisie[1]) - 1;
            deplacement = true;
        }
   }

      int carToChiffre (char car)
      {
          int chiffre;
          chiffre = int(car-int('0'));
          return chiffre;
      }

      
/* ---------- Boîte à outils pour resolutionToursHanoiAutomatique ()
   -------------------------------------------------------------------*/

    unsigned int tourSuivante(unsigned int posTour, unsigned int NB_TOURS)
    {
        return (posTour+1) % NB_TOURS;
    }