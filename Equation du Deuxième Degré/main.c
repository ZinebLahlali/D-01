#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("entrer les valeurs de a,b et c :");
    scanf("%f %f %f",&a,&b,&c);
    delta = pow(-b,2) - (4 * a* c);
    if (delta < 0)
        printf("Pas de solutions reelles");
    else if (delta == 0){
        x = (-b)/(2*a);
        printf("La solution est: %.2f",x);
    }
    else {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        printf("La solution est: %.2f et %.2f",x1,x2);

    }
    return 0;
}
