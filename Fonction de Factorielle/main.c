// Online C compiler to run C program online
#include <stdio.h>

int facto(int n){
    int resultat = 1;
    for(int i=1; i<=n ; i++){
        resultat *= i;
    }
    return resultat;
}


int main() {
    int n;
    printf("donner un nombre ");
    scanf("%d",&n);
    printf("le factorielle de %d est %d ", n,facto(n));




    return 0;
}
