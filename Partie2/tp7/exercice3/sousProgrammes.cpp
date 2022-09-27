#include <iostream>
#include "sousProgrammes.h"
#include "fichierTexte.h"

using namespace std;


// Sous-programmes utilisés par les sous-programmes de cryptage
// ---------------------------------------------------------------------
string genererNom(string nom);
/* retourne un nouveau nom de fichier contenant --> _crypted
   cas de figure :
   nom    -->  nouveauNom généré     : motif
   .           .                     : nom de fichier illégal, la fonction retourne le paramètre initial donné
   .h          .h_crypted            : le point est ici unla marque d'un fichier caché, "_crypted" est donc ajouté  
                                       en fin de nom pour que le nouveau nom de fichier soit aussi un nom de fichier caché
   x.          x._crypted            : pas de suffixe après la point, "_crypted" ajouté en fin de nom
   x           x_crypted             : pas de suffixe, "_crypted" ajouté en fin de nom
   x.h         x_crypted.h           : "_crypted" inséré avant le point de suffixe
   x.js        x_crypted.js          : "_crypted" inséré avant le point de suffixe
   x.cpp       x_crypted.cpp         : "_crypted" inséré avant le point de suffixe
   x.data      x_crypted.data        : "_crypted" inséré avant le point de suffixe
   x.config    x_crypted.config      : "_crypted" inséré avant le point de suffixe
   x.texinfo   x_crypted.texinfo     : "_crypted" inséré avant le point de suffixe
   x.12345678  x.12345678_crypted    : au dela de 7 caractères après le point, on considère
                                       que le point fait partie du nom du fichier et ne marque pas
                                       un suffixe --> "_crypted" ajouté en fin de nom
   ../x.h      ../x_crypted.h
   ../x        ../x_crypted
   ./x.h       ./x_crypted.h
   ./x         ./x_crypted

    sources : https://fr.wikipedia.org/wiki/Extension_de_nom_de_fichier
              https://fr.wikipedia.org/wiki/Liste_d%27extensions_de_fichiers
    
    cas particulier non (ou mal traité) : x.tar.gz --> x.tar_crypted.gz
   */
// ---------------------------------------------------------------------

string cryptage(string nomSysFicSource)
{
    //Initialisaton des variables
    UnFichierTexte fichierSource;
    UnFichierTexte fichierCrypte;
    char carNonCrypte;
    char carCrypte;
    bool finDeFichier = false;

    //Preparation des fichiers cryptés
    //Preparation du fichier source
    associer(fichierSource, nomSysFicSource);
    ouvrir(fichierSource, consultation);

    //Preparation du fichier crypté
    associer(fichierCrypte, genererNom(nomSysFicSource));
    ouvrir(fichierCrypte, creation);

    while (true)
    {
        //Crypter les caractères
        //Tenter de lire
        lireCar(fichierSource, carNonCrypte, finDeFichier);

        if (finDeFichier)
        {
            break;
        }

        //Ajouter le caractère crypté
        switch (carNonCrypte)
        {
        case 'a':
            carCrypte = 'e';
            break;
        case 'e':
            carCrypte = 'i';
            break;
        case 'i':
            carCrypte = 'o'; 
            break;
        case 'o':
            carCrypte = 'u';
            break;
        case 'u':
            carCrypte = 'y';
            break;  
        case 'y':
            carCrypte = 'a';
            break;
        case 'A':
            carCrypte = 'e';
            break;
        case 'E':
            carCrypte = 'i';
            break;
        case 'I':
            carCrypte = 'o';
            break; 
        case 'O':
            carCrypte = 'u';
            break;
        case 'U':
            carCrypte = 'y';
            break;  
        case 'Y':
            carCrypte = 'a';
            break;                                                     
        default:
            carCrypte = carNonCrypte;
            break;
        }

        ecrire(fichierCrypte,carCrypte);
    }

    fermer(fichierCrypte);
    fermer(fichierSource);
    // retourner le nom du fichier créé
    return "cryptage SIMPLE en construction";
}

