#include <stdio.h>
#include <stdbool.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
int main() {
    enum symboles {pierre=1,ciseaux=2,feuille=3};
    int choixj1,choixj2,cpt1=0,cpt2=0;
    int recommencer=1;
    while(recommencer==1) {
        /***********************choix symbole joueur1***********************/
        printf("Veuillez choisir un des symbole j1\n");
        printf("1-pierre\n");
        printf("2-ciseaux\n");
        printf("3-feuille\n");
        scanf("%d", &choixj1);
        /**********************choix symbole joueur2************************/
        printf("Veuillez choisir un symbole j2\n");
        printf("1-pierre\n");
        printf("2-ciseaux\n");
        printf("3-feuille\n");
        scanf("%d", &choixj2);
        /*********************détermination du gagnant du round*************/
        if (choixj1 == pierre) {
            if (choixj2 == ciseaux) {
                printf("La pierre casse le ciseaux\n");
                printf("j1 gagne\n");
                cpt1++;
            } else if (choixj2 == feuille) {
                printf("La feuille couvre la pierre\n");
                printf("j2 gagne\n");
                cpt2++;
            } else {
                printf("Egalité");
            }
        } else if (choixj1 == ciseaux) {
            if (choixj2 == pierre) {
                printf("La pierre casse le ciseaux\n");
                printf("j2 gagne\n");
                cpt2++;
            } else if (choixj2 == feuille) {
                printf("Le ciseaux coupe la feuille\n");
                printf("j1 gagne\n");
                cpt1++;
            } else {
                printf("Egalité");
            }
        } else if (choixj1 == feuille) {
            if (choixj2 == ciseaux) {
                printf("Le ciseaux coupe la feuille\n");
                printf("j2 gagne\n");
                cpt2++;
            } else if (choixj2 == pierre) {
                printf("La feuille couvre la pierre\n");
                printf("j1 gagne\n");
                cpt1++;
            } else {
                printf("Egalité");
            }
        }
    printf("J1 a gagné %d fois\n",cpt1);
    printf("J2 a gagné %d fois\n",cpt2);
    printf("1 pour recommencer 0 pour sortir");
    scanf("%d",&recommencer);
    }


    return 0;
}

#pragma clang diagnostic pop