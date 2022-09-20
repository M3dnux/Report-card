//@walha_med.ali 12.56
#include <stdio.h>

typedef struct{
    char NomM[51];
    char Type;
    int Coe;
} Matiere;

typedef struct{
    float Moy;
    int Coe;
} Moy;

Matiere S1[12][3] = {   {"Algorithmique et Structures des Donnees I",'M',3},
                            {"Systemes d'exploitation I",'M',1},
                            {"Systemes logiques et architectures des ordinateurs",'M',1},
                            {"Analyse",'M',1},
                            {"Statistiques et probabilite",'M',1},
                            {"Principes de gestion",'M',1},
                            {"Comptabilite generale",'M',1},
                            {"Culture et competences numeriques",'C',1},
                            {"Business communication I",'C',1},
                            {"Apprentissage et Raisonnement",'C',1},
                            {"Initiations aux Bases de Donnees",'C',2},
                            {"Technologies multimedias",'C',1}    };

Matiere S2[11][3] = {   {"Algorithmique et Structures des Donnees II",'M',3},
                            {"Fondement des reseaux",'M',1},
                            {"Introduction aux systemes d'information",'M',1},
                            {"Logique Mathematique",'M',1},
                            {"Algebre",'M',1},
                            {"Systeme d'information comptable",'M',1},
                            {"Gestion financiere",'M',1},
                            {"Business communication II",'C',2},
                            {"Techniques de veille",'C',1},
                            {"Theories des langages et des automates",'C',2},
                            {"Systemes d'exploitation II",'C',1}   };

float NCC1,NCC2,NEX,S = 0;
char Nom[25],Prenom[25];

void Calculer_moyenne_S1();
void Calculer_moyenne_S2();
void Calculer_moyenne_generale();

int main(){

    int Choix;

    do{
        printf("\n************************* Menu *************************\n Tapez 1 : pour calculer la moyenne du semestre 1\n Tapez 2 : pour calculer la moyenne du semestre 2\n Tapez 3 : pour calculer la moyenne generale de l'annee\n Tapez 4 : pour quitter\n********************************************************\nVotre choix ? : ");
        scanf("%d",&Choix);
    }while (Choix != 1 && Choix != 2 && Choix != 3 && Choix != 4);

    if(Choix == 1){
        Calculer_moyenne_S1();
    }
    else if(Choix == 2){
        Calculer_moyenne_S2();
    }
    else if(Choix == 3){
        Calculer_moyenne_generale();
    }
    else{
        printf("\nBonne journee :)\n\n");
    }

    return 0;
}

