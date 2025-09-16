### HAUTOT Nolan - LEFRANC Robin | TP Gestion Logs

# Itération 2 - Switch et Boucles

## Etape 1 : Remplacer if/else par switch/case

Code en C++ :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 2
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 2.0
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
    cout << "HAUTOT Nolan - LEFRANC Robin | CIEL - Gestion de logs" << endl;
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

    switch(choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
    {
        case 1: // Les 'case' sont l'equivalent des 'if'.
            cout << "Affichage des evenements systeme...";
            break; // Le 'break' est obligatoire afin d'eviter une execution continue.
        case 2:
            cout << "Affichage des connexions reseau...";
            break;
        case 3:
            cout << "Affichage des actions utilisateur...";
            break;
        case 4:
            cout << "Affichage des connexions utilisateur...";
            break;
        case 0:
            cout << "Au revoir !";
            break;
        default: // Le 'default' est l'equivalent du 'else' final.
            cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
    }

    return 0;
}
```

On a remplacé :

```c++
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
```

Par un code beaucoup plus léger et lisible grâce aux ```switch/case```. C'est un substitut de ```if/else```.

Dans ce cas là, le ```case``` est comme le ```if``` et le ```default``` est comme le ```else``` final.

## Etape 2 : Ajouter une boucle de répétition

Code en C++ :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 2
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 2.0
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

    do // On effectue une boucle do-while
    {
        // Affichage du Menu "Gestion de logs"
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
        cout << "4 - Voir les connexions utilisateur" << endl;
        cout << "0 - Quitter" << endl;
        cout << "" << endl;
        cout << "Votre choix : ";

        // Demander le choix de l'utilisateur
        cin >> choix;

        switch(choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
        {
            case 1: // Les 'case' sont l'equivalent des 'if'.
                cout << "Affichage des evenements systeme...";
                break; // Le 'break' est obligatoire afin d'eviter une execution continue.
            case 2:
                cout << "Affichage des connexions reseau...";
                break;
            case 3:
                cout << "Affichage des actions utilisateur...";
                break;
            case 4:
                cout << "Affichage des connexions utilisateur...";
                break;
            case 0:
                cout << "Au revoir !";
                break;
            default: // Le 'default' est l'equivalent du 'else' final.
                cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
        }

        if(choix!=0)
        {
            cout << "\nAppuyer sur Entree...";
            cin.ignore(); // Vide le buffer
            cin.get(); // Attend Entrée
        }

    } while(choix!=0); // Ici tant que choix est différent de 0, on continue la boucle.

    return 0;
}
```

> *Question 1 :* Quelle doit être la condition dans le ```while()``` ?
- La condition qui doit être dans le while est ```choix!=0```. Cela permet de boucler tant que la valeur de choix est différent de 0.
> *Question 2 :* Où placer le ```switch/case``` dans la boucle ?
- On place le ```switch/case``` dans la boucle après avoir demandé le choix de l'utilisateur.
> *Question 3 :* Comment éviter la pause quand on quitte (choix = 0) ?
- Pour éviter la pause, il suffit de faire une condition if pour effectuer la pause tant que choix est différent de 0.

```c++
if(choix!=0)
{
    cout << "\nAppuyer sur Entree...";
    cin.ignore(); // Vide le buffer
    cin.get(); // Attend Entrée
}
```

## Etape 3 : Standards de formatage du code

Code en C++ (formaté) :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 2
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 2.0
 */

/**
 * @brief Fonction principale du programme
 * affichant un menu et qui traite le choix de l'utilisateur.
 * Renvoie son choix, meme s'il n'est pas valide, avec un message.
 * Rajout d'une boucle avec pause sauf si 'choix=0'.
 * @return 0 si le programme se termine normalement.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    do // On effectue une boucle do-while
    {
        // Affichage du Menu "Gestion de logs"
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
        cout << "4 - Voir les connexions utilisateur" << endl;
        cout << "0 - Quitter" << endl;
        cout << "" << endl;
        cout << "Votre choix : ";

        // Demander le choix de l'utilisateur
        cin >> choix;

        switch (choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
        {
        case 1: // Les 'case' sont l'equivalent des 'if'.
            cout << "Affichage des evenements systeme...";
            break; // Le 'break' est obligatoire afin d'eviter une execution continue.
        case 2:
            cout << "Affichage des connexions reseau...";
            break;
        case 3:
            cout << "Affichage des actions utilisateur...";
            break;
        case 4:
            cout << "Affichage des connexions utilisateur...";
            break;
        case 0:
            cout << "Au revoir !";
            break;
        default: // Le 'default' est l'equivalent du 'else' final.
            cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
        }

        if (choix != 0)
        {
            cout << "\nAppuyer sur Entree...";
            cin.ignore(); // Vide le buffer
            cin.get();    // Attend Entrée
        }

    } while (choix != 0); // Ici tant que choix est différent de 0, on continue la boucle.

    return 0;
}
```

## Etape 4 : Documentation du code

Code en C++ :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 2
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 2.0
 */

