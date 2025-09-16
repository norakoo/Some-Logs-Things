/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 4
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 4.0
 */

/**
 * @brief Fonction principale du programme
 * @details Affiche un menu en boucle jusqu'à ce que
 * l'utilisateur choisisse de quitter (choix=0)
 * @return 0 si le programme se termine normalement
 */

#include <iostream>
#include <string>

// On inclut le module Menu qu'on a créer
#include "Menu/menu.h"

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    do // On effectue une boucle do-while
    {
        // Affichage du Menu "Gestion de logs"
        afficherMenu(); // On appelle la fonction afficherMenu()

        // Demander le choix de l'utilisateur
        cin >> choix;

        choisirLog(choix); // On appelle la fonction choisirLog(choix)

        if (choix != 0)
        {
            cout << "\nAppuyer sur Entree...";
            cin.ignore(); // Vide le buffer
            cin.get();    // Attend Entrée
        }

    } while (choix != 0); // Ici tant que choix est différent de 0, on continue la boucle.

    return 0;
}