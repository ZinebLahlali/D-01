#include <stdio.h>
#include <string.h>
struct etudiant {
    char nom[50];
    char prenom[50];
    int notes[4];

};

int main() {
    struct etudiant e1;
    strcpy(e1.nom, "Ali");
    strcpy(e1.prenom, "Altan");

    e1.notes[0] = 13;
    e1.notes[1] = 18;
    e1.notes[2] = 14;
    e1.notes[3] = 10;

    printf("Nom: %s\n", e1.nom);
    printf("prenom: %s\n", e1.prenom);
    printf("Notes: ");

    for(int i=0; i<4; i++){
        printf("%d ",e1.notes[i]);
    }




return 0;
}
