#include <stdio.h>
#include <stdlib.h>


#include <string.h>
int somme(int a, int b){

    return (a + b);
};
int main() {
    int a, b;
    int resultat;
    printf("entrer nombre 1: ");
    scanf("%d", &a);
    printf("entrernombre 2: ");
    scanf("%d", &b);
    resultat = somme(a,b);
    printf("la somme est: %d", resultat);

    return 0;
}
