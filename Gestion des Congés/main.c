#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jr1, jr2, ju,ja;
   printf("entrer les jours accordes: ");
   scanf("%d",&ja);
   printf("entrer les jours utilises: ");
   scanf("%d",&ju);

   if(ju <= ja){
        jr1 = ja - ju;
      printf("1\n", jr1);
     } else if (ju >= ja / 2){
          jr2 = (ja/2) - ju;
       printf("0\n", jr2);

      }else {
      printf("statut impossible\n");

      }



    return 0;
}
