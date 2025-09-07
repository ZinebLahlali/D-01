#include <stdio.h>
#include <string.h>
int multi(int a, int b){
    
    return (a * b);
};
int main() {
    int a, b;
    int resultat;
    printf("entrer nombre 1: ");
    scanf("%d", &a);
    printf("entrernombre 2: ");
    scanf("%d", &b);
    resultat = multi(a,b);
    printf("la Multiplication est: %d", resultat);

    return 0;
}