void Calculer_moyenne_S1(){

    Moy BS1[12];

    printf("\nS'il vous plait entrez vos notes de la semestre I !\n\n");
    for (int i = 0; i < 12; i++){
        if (S1[i]->Type == 'M'){

            do{
                printf("%s (NCC1) : ",S1[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S1[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S1[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS1[i].Moy = ((NCC1*0.1) + (NCC2*0.2) + (NEX*0.7));
            BS1[i].Coe = S1[i]->Coe;
        }
        else{

            do{
                printf("%s (NCC1) : ",S1[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S1[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S1[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS1[i].Moy = ((NCC1*0.2) + (NCC2*0.4) + (NEX*0.4));
            BS1[i].Coe = S1[i]->Coe;
        }
    }

    for (int i = 0; i < 12; i++){
        S = S + (BS1[i].Moy * BS1[i].Coe)/15;
    }

    do{
        printf("\nSaisir votre Nom : ");
        gets(Nom);
    }while (Nom[0] == '\0');
    do{
        printf("\nSaisir votre prenom : ");
        gets(Prenom);
    }while (Prenom[0] == '\0');

    printf("==========================================================================================================================================\n\n                                           Faculte des Sciences Economiques et de Gestion de Sfax\n\n                                                                                                        Annee universitaire : 2021 - 2022\n Nom et prenom : %s %s\n Auditoire : 1ere annee IG\n\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                       Matiere                        x  Moyenne   x Coef x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x  Semestre I :                                        x            x      x\n                                x                                                      x            x      x\n                                x Algorithmique et Structures des Donnees I            x   %5.2f    x  %2.d  x\n                                x Systemes d'exploitation I                            x   %5.2f    x  %2.d  x\n                                x Systemes logiques et architectures des ordinateurs   x   %5.2f    x  %2.d  x\n                                x Analyse                                              x   %5.2f    x  %2.d  x\n                                x Statistiques et probabilite                          x   %5.2f    x  %2.d  x\n                                x Principes de gestion                                 x   %5.2f    x  %2.d  x\n                                x Comptabilite generale                                x   %5.2f    x  %2.d  x\n                                x Culture et competences numeriques                    x   %5.2f    x  %2.d  x\n                                x Business communication I                             x   %5.2f    x  %2.d  x\n                                x Apprentissage et Raisonnement                        x   %5.2f    x  %2.d  x\n                                x Initiations aux Bases de Donnees                     x   %5.2f    x  %2.d  x\n                                x Technologies multimedias                             x   %5.2f    x  %2.d  x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                   Moyenne Semestre I                 x   %5.2f    x  15  x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",Nom,Prenom,BS1[0].Moy,BS1[0].Coe,BS1[1].Moy,BS1[1].Coe,BS1[2].Moy,BS1[2].Coe,BS1[3].Moy,BS1[3].Coe,BS1[4].Moy,BS1[4].Coe,BS1[5].Moy,BS1[5].Coe,BS1[6].Moy,BS1[6].Coe,BS1[7].Moy,BS1[7].Coe,BS1[8].Moy,BS1[8].Coe,BS1[9].Moy,BS1[9].Coe,BS1[10].Moy,BS1[10].Coe,BS1[11].Moy,BS1[11].Coe,S);
    printf("\n\nMerci pour votre attention utilisation 😃 !\n\nDeveloppeur : @walha_med.ali\n\n");
}

void Calculer_moyenne_S2(){

    Moy BS2[11];

    printf("\nS'il vous plait entrez vos notes de la semestre II !\n\n");
    for (int i = 0; i < 11; i++){
        if (S2[i]->Type == 'M'){

            do{
                printf("%s (NCC1) : ",S2[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S2[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S2[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS2[i].Moy = ((NCC1*0.1) + (NCC2*0.2) + (NEX*0.7));
            BS2[i].Coe = S2[i]->Coe;
        }
        else{

            do{
                printf("%s (NCC1) : ",S2[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S2[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S2[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS2[i].Moy = ((NCC1*0.2) + (NCC2*0.4) + (NEX*0.4));
            BS2[i].Coe = S2[i]->Coe;
        }
    }

    for (int i = 0; i < 11; i++){
        S = S + (BS2[i].Moy * BS2[i].Coe)/15;
    }

    do{
        printf("\nSaisir votre Nom : ");
        gets(Nom);
    }while (Nom[0] == '\0');
    do{
        printf("\nSaisir votre prenom : ");
        gets(Prenom);
    }while (Prenom[0] == '\0');

    printf("==========================================================================================================================================\n\n                                           Faculte des Sciences Economiques et de Gestion de Sfax\n\n                                                                                                        Annee universitaire : 2021 - 2022\n Nom et prenom : %s %s\n Auditoire : 1ere annee IG\n\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                       Matiere                        x  Moyenne   x Coef x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x  Semestre II :                                       x            x      x\n                                x                                                      x            x      x\n                                x Algorithmique et Structures des Donnees II           x   %5.2f    x  %2.d  x\n                                x Fondement des reseaux                                x   %5.2f    x  %2.d  x\n                                x Introduction aux systemes d'information              x   %5.2f    x  %2.d  x\n                                x Logique Mathematique                                 x   %5.2f    x  %2.d  x\n                                x Algebre                                              x   %5.2f    x  %2.d  x\n                                x Systeme d'information comptable                      x   %5.2f    x  %2.d  x\n                                x Gestion financiere                                   x   %5.2f    x  %2.d  x\n                                x Business communication II                            x   %5.2f    x  %2.d  x\n                                x Techniques de veille                                 x   %5.2f    x  %2.d  x\n                                x Theories des langages et des automates               x   %5.2f    x  %2.d  x\n                                x Systemes d'exploitation II                           x   %5.2f    x  %2.d  x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                 Moyenne Semestre II                  x   %5.2f    x  15  x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",Nom,Prenom,BS2[0].Moy,BS2[0].Coe,BS2[1].Moy,BS2[1].Coe,BS2[2].Moy,BS2[2].Coe,BS2[3].Moy,BS2[3].Coe,BS2[4].Moy,BS2[4].Coe,BS2[5].Moy,BS2[5].Coe,BS2[6].Moy,BS2[6].Coe,BS2[7].Moy,BS2[7].Coe,BS2[8].Moy,BS2[8].Coe,BS2[9].Moy,BS2[9].Coe,BS2[10].Moy,BS2[10].Coe,S);
    printf("\n\nMerci pour votre attention utilisation 😃 !\n\nDeveloppeur : @walha_med.ali\n\n");
}

void Calculer_moyenne_generale(){

    Moy BS1[12];
    Moy BS2[11];

    printf("\nS'il vous plait entrez vos notes de la semestre I !\n\n");
    for (int i = 0; i < 12; i++){
        if (S1[i]->Type == 'M'){

            do{
                printf("%s (NCC1) : ",S1[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S1[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S1[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS1[i].Moy = ((NCC1*0.1) + (NCC2*0.2) + (NEX*0.7));
            BS1[i].Coe = S1[i]->Coe;
        }
        else{

            do{
                printf("%s (NCC1) : ",S1[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S1[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S1[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS1[i].Moy = ((NCC1*0.2) + (NCC2*0.4) + (NEX*0.4));
            BS1[i].Coe = S1[i]->Coe;
        }
    }

    for (int i = 0; i < 12; i++){
        S = S + (BS1[i].Moy * BS1[i].Coe)/15;
    }

    printf("\nS'il vous plait entrez vos notes de la semestre II !\n\n");
    for (int i = 0; i < 11; i++){
        if (S2[i]->Type == 'M'){

            do{
                printf("%s (NCC1) : ",S2[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S2[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S2[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS2[i].Moy = ((NCC1*0.1) + (NCC2*0.2) + (NEX*0.7));
            BS2[i].Coe = S2[i]->Coe;
        }
        else{

            do{
                printf("%s (NCC1) : ",S2[i]->NomM);
                scanf("%f",&NCC1);
            }while (NCC1 < 0 || NCC1 > 20);

            do{
                printf("%s (NCC2) : ",S2[i]->NomM);
                scanf("%f",&NCC2);
            }while (NCC2 < 0 || NCC2 > 20);

            do{
                printf("%s (N.EX) : ",S2[i]->NomM);
                scanf("%f",&NEX);
            }while (NEX < 0 || NEX > 20);

            BS2[i].Moy = ((NCC1*0.2) + (NCC2*0.4) + (NEX*0.4));
            BS2[i].Coe = S2[i]->Coe;
        }
    }

    for (int i = 0; i < 11; i++){
        S = S + (BS2[i].Moy * BS2[i].Coe)/15;
    }

    S = S/2;
    
    do{
        printf("\nSaisir votre Nom : ");
        gets(Nom);
    }while (Nom[0] == '\0');
    do{
        printf("\nSaisir votre prenom : ");
        gets(Prenom);
    }while (Prenom[0] == '\0');

    printf("==========================================================================================================================================\n\n                                           Faculte des Sciences Economiques et de Gestion de Sfax\n\n                                                                                                        Annee universitaire : 2021 - 2022\n Nom et prenom : %s %s\n Auditoire : 1ere annee IG\n\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                       Matiere                        x  Moyenne   x Coef x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x  Semestre I :                                        x            x      x\n                                x                                                      x            x      x\n                                x Algorithmique et Structures des Donnees I            x   %5.2f    x  %2.d  x\n                                x Systemes d'exploitation I                            x   %5.2f    x  %2.d  x\n                                x Systemes logiques et architectures des ordinateurs   x   %5.2f    x  %2.d  x\n                                x Analyse                                              x   %5.2f    x  %2.d  x\n                                x Statistiques et probabilite                          x   %5.2f    x  %2.d  x\n                                x Principes de gestion                                 x   %5.2f    x  %2.d  x\n                                x Comptabilite generale                                x   %5.2f    x  %2.d  x\n                                x Culture et competences numeriques                    x   %5.2f    x  %2.d  x\n                                x Business communication I                             x   %5.2f    x  %2.d  x\n                                x Apprentissage et Raisonnement                        x   %5.2f    x  %2.d  x\n                                x Initiations aux Bases de Donnees                     x   %5.2f    x  %2.d  x\n                                x Technologies multimedias                             x   %5.2f    x  %2.d  x\n                                x                                                      x            x      x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x  Semestre II :                                       x            x      x\n                                x                                                      x            x      x\n                                x Algorithmique et Structures des Donnees II           x   %5.2f    x  %2.d  x\n                                x Fondement des reseaux                                x   %5.2f    x  %2.d  x\n                                x Introduction aux systemes d'information              x   %5.2f    x  %2.d  x\n                                x Logique Mathematique                                 x   %5.2f    x  %2.d  x\n                                x Algebre                                              x   %5.2f    x  %2.d  x\n                                x Systeme d'information comptable                      x   %5.2f    x  %2.d  x\n                                x Gestion financiere                                   x   %5.2f    x  %2.d  x\n                                x Business communication II                            x   %5.2f    x  %2.d  x\n                                x Techniques de veille                                 x   %5.2f    x  %2.d  x\n                                x Theories des langages et des automates               x   %5.2f    x  %2.d  x\n                                x Systemes d'exploitation II                           x   %5.2f    x  %2.d  x\n                                x                                                      x            x      x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n                                x                   Moyenne Generale                   x   %5.2f    x  30  x\n                                xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",Nom,Prenom,BS1[0].Moy,BS1[0].Coe,BS1[1].Moy,BS1[1].Coe,BS1[2].Moy,BS1[2].Coe,BS1[3].Moy,BS1[3].Coe,BS1[4].Moy,BS1[4].Coe,BS1[5].Moy,BS1[5].Coe,BS1[6].Moy,BS1[6].Coe,BS1[7].Moy,BS1[7].Coe,BS1[8].Moy,BS1[8].Coe,BS1[9].Moy,BS1[9].Coe,BS1[10].Moy,BS1[10].Coe,BS1[11].Moy,BS1[11].Coe,BS2[0].Moy,BS2[0].Coe,BS2[1].Moy,BS2[1].Coe,BS2[2].Moy,BS2[2].Coe,BS2[3].Moy,BS2[3].Coe,BS2[4].Moy,BS2[4].Coe,BS2[5].Moy,BS2[5].Coe,BS2[6].Moy,BS2[6].Coe,BS2[7].Moy,BS2[7].Coe,BS2[8].Moy,BS2[8].Coe,BS2[9].Moy,BS2[9].Coe,BS2[10].Moy,BS2[10].Coe,S);
    printf("\n\nMerci pour votre attention utilisation 😃 !\n\nDeveloppeur : @walha_med.ali\n\n");
}