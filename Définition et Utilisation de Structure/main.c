#include <stdio.h>
#include <string.h>
struct contact {
    char nom[50];
    char prenom[50];
    int age;
};


int main()
{
    struct contact c;

    printf("entrez le nom:");
    fgets(c.nom, 50, stdin);

    printf("entrez le prenom:");
    fgets(c.prenom, 50, stdin);


   printf("Entrez l'age: ");
    scanf("%d", &c.age);


printf("\n contact:\n %s %s %d \n",c.nom ,c.prenom , c.age );


    return 0;
}
