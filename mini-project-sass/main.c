
    #include <stdio.h>
    #include <string.h>
    struct contact {
        char nom [50];
        char num [50];
        char email[50];
    };

    int main() {

        struct contact c[100];
         int nbr_contact = 0;

     //todo : structure
     //todo : menu
     //todo : ajouter
     //todo : modfier
     //todo : supprimer
     //todo :afficher
     //todo : rechercher
        int choix;
        do {
            printf("\n----MENU----\n");
            printf("1.Ajouter un Contact\n");
            printf("2.Modfier un Contact\n");
            printf("3.Supprimer un Contact\n");
            printf("4.Afficher un Contact\n");
            printf("5.Rechercher un Contact\n");
            printf("0.Quitter\n");
            printf("choisir un choix: ");
            scanf("%d",&choix);
            getchar();
            switch (choix){
                case 1: //Ajouter
                printf("Combien de contacts voulez vous ajouter? " );
                int nb;
                scanf("%d",&nb);
                getchar();
                for(int i=0; i<nb; i++){
                    printf("contact %d Nom: ", nbr_contact+1);
                    fgets(c[nbr_contact].nom,50,stdin);
                    c[nbr_contact].nom[strcspn(c[nbr_contact].nom,"\n")] = '\0';
                    printf("contact %d Numero de telephone: ",nbr_contact+1);
                    fgets(c[nbr_contact].num,50,stdin);
                    c[nbr_contact].num[strcspn(c[nbr_contact].num,"\n")] = '\0';
                    printf("contact %d Adresse e-mail: ",nbr_contact+1);
                    fgets(c[nbr_contact].email,50,stdin);
                    c[nbr_contact].email[strcspn(c[nbr_contact].email,"\n")] = '\0';

                    nbr_contact++;

                }
                break;
                case 2: //modfier
                char modif [50];
                printf ("donner le nom a modfier: ");
                //getchar();
                fgets(modif,50,stdin);
                modif[strcspn(modif,"\n")] = '\0';
                int trouve_modif = 0;
                for(int i=0;i<nbr_contact;i++){
                    if(strcmp(c[i].nom,modif) == 0){
                        printf("contact trouve: %s\n",c[i].nom);

                        printf("nouveau numero de telephone: ");
                        fgets(c[i].num,50,stdin);
                        c[i].num[strcspn(c[i].num,"\n")] = '\0';

                         printf("nouvelle adresse e-mail: ");
                        fgets(c[i].email,50,stdin);
                        c[i].email[strcspn(c[i].email,"\n")] = '\0';

                        printf("Modification effectuee !\n");
                        trouve_modif = 1;
                    }
                }
                        break;

                case 3: //Supprimer
                char supp[50];
                printf("Donner le contact a supprimer: ");
                fgets(supp,50,stdin);
                supp[strcspn(supp,"\n")] = '\0';
                int trouve_supp = 0;
                     for(int i=0; i < nbr_contact; i++) {
                      if(strcmp(c[i].nom, supp) == 0) {
                        for(int j=i; j< nbr_contact - 1;j++) {
                          strcpy(c[j].nom,c[j+1].nom);
                          strcpy(c[j].num,c[j+1].num);
                          strcpy(c[j].email,c[j+1].email);

                }
                nbr_contact--;
                printf("le contact supprime avec succes! \n");
                trouve_supp = 1;
                i--;
                }
                break;
                }

                 case 4: //Afficher
                 for(int i=0; i<nbr_contact; i++){
                     printf("contact %d:\n Nom: %s\n Tel: %s\n Email: %s\n\n", i+1, c[i].nom, c[i].num, c[i].email);
                 }
                 break;
                 case 5: //chercher
                 char chercher[50];
                 int trouve_chercher = 0;
                 printf("donner le contact a chercher: \n");
                 fgets(chercher,50,stdin);
                 chercher[strcspn(chercher,"\n")] = '\0';
                 for(int i=0; i<nbr_contact; i++){
                     if(strcmp(c[i].nom,chercher) == 0){
                         printf("\n=== contact trouve ===:\n");
                         printf("Nom : %s\n",c[i].nom);
                         printf("Tel : %s\n",c[i].num);
                         printf("Email : %s\n",c[i].email);

                         trouve_chercher = 1;
                         break;
                     }
                 }
                 if(!trouve_chercher){
                     printf("le contact est introuvable !\n");
                 }
                 break;




            }





        } while(choix!=0);
        return 0;
    }
