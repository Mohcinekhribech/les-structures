#include <stdio.h>
#include <stdlib.h>
typedef struct{
int jour;
int mois;
int annee;
}Datenais;
typedef struct{
char nom[20];
char prenom[20];
Datenais date;
}Stagiaire;

int main()
{
    int n,i;
    printf("donne le nombres des stagiaires :");
    scanf("%d",&n);
    Stagiaire S[n];

    for(i=0;i<n;i++){
        printf("entrer le nom et prenom de stagiaire%d :\n",i+1);
    printf("Nom :");
    scanf("%s",&S[i].nom);
    printf("Prenom :");
    scanf("%s",&S[i].prenom);

     printf("entrer la DN de stagiaire1 :\n");
     printf("Jour :");
     scanf("%d",&S[i].date.jour);
     printf("Mois :");
     scanf("%d",&S[i].date.mois);
     printf("annee :");
     scanf("%d",&S[i].date.annee);
     printf("***************************\n");
    }


     system("CLS");

     for(i=0;i<n;i++){
        printf("les information de stagiaire%d est ;\n",i+1);
     printf("%s %s , %d / %d/ %d\n\n",S[i].nom,S[i].prenom,S[i].date.jour,S[i].date.mois,S[i].date.annee);

     }



    return 0;
}
