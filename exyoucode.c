#include <stdio.h>
#include <stdlib.h>

typedef struct{
   int j;
   int m;
   int annee;
}Date;
typedef struct{
   char Nom[20];
   char Prenom[20];
   Date d;
}Apprenant;


int main()
{
    int n;
    printf("entrer le nombre des apprenants :");
    scanf("%d",&n);
    Apprenant ap[n],ab;
    int a;
    int j;
    float m=0;
    for(int i = 0; i<n ; i++){
        printf("entrer les information de l'apprenant%d :\n",i+1);
        printf("\t*Nom : ");
        scanf("%s",&ap[i].Nom);
        printf("\t*Prenom : ");
        scanf("%s",&ap[i].Prenom);
        printf("entrer la date de naissance de l'apprenant%d :\n",i+1);
        printf("\t*Jour :");
        scanf("%d",&ap[i].d.j);
        printf("\t*Mois :");
        scanf("%d",&ap[i].d.m);
        printf("\t*Annee :");
        scanf("%d",&ap[i].d.annee);
        system("CLS");
        m+=ap[i].d.annee;
    }
    m/=n;
     for(int i=0;i<n;i++){
        j=i;
        while(ap[j].d.annee<ap[j-1].d.annee&&j>=0){
            ab=ap[j];
            ap[j]=ap[j-1];
            ap[j-1]=ab;
            j--;
        }

     }
      for(int i=0;i<n;i++){
        j=i;
        while(ap[j].d.annee==ap[j-1].d.annee&&ap[j].d.m<ap[j-1].d.m&&j>=0){
            ab=ap[j];
            ap[j]=ap[j-1];
            ap[j-1]=ab;
            j--;
        }
      }
     for(int i=0;i<n;i++){
        j=i;
        while(ap[j].d.m==ap[j-1].d.m&&ap[j].d.j<ap[j-1].d.j&&j>=0){
            ab=ap[j];
            ap[j]=ap[j-1];
            ap[j-1]=ab;
            j--;
        }
     }
    printf("le plus grand est %s %s\n",ap[0].Nom,ap[0].Prenom);
    printf("le plus petit est %s %s\n",ap[n-1].Nom,ap[n-1].Prenom);
    printf("le moyenne d'age est %.2f",2022-m);

    return 0;
}

