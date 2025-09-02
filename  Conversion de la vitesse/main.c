#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V_kmh,V_ms;
   printf ("entrer la vitesse en k/h : ");
   scanf ("%f",&V_kmh);
   V_ms = V_kmh *  0.27778;
   printf("la vitesse en m/s est %.2f", V_ms);

    return 0;
}
