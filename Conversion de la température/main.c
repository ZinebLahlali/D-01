#include <stdio.h>
#include <stdlib.h>

int main()
{
   float k,c;
   printf ("entrer la temperature en Celsius: ");
   scanf ("%f",&c);
   k = c + 273.15;
   printf (" la temperature en Kelvin est %.2f", k);

    return 0;
}
