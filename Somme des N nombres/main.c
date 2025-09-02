#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,somme = 0;
    printf("veuillez entre un nombre: " );
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    somme +=i;
    printf("la somme %d est: %d\n", n, somme);
}
    return 0;
}