string cryptage(string nomSysFicSource, string nomSysFicCodes)
{

    table tableCode;  
    //Initialisaton des variables
    UnFichierTexte fichierCode;
    UnFichierTexte fichierSource;
    UnFichierTexte fichierCrypte;  
    string carTableClair;
    string carTableCrypte; 
    char carNonCrypte;
    char carCrypte;     
    bool finDeFichier = false;

    //Preparation des fichiers cryptés
    //Preparation du fichier source
    associer(fichierSource, nomSysFicSource);
    ouvrir(fichierSource, consultation);

    //Preparation du fichier crypté
    associer(fichierCrypte, genererNom(nomSysFicSource));
    ouvrir(fichierCrypte, creation);

    //Preparation fichier code
    associer(fichierCode, nomSysFicCodes);
    ouvrir(fichierCode, consultation);

    //Charger la table de correspondance
    while (true)
    {
        //Crypter les caractères
        //Tenter de lire
        lireCar(fichierCode, carTableClair, finDeFichier);

        if (finDeFichier)
        {
            break;
        }

        //Lire le deuxième caractère
        lireCar(fichierCode, carTableCrypte, finDeFichier);

        //Compléter la table
        tableCode.originale += carTableClair;
        tableCode.crypte += carTableCrypte;
    }    

    //Rechercher carSource dans la table
    long long unsigned int taille = tableCode.originale.size();
    bool carTrouve = false;
    unsigned short int i = 0;
    finDeFichier = false;

    while (true)
    {
        //Crypter les caractères
        //Tenter de lire
        lireCar(fichierSource, carNonCrypte, finDeFichier);

        if (finDeFichier)
        {
            break;
        }

        //Ajouter le caractère crypté
        while (i != taille)
        {
            if (tableCode.originale[i] == carNonCrypte)
            {
                carTrouve = true;
                break;
            }
            i = i + 1;
            
        }

        //Definir le carCrypte
        if (carTrouve == true)
        {
            carCrypte = tableCode.crypte[i];
        }
        else
        {
            carCrypte = carNonCrypte;
        }

        ecrire(fichierCrypte,carCrypte);
    }
    
    

    fermer(fichierCode);
    fermer(fichierCrypte);
    fermer(fichierSource);
    // nomSysFicCble >> retourner nom système du fichier cible
    return "cryptage avec fichier DE CODES en cnstruction";
}

// ---------------------------------------------------------------------
// Corps des sous-programmes utilisés par les sous-programmes de cryptage
string genererNom(string nom)
{
    enum UnCas
    {
        nomIllegal,
        ajouterEnFin,
        insererAvantPoint
    };
    string nouveauNom = "";
    bool trouvePoint = false;
    bool trouveSlash = false;
    unsigned int posPoint; // position du dernier point, s'il en existe dans la chaîne nom
    unsigned int posSlash; // position du dernier slash, s'il en existe dans la chaîne nom
    UnCas cas;

    // nom >> determiner position dernierSlash >> posSlash
    for (unsigned int i = 0; i < nom.length(); i++)
    {
        if (nom[i] == '/')
        {
            trouveSlash = true;
            posSlash = i;
        }
    }
    // nom, trouveSlash, [posSlash] >> Déterminer position du dernier point >> trouvé, posPoint
    if (trouveSlash)
    {
        // on cherche le point de suffixe après les caractères indiquant le chemin relatif
        for (unsigned int i = posSlash + 1; i < nom.length(); i++)
        {
            if (nom[i] == '.')
            {
                trouvePoint = true;
                posPoint = i;
            }
        }
    }
    else
    {
        // on cherche le point de suffixe dès le début du nom de fichier
        for (unsigned int i = 0; i < nom.length(); i++)
        {
            if (nom[i] == '.')
            {
                trouvePoint = true;
                posPoint = i;
            }
        }
    }

    // posPoint, mot >> Analyse de la situation >> cas
    if (trouvePoint && (posPoint == 0) && nom.length() == 1)
    {
        // le nom ne contient qu'un point --> mauvais nom de fichier, on ne fait rien
        cas = nomIllegal;
    }
    else if (trouvePoint && (posPoint == 0) && nom.length() > 1)
    {
        // le nom démarre par un point --> c'est un fichier caché, on ajoute _crypted en fin de nom (après le point)
        cas = ajouterEnFin;
    }
    else if (trouvePoint && (posPoint > 0))
    {
        // mot contient au moins un point.
        // le dernier . est considéré comme . de suffixe si la longueur du suffixe est <= 7
        // sinon, le . est considéré comme faisant partie du nom de fichier
        if (((nom.length() - posPoint - 1) <= 7) && ((nom.length() - posPoint - 1) > 0))
        {
            cas = insererAvantPoint;
        }
        else
        {
            cas = ajouterEnFin;
        }
    }
    else // !trouve
    {
        // pas de point, ajout de la chaîne en fin de nom
        cas = ajouterEnFin;
    }

    // cas, posPoint, nom >> Generer le nouveaunom selon le cas >> nouveauNom
    switch (cas)
    {
    case nomIllegal:
        nouveauNom = nom;
        break;
    case ajouterEnFin:
        nouveauNom = nom + "_crypted";
        break;
    case insererAvantPoint:
        // ajouter la partie avant le point
        for (unsigned int i = 0; i < posPoint; i++)
        {
            nouveauNom = nouveauNom + nom[i];
        }

        // ajouter le tterme "_crypted" et le point
        nouveauNom = nouveauNom + "_crypted.";

        // ajouter la fin
        for (unsigned int i = posPoint + 1; i < nom.length(); i++)
        {
            nouveauNom = nouveauNom + nom[i];
        }
        break;
    }

    return nouveauNom;
}