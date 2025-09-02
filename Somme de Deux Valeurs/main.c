#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,somme;
    printf("Entrez la valeur de a :\n");
    scanf ("%d",&a);
    printf("Entrez la valeur de b :\n");
    scanf ("%d",&b);
    somme = a + b;

    if(a==b){
     printf("Les deux valeurs sont identiques.\n");
        printf("Le triple de la somme est : %d\n", somme * 3);
    } else {
        printf("La somme est : %d\n", somme);
    }
    return 0;
}
