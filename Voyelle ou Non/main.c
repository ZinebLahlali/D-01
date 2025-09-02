#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
     printf ("entrer un character:\n");
     scanf("%c",&ch);
     switch(ch){
         case 'A':
         printf ("ch : Voyelle\n");
         break;
         case 'E':
         printf ("ch: Voyelle\n");
         break;
         case 'I':
         printf ("ch : Voyelle\n");
         break;
         case 'O':
         printf ("ch : Voyelle\n");
         break;
         case 'U':
         printf ("ch : Voyelle\n");
         break;
         case 'Y':
         printf ("ch : Voyelle\n");
         break;
         default:
            printf("ch non-Voyelle\n");


     }
    return 0;
}
