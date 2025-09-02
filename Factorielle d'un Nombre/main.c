#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre_user;
    int factorial = 1;

    printf("Entrer un nombre: ");
    scanf("%d", &nombre_user);

    for(int i=nombre_user; i>1; i--){
        factorial *= i;
    }

    printf("%d!=%d",nombre_user, factorial);









    return 0;
}