/**
 * @brief Fonction principale du programme
 * @details Affiche un menu en boucle jusqu'à ce que
 * l'utilisateur choisisse de quitter (choix=0)
 * @return 0 si le programme se termine normalement
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;

    do // On effectue une boucle do-while
    {
        // Affichage du Menu "Gestion de logs"
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
        cout << "4 - Voir les connexions utilisateur" << endl;
        cout << "0 - Quitter" << endl;
        cout << "" << endl;
        cout << "Votre choix : ";

        // Demander le choix de l'utilisateur
        cin >> choix;

        switch (choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
        {
        case 1: // Les 'case' sont l'equivalent des 'if'.
            cout << "Affichage des evenements systeme...";
            break; // Le 'break' est obligatoire afin d'eviter une execution continue.
        case 2:
            cout << "Affichage des connexions reseau...";
            break;
        case 3:
            cout << "Affichage des actions utilisateur...";
            break;
        case 4:
            cout << "Affichage des connexions utilisateur...";
            break;
        case 0:
            cout << "Au revoir !";
            break;
        default: // Le 'default' est l'equivalent du 'else' final.
            cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
        }

        if (choix != 0)
        {
            cout << "\nAppuyer sur Entree...";
            cin.ignore(); // Vide le buffer
            cin.get();    // Attend Entrée
        }

    } while (choix != 0); // Ici tant que choix est différent de 0, on continue la boucle.

    return 0;
}
```

### Points de fonctionnement délicat à expliquer

> *```cin.ignore()``` et ```cin.get()``` : Pourquoi cette combinaison ?*
- ```cin.ignore()``` permet de rejeter toute entrée de l'utilisateur, et ```cin.get()``` permet d'enregistrer que l'utilisateur appuie bien sur entrée.
> *```do-while``` vs ```while``` : Justifier le choix*
- On choisi la boucle ```do-while``` car on veut que le code se fasse tant que ```choix!=0```, on teste la condition après avoir traité le choix, et l'on veut que le menu s'affiche au moins une fois.
> *```break``` dans ```switch``` : Que se passe-t-il sans ?*
- Si ```break``` n'est pas présent dans ```switch```, alors l'exécution sera infinie. D'où la nécessité de sa présence à la fin de chaque ```case```.
> *Condition de boucle : Logique de continuation*
- La condition de boucle permet d'avoir une logique de continuation. Imaginons que nous avons ```while (choix != 0);```, et bien ici la boucle continue tant que la valeur de choix est différente de 0. Si jamais l'utilisateur choisit 0, alors la boucle s'arrête.

## Pour aller plus loin

Code en C++ :

```c++
/**
 * @file main.cpp
 * @brief Programme de gestion de logs - Iteration 2
 * @author HAUTOT Nolan - LEFRANC Robin
 * @date 16/09/2025
 * @version 2.0
 */

/**
 * @brief Fonction principale du programme
 * @details Affiche un menu en boucle jusqu'à ce que
 * l'utilisateur choisisse de quitter (choix=0)
 * @return 0 si le programme se termine normalement
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Variable pour stocker le choix
    int choix = 0;
    int compteur = 0; // Variable pour stocker le nombre d'actions.

    do // On effectue une boucle do-while
    {
        // Affichage du Menu "Gestion de logs"
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
        cout << "4 - Voir les connexions utilisateur" << endl;
        cout << "0 - Quitter" << endl;
        cout << "" << endl;
        cout << "Compteur d'action : " << compteur << endl;
        cout << "Votre choix : ";

        // Demander le choix de l'utilisateur
        cin >> choix;

        switch (choix) // Ici on utilise switch à la place de if/else if pour une meilleure lisibilité et avoir un code plus léger.
        {
        case 1: // Les 'case' sont l'equivalent des 'if'.
            cout << "Affichage des evenements systeme...";
            break; // Le 'break' est obligatoire afin d'eviter une execution continue.
        case 2:
            cout << "Affichage des connexions reseau...";
            break;
        case 3:
            cout << "Affichage des actions utilisateur...";
            break;
        case 4:
            cout << "Affichage des connexions utilisateur...";
            break;
        case 0:
            cout << "Au revoir !";
            break;
        default: // Le 'default' est l'equivalent du 'else' final.
            cout << "Erreur ! Le choix " << choix << " n'est pas un choix valide !";
        }

        compteur = compteur + 1; // On ajoute 1 à chaque fois qu'une action est effectuée.

        if (choix != 0)
        {
            cout << "\nAppuyer sur Entree...";
            cin.ignore(); // Vide le buffer
            cin.get();    // Attend Entrée
        }

    } while (choix != 0); // Ici tant que choix est différent de 0, on continue la boucle.

    return 0;
}
```

Dans ce code nous avons rajouté une variable ```compteur``` à laquelle on a attribué la valeur 0. A chaque boucle, donc chaque action, on incrémente 1 à la variable : ```compteur = compteur + 1```.