/**
 * @file menu.h
 * @brief Module de gestion du menu principal
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 */

// On inclut les include guards
#ifndef MENU_H
#define MENU_H

// On ajoute les bibliothèques nécessaires
#include <iostream>
#include <fstream>

// On déclare les prototypes

/**
 * @brief Affiche le menu principal du programme
 * @details Affiche le titre et toutes les options disponibles
 */
void afficherMenu();

/**
 * @brief Traite le choix de l'utilisateur
 * @param choix Numéro de l'option sélectionnée (0-3)
 * @details Utilise un switch/case pour afficher les logs correspondants
 */
void choisirLog(int choix);

/**
 * @brief Lis le fichier log désigné
 * @param nomFichier, titre - Pour le nom du fichier - Le titre du choix
 * @details permet de lire un fichier log et renvois la valeur
 */
void lireFichierLogs(std::string nomFichier, std::string titre);

/**
 * @brief Génère un rapport
 * @details Permet de générer un rapport détaillé.
 */
void genererRapport();

/**
 * @brief Analyse les fichiers
 * @param nomFichier, typeLog, rapport - Pour le nom du fichier - Le dossier log étudié - Un rapport sur le nombre d'évènements
 * @details Permet d'analyser les fichiers et d'en faire un rapport
 */
void analyserFichier(std::string nomFichier, std::string typeLog, std::ofstream& rapport);

#endif // MENU_H

// ifndef, define et endif empêchent l'inclusion multiple du même fichier .h. Cela pourrait provoquer des erreurs de compilation.