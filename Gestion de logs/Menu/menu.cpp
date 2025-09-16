/**
 * @file menu.cpp
 * @brief Implémentation du module de gestion du menu
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 */

#include "menu.h"
#include <cstdlib>

using namespace std;

void afficherMenu() // On créer la fonction et on colle le code pour afficher le menu.
{
    system("cls");
    cout << "" << endl;
    cout << "=====================================================" << endl;
    cout << "HAUTOT Nolan - LEFRANC Robin | CIEL - Gestion de logs" << endl;
    cout << "=====================================================" << endl;
    cout << "" << endl;
    cout << "Menu principal :" << endl;
    cout << "" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "4 - Generer rapport de synthese" << endl;
    cout << "0 - Quitter" << endl;
    cout << "" << endl;
    cout << "Votre choix : ";
}

void choisirLog(int choix) // On créer la fonction et on colle le code pour gérer le choix de l'utilisateur.
{
    switch (choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
    {
    case 1: // Les 'case' sont l'equivalent des 'if'.
        lireFichierLogs("logs_test/windows_events.txt", "EVENEMENTS SYSTEME");
        break; // Le 'break' est obligatoire afin d'eviter une execution continue.
    case 2:
        lireFichierLogs("logs_test/network_logs.txt", "CONNEXIONS RESEAU");
        break;
    case 3:
        lireFichierLogs("logs_test/user_actions.txt", "ACTIONS UTILISATEUR");
        break;
    case 4:
        genererRapport();
        break;
    case 0:
        cout << "Au revoir !";
        break;
    default: // Le 'default' est l'equivalent du 'else' final.
        cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
    }
}

void lireFichierLogs(string nomFichier, string titre) // On créer la fonction avec comme paramètres nomFichier et titre.
{
    cout << "\n=== " << titre << " ===" << endl; // On met le titre, par exemple "CONNEXIONS RESEAU"

    // Déclarer un objet ifstream
    // Pour GCC 5.1, ajouter .c_str()
    ifstream fichier(nomFichier);

    if(fichier.is_open()) // On regarde si le fichier est ouvert
    {
        string ligne; // On créer un string ligne
        int compteur = 0; // On initialise un compteur à 0

        while(getline(fichier,ligne)) // Ici on fait une lecture ligne par ligne du fichier
        {
            cout << ligne << endl; // On renvoie la valeur d'une ligne
            compteur++; // On ajoute 1 au compteur
        }

        fichier.close();

        cout << "\nTotal : " << compteur << " evenements lus" << endl; // On renvoie le nombre d'evenement lus
    } else
    {
        cout << "Erreur : Impossible d'ouvrir le fichier " << nomFichier << endl; // Sinon on renvoie qu'il est impossible d'ouvrir le fichier
    }
}

void genererRapport() // On créer la fonction sans paramètre
{
    cout << "\n=== GENERATION DU RAPPORT ===" << endl; // On affiche le titre

    ofstream rapport("logs_test/rapport_synthese.txt"); // On génère un txt ou sera écrit le rapport.

    if(rapport.is_open()) // Si rapport est ouvert
    {
        rapport << "==========================================" << endl;
        rapport << "RAPPORT DE SYNTHESE DES LOGS - BTS CIEL" << endl;
        rapport << "Date de generation : " << __DATE__ << endl;
        rapport << "==========================================" << endl << endl;

        analyserFichier("logs_test/windows_events.txt", "Evenements systeme", rapport);
        analyserFichier("logs_test/network_logs.txt", "Connexions reseau", rapport);
        analyserFichier("logs_test/user_actions.txt", "Actions utilisateur", rapport);

        rapport << endl << "--- FIN DU RAPPORT ---" << endl;

        rapport.close();
        cout << "Rapport genere avec succes : logs_test/rapport_synthese.txt" << endl;
    } else 
    {
        cout << "Erreur : Impossible de creer le fichier rapport" << endl; // Sinon on renvoie une erreur
    }
}

void analyserFichier(string nomFichier, string typeLog, ofstream& rapport) // On créer la fonction avec les paramètres nomFichier, typeLog et rapport
{
    ifstream fichier(nomFichier); // On déclare un objet fichier

    if(fichier.is_open())
    {
        string ligne;
        int compteur = 0;

        rapport << "--- " << typeLog << " ---" << endl;

        while(getline(fichier,ligne))
        {
            compteur++;
        }

        rapport << "Nombre total d'evenements : " << compteur << endl;
        rapport << endl;

        fichier.close();
    } else
    {
        rapport << "ERREUR : Fichier " << nomFichier << " non trouvé" << endl << endl;
    }
}