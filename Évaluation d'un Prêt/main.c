#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R,S,D;
    printf("donner le Revenu annuel\n");
    scanf("%d",&R);
    printf("donner le Score de credit\n");
    scanf("%d",&S);
    printf("donner la Duree\n");
    scanf("%d",&D);
    if(R>= 30000 && S>= 700 && D <= 10){
        printf("Eligible\n");
    } else if(R>= 30000 && S>= 650 && D <= 15){
       printf("Eligible avec conditions\n");
    }
    else {
        printf("Non eligible");
    }

    return 0;
}
