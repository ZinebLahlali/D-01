#include <stdio.h>
#include <stdbool.h>
int main()
{
   char Nom[25], Prenom[25], Email[100] ;
   char Sexe;
   float age;
   printf ("veuillez entrer le Nom : ");
   scanf ("%s", &Nom);
   printf ("veuillez entrer le Prenom : ");
   scanf ("%s", &Prenom);
   printf ("veuillez entrer l'adresse email : ");
   scanf ("%s",&Email );
   printf ("veuillez entrer le Sexe : ");
   scanf(" %c", &Sexe);
    switch(Sexe) {
        case 'M':
            printf("Sexe : Masculin\n");
            break;
        case 'F':
            printf("Sexe : Feminin\n");
            break;
        default:
            printf("Sexe invalide\n");
    }
   printf ("veuillez entrer l'age: ");
   scanf ("%f", &age);

     printf("\nVos informations sont :\n");
    printf("Nom: %s\n", Nom);
    printf("Prenom: %s\n", Prenom);
    printf("Email: %s\n", Email);
    printf("Sexe: %c\n", Sexe);
    printf("Age: %.1f\n", age);

   return 0;
}
