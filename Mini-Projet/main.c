#include <stdio.h>
#include <string.h>

int main() {
    int maxLivres = 100;   // maximum number of books

    // Données (tableaux parallèles)
    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantite[100];
    int nLivres = 0;

    int choix;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher total des livres\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                // AJOUTER
                if (nLivres >= maxLivres) {
                    printf("Stock plein !\n");
                } else {
                    printf("Titre : ");
                    scanf(" %[^\n]", titres[nLivres]);
                    printf("Auteur : ");
                    scanf(" %[^\n]", auteurs[nLivres]);
                    printf("Prix : ");
                    scanf("%f", &prix[nLivres]);
                    printf("Quantite : ");
                    scanf("%d", &quantite[nLivres]);
                    nLivres++;
                    printf("Livre ajoute !\n");
                }
                break;
            }
            case 2: {
                // AFFICHER
                if (nLivres == 0) {
                    printf("Aucun livre.\n");
                } else {
                    for (int i = 0; i < nLivres; i++) {
                        printf("%d) %s | %s | %.2f DH | Qte: %d\n",
                               i+1, titres[i], auteurs[i], prix[i], quantite[i]);
                    }
                }
                break;
            }
            case 3: {
                // RECHERCHER
                char t[50];
                int trouve = 0;
                printf("Titre a chercher : ");
                scanf(" %[^\n]", t);
                for (int i = 0; i < nLivres; i++) {
                    if (strcmp(titres[i], t) == 0) {
                        printf("Trouve: %s | %s | %.2f DH | Qte: %d\n",
                               titres[i], auteurs[i], prix[i], quantite[i]);
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) printf("Livre introuvable.\n");
                break;
            }
            case 4: {
                // METTRE A JOUR QUANTITE
                char t[50];
                int newQte, fait = 0;
                printf("Titre du livre : ");
                scanf(" %[^\n]", t);
                for (int i = 0; i < nLivres; i++) {
                    if (strcmp(titres[i], t) == 0) {
                        printf("Nouvelle quantite : ");
                        scanf("%d", &newQte);
                        quantite[i] = newQte;
                        printf("Quantite mise a jour !\n");
                        fait = 1;
                        break;
                    }
                }
                if (!fait) printf("Livre introuvable.\n");
                break;
            }
            case 5: {
                // SUPPRIMER
                char t[50];
                int index = -1;
                printf("Titre a supprimer : ");
                scanf(" %[^\n]", t);
                for (int i = 0; i < nLivres; i++) {
                    if (strcmp(titres[i], t) == 0) { index = i; break; }
                }
                if (index == -1) {
                    printf("Livre introuvable.\n");
                } else {
                    for (int j = index; j < nLivres-1; j++) {
                        strcpy(titres[j],  titres[j+1]);
                        strcpy(auteurs[j], auteurs[j+1]);
                        prix[j]     = prix[j+1];
                        quantite[j] = quantite[j+1];
                    }
                    nLivres--;
                    printf("Livre supprime !\n");
                }
                break;
            }
            case 6: {
                // TOTAL
                int totalEx = 0;
                for (int i = 0; i < nLivres; i++) totalEx += quantite[i];
                printf("Nombre de titres : %d | Total exemplaires : %d\n",
                       nLivres, totalEx);
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}
