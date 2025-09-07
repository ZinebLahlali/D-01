
#include <stdio.h>
#include <string.h>

char* inverser(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return str;
}

int main() {
    char mot[50];
    printf("Donner une chaine: ");
    fgets(mot, 50, stdin);

    // Enlever \n
    mot[strcspn(mot, "\n")] = '\0';

    printf("Mot inversé: %s\n", inverser(mot));

    return 0;
}
