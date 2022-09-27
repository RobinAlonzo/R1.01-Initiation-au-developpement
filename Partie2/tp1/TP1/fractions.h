/**
 * @file fractions.h
 * @author Robin Alonzo
 * @brief Entete du module fractions
 * @date 2021-11-17
 */

#ifndef FRACTIONS_H
#define FRACTIONS_H 

struct Fraction
{
    int num; //Numérateur de la fonction
    unsigned int den; //Dénominateur de la fraction
};

// Constantes
const Fraction FRACTION_NULLE = {0,1};

//Constructeurs

//Observateurs 
/**
 * @brief Indique si la une fraction est réduite ou pas
 * 
 * @param frac la fraction à analyser
 * @return true si la fraction est réduite
 * @return false si la fraction n'est pas réduite
 */
bool estReduite(Fraction frac);

//Modificateurs

//Calculs
/**
 * @brief additioner deux fraction entre elle
 * @warning warning message
 */
Fraction additioner();

//Entrées - Sorties

/**
 * @brief affiche à l'écran une fraction sous sa forme irréductible
 * 
 * @param frac la fraction à afficher
 * @warning  le paramètre frac est une fraction irréductible
 */
void afficher (const Fraction &frac);

/**
 * @brief Retourne une fraction irréductible à partir de 2 valeurs entières saisies au clavier
 * 
 */
Fraction saisir();


#endif