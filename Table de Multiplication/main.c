#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,i,M;
    printf("veuillez entre un nombre: ");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
     M = N*i;
    printf("%d x %d = %d\n",N,M,i);
    }
    return 0;
}
