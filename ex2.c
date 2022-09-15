#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nom[20];
  char prenom[20];
  float note[3];
  float M;
}Etudiant;


int main()
{

    int n;
    printf("entrer combient de etudiant que vous voulez entrer :");
    scanf("%d",&n);
    Etudiant e[n];
    system("CLS");
    for(int j=0;j<n;j++){
    printf("entrer les information de etudiant %d ;\n",j+1);
    printf("\t* Nom :");
    scanf("%s",&e[j].nom);
    printf("\t* Prenom :");
    scanf("%s",&e[j].prenom);
    for(int i=0;i<3;i++){
        printf("entrer la Note%d :",i+1);
        scanf("%f",&e[j].note[i]);
        e[j].M+=e[j].note[i];
    }
    e[j].M/=3;
    system("CLS");
    }

    system("CLS");
     for(int j=0;j<n;j++){
    printf("les information de etudiant %d est;\n",j+1);
    printf("\t* Nom : %s\n",e[j].nom);
    printf("\t* Prenom : %s\n",e[j].prenom);
    printf("La M de etudiant1 est :%.2f",e[j].M);
    printf("\n****************\n");
     }

    return 0;
}
