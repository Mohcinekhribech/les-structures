#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[20];
    char prenom[20];
    char num[20];
    char pref[20];
    char ville[20];
    char tel[10];
}Contact;

int main()
{
    int n;
    char villex[20];
    printf("entrer les nombre de contact :");
    scanf("%d",&n);
    Contact c[n];
    for(int i=0;i<n;i++){
        printf("entrer les informations de contact%d",i+1);
        printf("\n\t* Nom : ");
        scanf("%s",c[i].nom);
        printf("\t* Prenom : ");
        scanf("%s",c[i].prenom);
        printf("\t* Numero de la rue : ");
        scanf("%s",c[i].num);
        printf("\t* Prefecture : ");
        scanf("%s",c[i].pref);
        printf("\t* Ville : ");
        scanf("%s",c[i].ville);
        printf("\t* Tel : ");
        scanf("%s",c[i].tel);
        system("CLS");
    }
    printf("entrer la ville :");
    scanf("%s",&villex);
    for(int i=0;i<n;i++){
        if(strstr(c[i].ville,villex)){
        printf("\nles informations de contact%d",i+1);
        printf("\n\t* Nom : %s",c[i].nom);
        printf("\n\t* Prenom : %s",c[i].prenom);
        printf("\n\t* Numero de la rue : %s",c[i].num);
        printf("\n\t* Prefecture : %s",c[i].pref);
        printf("\n\t* Ville : %s",c[i].ville);
        printf("\n\t* Tel : %s",c[i].tel);
        }
    }

    return 0;
}
