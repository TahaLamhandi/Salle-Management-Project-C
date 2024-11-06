#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>


 char email[50],e[50];
 char nom[15];
 char prenom[15];
 char massar[15];
 char numtele[20];
 char password[20],p[20];
 char numid[20];

 void initializeFile() {
   FILE *F = fopen("emailsandpassE.txt", "a");
    if (F == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(F);
    FILE *S = fopen("infos.txt", "a");
    if (S == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(S);
    FILE *A = fopen("emailsandpassA.txt", "a");
    if (A == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(A);
}

 void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setColor(int color);
void login(){
    int choice;
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(45,8);
     printf(" ========================================");
     gotoxy(45,10);
     setColor(7);
     printf("           Choix de profile :            ");
     gotoxy(45,12);
     setColor(9);
     printf(" ========================================");
     setColor(7);
     gotoxy(45,14);
     printf("||      1. Administration :           ||");
    gotoxy(45,16);
    printf("||       2. Etudiant :                 ||");
    gotoxy(45,18);
    printf("||       3. Retour Menu Principale :   ||");
    gotoxy(45,20);
    printf("||       4. Quitter :                  ||");
    gotoxy(45,22);
    setColor(9);
    printf(" ========================================");
    gotoxy(45,24);
    printf(" ========================================");
    setColor(7);
    gotoxy(45,26);
    printf("||   Veuillez entrer votre choix :     ||");
    setColor(9);
    gotoxy(45,28);
    printf(" ========================================");
    setColor(7);
    gotoxy(80,26);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                loginad();
                   break;

              case 2:
                 loginetud();
                   break;

              case 3:
                signorlogin();
              break;

              case 4:
                 printf("\n\n\n");
                 exit(0);

        default:
        signorlogin();
    }
}
void loginad(){
    int choice;
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(38,8);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(65,10);
    printf("LOGIN\n");
    setColor(9);
    gotoxy(38,12);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(42,14);
    printf("    Email Academique :                                \n");
    gotoxy(42,17);
    printf("    Mot de passe :                         \n");
    gotoxy(38,24);
    setColor(9);
    printf("+------------------------------------------------------+\n");
    setColor(7);
    gotoxy(60,26);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(38,28);
    printf("+------------------------------------------------------+\n");
    gotoxy(65,14);
    setColor(7);
    scanf("%s",email);
    gotoxy(62,17);
    scanf("%s",password);
    verifyemailA(email,password);

}
void loginetud(){
    int choice;
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(38,8);
    printf("+--------------------------------------------------------+\n");
    setColor(7);
    gotoxy(65,10);
    printf("LOGIN\n");
    setColor(9);
    gotoxy(38,12);
    printf("+--------------------------------------------------------+\n");
    setColor(7);
    gotoxy(42,14);
    printf("    Email Academique :                                \n");
    gotoxy(42,17);
    printf("    Mot de passe :                         \n");
    gotoxy(38,24);
    setColor(9);
    printf("+--------------------------------------------------------+\n");
    setColor(7);
    gotoxy(60,26);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(38,28);
    printf("+--------------------------------------------------------+\n");
    gotoxy(65,14);
    setColor(7);
    scanf("%s",email);
    gotoxy(60,17);
    scanf("%s",password);
    verifyemailE(email,password);

}
void verifyemailE(char *email,char *password){
     int choice,i=0,j=0;
     FILE *F=fopen("emailsandpassE.txt","r");
     while(!feof(F)){
        fscanf(F,"%s\n%s\n",e,p);

        if((strcmp(e,email)==0) && (strcmp(p,password)==0)){
            setColor(7);
            gotoxy(42,20);
            printf(" Bienvenue Dans Votre Compte !!");
            gotoxy(42,22);
            setColor(9);
            printf(" Appuyez sur une touche pour continuer : ");
            setColor(7);
            getch();
            j++;
            break;
      }
      i++;
      }
        if((i!=0) && (j==0)){
         gotoxy(42,20);
         setColor(7);
         printf("  Veuillez verifier votre email ou mot de passe!!");
         gotoxy(42,22);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         setColor(7);
         getch();
         system("cls");
        setColor(9);
        printf("=====================================================================================================================================");
        setColor(7);
        gotoxy(56,1);
         printf("GESTION DES SALLES");
         gotoxy(56,4);
         printf("ENSAH - Universite\n");
         setColor(9);
         printf("=====================================================================================================================================");
         gotoxy(45,8);
         printf(" ========================================");
         setColor(7);
         gotoxy(45,10);
         printf("||      1. Reessayer de se connecter : ||");
         gotoxy(45,12);
         printf("||      2. S\'inscrire  :              ||");
         gotoxy(45,14);
         printf("||      3. Quitter :                   ||");
         gotoxy(45,16);
         setColor(9);
         printf(" ========================================");
         gotoxy(45,18);
         printf(" ========================================");
         setColor(7);
         gotoxy(45,20);
         printf("||   Veuillez entrer votre choix :     ||");
         setColor(9);
         gotoxy(45,22);
         printf(" ========================================");
        setColor(7);
        gotoxy(80,20);
        scanf("%d/n", &choice);
        switch (choice) {
              case 1:
                login();
                   break;

              case 2:
                 signup();
                   break;

              case 3:
                 printf("\n\n\n");
                 exit(0);
              break;

        default:
        login();
       }
      }

}
void verifyemailA(char *email,char *password){
     int choice,i=0,j=0;
     FILE *A=fopen("emailsandpassA.txt","r");
     while(!feof(A)){
        fscanf(A,"%s\n%s\n",e,p);

        if((strcmp(e,email)==0) && (strcmp(p,password)==0)){
            setColor(7);
            gotoxy(45,20);
            printf(" Bienvenue Dans Votre Compte !!");
            gotoxy(45,22);
            setColor(9);
            printf(" Appuyez sur une touche pour continuer : ");
            setColor(7);
            getch();
            j++;
            break;
      }
      i++;
      }
        if((i!=0) && (j==0)){
         gotoxy(45,20);
         setColor(7);
         printf("  Veuillez verifier votre email !!");
         gotoxy(45,22);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         setColor(7);
         getch();
         system("cls");
        setColor(9);
        printf("=====================================================================================================================================");
        setColor(7);
        gotoxy(56,1);
         printf("GESTION DES SALLES");
         gotoxy(56,4);
         printf("ENSAH - Universite\n");
         setColor(9);
         printf("=====================================================================================================================================");
         gotoxy(45,8);
         printf(" ========================================");
         setColor(7);
         gotoxy(45,10);
         printf("||      1. Reessayer de se connecter : ||");
         gotoxy(45,12);
         printf("||      2. S\'inscrire  :              ||");
         gotoxy(45,14);
         printf("||      3. Quitter :                   ||");
         gotoxy(45,16);
         setColor(9);
         printf(" ========================================");
         gotoxy(45,18);
         printf(" ========================================");
         setColor(7);
         gotoxy(45,20);
         printf("||   Veuillez entrer votre choix :     ||");
         setColor(9);
         gotoxy(45,22);
         printf(" ========================================");
        setColor(7);
        gotoxy(80,20);
        scanf("%d/n", &choice);
        switch (choice) {
              case 1:
                login();
                   break;

              case 2:
                 signup();
                   break;

              case 3:
                 printf("\n\n\n");
                 exit(0);
              break;

        default:
        login();
       }
      }

}
void signorlogin() {
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(69,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    int choice,j=18,k=0;
    gotoxy(45,8);
    setColor(9);
    printf(" ========================================");
    setColor(7);
    gotoxy(45,10);
    printf("||             MENU OPTIONS            ||");
    setColor(9);
    gotoxy(45,12);
    printf(" ========================================");
    setColor(7);
    gotoxy(45,14);
    printf("||          1. LOGIN :                 ||");
    gotoxy(45,15);
    printf("||          2. SIGN UP :               ||");
    gotoxy(45,16);
    printf("||          3. EXIT :                  ||");
    gotoxy(45,18);
    Again:
        setColor(9);
        gotoxy(45,j);
        printf(" ========================================");
        setColor(7);
        j+=2;
        gotoxy(45,j);
        printf("||   Veuillez entrer votre choix :     ||");
        setColor(9);
        j+=2;
        gotoxy(45,j);
        k=j;
        printf(" ========================================");
        setColor(7);
        gotoxy(80,k-2);
        scanf("%d/n", &choice);

    switch (choice) {
    case 1:
        login();
        break;

    case 2:
        signup();
        break;

    case 3:
        printf("\n\n\n");
        exit(0);
        break;

    default:
        j=j++;
        goto Again;
}


}
void signup(){
    int choice;
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(45,8);
     printf(" ========================================");
     gotoxy(45,10);
     setColor(7);
     printf("           Choix de profile :            ");
     gotoxy(45,12);
     setColor(9);
     printf(" ========================================");
     setColor(7);
     gotoxy(45,14);
     printf("||      1. Administration :           ||");
    gotoxy(45,16);
    printf("||       2. Etudiant :                 ||");
    gotoxy(45,18);
    printf("||       3. Retour Menu Principale :   ||");
    gotoxy(45,20);
    printf("||       4. Quitter :                  ||");
    gotoxy(45,22);
    setColor(9);
    printf(" ========================================");
    gotoxy(45,24);
    printf(" ========================================");
    setColor(7);
    gotoxy(45,26);
    printf("||   Veuillez entrer votre choix :     ||");
    setColor(9);
    gotoxy(45,28);
    printf(" ========================================");
    setColor(7);
    gotoxy(80,26);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                signad();
                   break;

              case 2:
                 signetud();
                   break;

              case 3:
                signorlogin();
              break;

              case 4:
                 printf("\n\n\n");
                 exit(0);

        default:
        login();
    }

}

void signetud(){
    Again1:
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(38,8);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(65,10);
    printf("SIGN UP\n");
    setColor(9);
    gotoxy(38,12);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(42,14);
    printf("    Nom:                                \n");
    gotoxy(42,16);
    printf("    Prenom:                         \n");
    gotoxy(42,18);
    printf("    Massar:                         \n");
    gotoxy(42,20);
    printf("    Numero Telephone:                         \n");
    gotoxy(42,22);
    printf("    Email Academique:                         \n");
    gotoxy(42,24);
    printf("    Mot de passe:                         \n");
    gotoxy(38,28);
    setColor(9);
    printf("+------------------------------------------------------+\n");
    setColor(7);
    gotoxy(60,30);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(38,32);
    printf("+------------------------------------------------------+\n");
    gotoxy(52,14);
    setColor(7);
    scanf("%s",nom);
    gotoxy(54,16);
    scanf("%s",prenom);
    gotoxy(54,18);
    scanf("%s",massar);
    gotoxy(64,20);
    scanf("%s",numtele);
    gotoxy(64,22);
    scanf("%s",email);
    gotoxy(59,24);
    scanf("%s",password);
    gotoxy(42,26);
    if (strstr(email,"@etu.uae.ac.ma") != NULL) {
        printf("Vos Donnees sont bien enregistres !!");
        gotoxy(42,27);
        setColor(9);
        printf("Appuyez sur une touche pour continuer :");
        getch();
        setColor(7);
        remplirficherAD(nom,prenom,numid,numtele,email,password);
    } else {
        printf("  Veuillez verifier votre email !!");
         gotoxy(42,27);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         getch();
         setColor(7);
         goto Again1;
    }

}
void signad(){
    Again :
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(38,8);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(65,10);
    printf("SIGN UP\n");
    setColor(9);
    gotoxy(38,12);
    printf("+-------------------------------------------------------+\n");
    setColor(7);
    gotoxy(42,14);
    printf("    Nom:                                \n");
    gotoxy(42,16);
    printf("    Prenom:                         \n");
    gotoxy(42,18);
    printf("    Numero d\'identification:        \n");
    gotoxy(42,20);
    printf("    Numero Telephone:                         \n");
    gotoxy(42,22);
    printf("    Email Academique:                         \n");
    gotoxy(42,24);
    printf("    Mot de passe:                         \n");
    gotoxy(42,28);
    setColor(9);
    printf("+------------------------------------------------------+\n");
    setColor(7);
    gotoxy(60,30);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(42,32);
    printf("+------------------------------------------------------+\n");
    gotoxy(52,14);
    setColor(7);
    scanf("%s",nom);
    gotoxy(54,16);
    scanf("%s",prenom);
    gotoxy(71,18);
    scanf("%s",numid);
    gotoxy(64,20);
    scanf("%s",numtele);
    gotoxy(64,22);
    scanf("%s",email);
    gotoxy(60,24);
    scanf("%s",password);
    gotoxy(42,26);
    if (strstr(email,"@etu.uae.ac.ma") != NULL) {
        printf("Vos Donnees sont bien enregistres !!");
        gotoxy(42,27);
        setColor(9);
        printf("Appuyez sur une touche pour continuer :");
        getch();
        setColor(7);
        remplirficherAD(nom,prenom,numid,numtele,email,password);
    } else {
        printf("  Veuillez verifier votre email !!");
         gotoxy(42,27);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         getch();
         setColor(7);
         goto Again;
    }



}
void remplirficherETUD(char *nom,char *prenom,char *massar,char *numtele,char *email,char *password){
     FILE *F=fopen("emailsandpassE.txt","a");
     FILE *S= fopen("infos.txt", "a");
     fprintf(F,"%s\n%s\n",email,password);
     fprintf(S,"%s\n%s\n%s\n%s\n",nom,prenom,massar,numtele);
     fclose(F);
     fclose(S);

}
void remplirficherAD(char *nom,char *prenom,char *numid,char *numtele,char *email,char *password){
     FILE *A=fopen("emailsandpassA.txt","a");
     FILE *S= fopen("infos.txt", "a");
     fprintf(A,"%s\n%s\n",email,password);
     fprintf(S,"%s\n%s\n%s\n%s\n",nom,prenom,numid,numtele);
     fclose(A);
     fclose(S);

}
void menusalles(){
    system("cls");
    int choice,j=18,k=0;
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(69,1);
    printf("GESTION DES SALLES");
    gotoxy(56,4);
    printf("ENSAH - Universite\n");
    setColor(9);
    printf("=====================================================================================================================================");
    gotoxy(2,8);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(2,10);
    printf("           1. Les Salles de TD              \n");
    setColor(9);
    gotoxy(2,12);
    printf("+----------------------------------------+\n");
    gotoxy(46,8);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(46,10);
    printf("           2. Les Salles de TP               \n");
    setColor(9);
    gotoxy(46,12);
    printf("+----------------------------------------+\n");
    gotoxy(90,8);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(90,10);
    printf("                3. Les Amphis               \n");
    setColor(9);
    gotoxy(90,12);
    printf("+----------------------------------------+\n");
     Again:
        setColor(9);
        gotoxy(46,j);
        printf(" ========================================");
        setColor(7);
        j+=2;
        gotoxy(46,j);
        printf("||   Veuillez entrer votre choix :     ||");
        setColor(9);
        j+=2;
        gotoxy(46,j);
        k=j;
        if(j==22)k++;
        printf(" ========================================");
        setColor(7);
        gotoxy(81,k-2);
        scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                //sallesTD();
                   break;

              case 2:
                 //sallesTP();
                   break;

              case 3:
                //amphis();
              break;

        default:
        j=j++;
        goto Again;
    }
}


#endif
