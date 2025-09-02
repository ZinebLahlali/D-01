#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;
    printf ("entre un nombre entier:\n");
    scanf ("%d",&nbr);
    if(nbr % 2 == 0)
        printf ("le nombre est pair\n");
    else
        printf ("le nombre est impair\n");
    return 0;
}
