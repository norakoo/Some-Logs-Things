### HAUTOT Nolan | TP Gestion Logs

# Itération 1 - Menu Interactif C++

## Etape 0 : Préparation - Déclaration des variables

Code en C++ :

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable 'choix' à déclarer comme entier.

    return 0;
}
```

> *Question 1 :* Quelle est la syntaxe pour déclarer une variable entière en C++ ?
- La syntaxe pour déclarer une variable entière en C++ est ```int choix = 0```
> *Question 2 :* Où placer la déclaration dans le code ?
- On place la déclaration à l'intérieur du ```int main()``` :
```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable 'choix' à déclarer comme entier.
    int choix = 0;

    return 0;
}
```

## Etape 1 : Affichage du titre et du menu

Code en C++ :

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    // Affichage du Menu "Gestion de logs"
    cout << "===============================" << endl;
    cout << "CIEL - Gestion de logs" << endl;
    cout << "===============================" << endl;
    cout << "Menu principal :" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "0 - Quitter" << endl;
    cout << "Votre choix : ";

    return 0;
}
```

> Il est possible d'écrire ce code en une seule ligne :

```c++
cout << "Test1" << endl << "Test2" << endl << ... << "Fin";
```

## Etape 2 : Demander le choix à l'utilisateur

Code en C++ :

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    // Affichage du Menu "Gestion de logs"
    cout << "===============================" << endl;
    cout << "CIEL - Gestion de logs" << endl;
    cout << "===============================" << endl;
    cout << "Menu principal :" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "0 - Quitter" << endl;
    cout << "Votre choix : ";

    // Demander le choix de l'utilisateur
    cin >> choix;

    // Afficher le choix de l'utilisateur
    cout << "Vous avez choisi " << choix;

    return 0;
}
```

> *Question 1 :* Dans quelle variable stocker la réponse ?
- On stock la réponse dans la variable ```choix```.
> *Question 2 :* Quelle est la syntaxe exacte pour lire avec cin ?
- La syntaxe exacte pour lire avec cin est ```cin >> maVariable```;
> *Question 3 :* Faut-il un endl après "Votre choix : " ?
- Non il n'y a pas besoin d'un ```endl``` après "Votre choix : ".

## Etape 3 : Traitement des choix valides

Code en C++ :

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    // Affichage du Menu "Gestion de logs"
    cout << "===============================" << endl;
    cout << "CIEL - Gestion de logs" << endl;
    cout << "===============================" << endl;
    cout << "Menu principal :" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "0 - Quitter" << endl;
    cout << "Votre choix : ";

    // Demander le choix de l'utilisateur
    cin >> choix;

    // On compare les differents choix valides puis on affiche le choix
    if (choix == 1)
    {
        cout << "Affichage des evenements systeme...";
    } else if (choix == 2)
    {
        cout << "Affichage des connexions reseau...";
    } else if (choix == 3)
    {
        cout << "Affichage des actions utilisateur...";
    } else if (choix == 0)
    {
        cout << "Au revoir !";
    }

    return 0;
}
```

Ici on affiche une phrase différentes pour chaque choix disponible (1,2,3,0).

## Etape 4 : Gestion des choix invalides

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    // Affichage du Menu "Gestion de logs"
    cout << "===============================" << endl;
    cout << "CIEL - Gestion de logs" << endl;
    cout << "===============================" << endl;
    cout << "Menu principal :" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "0 - Quitter" << endl;
    cout << "Votre choix : ";

    // Demander le choix de l'utilisateur
    cin >> choix;

    // On compare les differents choix valides puis on affiche le choix
    if (choix == 1)
    {
        cout << "Affichage des evenements systeme...";
    } else if (choix == 2)
    {
        cout << "Affichage des connexions reseau...";
    } else if (choix == 3)
    {
        cout << "Affichage des actions utilisateur...";
    } else if (choix == 0)
    {
        cout << "Au revoir !";
    } else // On fait une comparaison si le choix est differents de ceux ci-dessus, et on renvoie un message d'erreur.
    {
        cout << "Erreur ! le choix " << choix << " n'est pas un choix valide !"; // On renvoie un message d'erreur.
    }

    return 0;
}
```

Ici on renvoie un message d'erreur si le choix est différent de 1, 2, 3 ou 0.

## Pour aller plus loin

Code en C++ :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 1
 * @author HAUTOT Nolan
 * @date 09/09/2025
 */

/**
 * @brief Fonction principale du programme
 * affichant un menu et qui traite le choix de l'utilisateur.
 * Renvoie son choix, meme s'il n'est pas valide, avec un message.
 * @return 0 si le programme se termine normalement.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    // Affichage du Menu "Gestion de logs"
    cout << "=====================================================" << endl;
    cout << "HAUTOT Nolan | CIEL - Gestion de logs" << endl;
    cout << "=====================================================" << endl;
    cout << "" << endl;
    cout << "Menu principal :" << endl;
    cout << "" << endl;
    cout << "1 - Voir les evenements systeme" << endl;
    cout << "2 - Voir les connexions reseau" << endl;
    cout << "3 - Voir les actions utilisateur" << endl;
    cout << "4 - Voir les connexions utilisateur" << endl;
    cout << "0 - Quitter" << endl;
    cout << "" << endl;
    cout << "Votre choix : ";

    // Demander le choix de l'utilisateur
    cin >> choix;

    // On compare les differents choix valides puis on affiche le choix
    if (choix == 1)
    {
        cout << "Affichage des evenements systeme...";
    } else if (choix == 2)
    {
        cout << "Affichage des connexions reseau...";
    } else if (choix == 3)
    {
        cout << "Affichage des actions utilisateur...";
    } else if (choix == 4)
    {
        cout << "Affichage des connexions utilisateur...";
    } else if (choix == 0)
    {
        cout << "Au revoir !";
    } else // On fait une comparaison si le choix est differents de ceux ci-dessus, et on renvoie un message d'erreur.
    {
        cout << "Erreur ! le choix " << choix << " n'est pas un choix valide !"; // On renvoie un message d'erreur.
    }

    return 0;
}
```


Dans ce code, nous avons procéder à quelques modifications/ajouts afin de rendre le menu plus lisible. Nous avons aussi rajouté un 4e choix.

