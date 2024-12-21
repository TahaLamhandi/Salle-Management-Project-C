#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

 char email[50],e[50];
 char nom[15];
 char prenom[15];
 char massar[15];
 char numtele[20];
 char password[20],p[20];
 char numid[20];
 char nomreservation[30];
 char heure[30];
 int pp=0;
 char pass[50];
 int ll=0;
 char formatted_text[150];
typedef struct{
   char emailll[50];
   char motdepasse[50];
   char nomm[50];
   char prenomm[50];
   char massouid[50];
   char numtelee[50];
}Donnee;
typedef struct{
   char emaill[50];
   char codead[50];
}CodeAdmin;
 typedef struct {
       char premier[30];
       char deuxieme[30];
       char troixieme[30];
       char quatrieme[30];
       char cinqueme[30];
       char sixeme[30];
 }sceance;
 typedef struct{
     int num;
     char bloc;
     sceance jour[7];
 }SalleinfosTD;
  typedef struct{
     int num;
     sceance jour[7];
 }SalleinfosTP;
  typedef struct{
     char nom;
     sceance jour[7];
 }SalleinfosAM;
 void print_slowly(const char *text, int delay_ms) {
    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);  // Ensure the character is printed immediately
        usleep(delay_ms * 1000);  // Convert milliseconds to microseconds
    }
    printf("\n");
}
 void initializeFile() {
   FILE *I = fopen("Infos.DAT", "a");
    if (I == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(I);
    FILE *STD = fopen("salleTDinfos.DAT", "ab");
    if (STD == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(STD);
        FILE *STP = fopen("salleTPinfos.DAT", "ab");
    if (STP == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(STP);
        FILE *SAM = fopen("salleAMinfos.DAT", "ab");
    if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(SAM);
    FILE *CA = fopen("CodesAdmin.DAT", "ab");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fclose(CA);
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
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    setColor(9);
    gotoxy(48,10);
     printf(" =========================================================");
     gotoxy(48,12);
     setColor(7);
     printf("                    Choix de profile :            ");
     gotoxy(48,14);
     setColor(9);
     printf(" =========================================================");
     setColor(7);
     gotoxy(48,16);
    printf("||       1. Administration :                              ||");
    gotoxy(48,18);
    printf("||       2. Etudiant :                                    ||");
    gotoxy(48,20);
    printf("||       3. Retour Menu Principale :                      ||");
    gotoxy(48,22);
    printf("||       4. Quitter :                                     ||");
    gotoxy(48,24);
    setColor(9);
    printf(" ==========================================================");
    Agaiin:
    gotoxy(48,27);
    printf("                                                              ");
    gotoxy(48,29);
    printf("                                                             ");
    setColor(9);
    gotoxy(48,26);
    printf(" ==========================================================");
    setColor(7);
    gotoxy(48,28);
    printf("||             Veuillez entrer votre choix :              ||");
    setColor(9);
    gotoxy(48,30);
    printf(" ==========================================================");
    setColor(7);
    gotoxy(94,28);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                loginad();
                   break;

              case 2:
                     sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 loginetud();
                   break;

              case 3:
                     sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                signorlogin();
              break;

              case 4:
                 printf("\n\n\n");
                 setColor(9);
                 exit(0);

        default:
        gotoxy(48,26);
        printf("                                                                   ");
        gotoxy(48,27);
        setColor(9);
        printf(" ==========================================================");        gotoxy(45,32);
        setColor(7);
        gotoxy(48,28);
        printf("   CHOIX INCORRECTE !!                                              ");
        setColor(9);
        gotoxy(48,29);
        printf("   Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        goto Agaiin;
    }
}
void loginad(){
    int choice;
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    gotoxy(46,10);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(78,12);
    printf("LOGIN\n");
    setColor(9);
    gotoxy(46,14);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(48,16);
    printf("    Email Academique :                                \n");
    gotoxy(48,20);
    printf("    Mot de passe :                         \n");
    gotoxy(46,28);
    setColor(9);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(74,30);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(46,32);
    printf("+-------------------------------------------------------------------+\n");
    gotoxy(73,16);
    setColor(7);
    scanf("%s",email);
    gotoxy(68,20);
    int k=0;
    char ch;
    while (1) {
        ch = getch(); // Get a character without echoing it

        if (ch == 13) { // Check if the character is the Enter key (ASCII 13)
            password[k] = '\0'; // Null-terminate the string
            break;
        } else if (ch == 8) { // Check if the character is the Backspace key (ASCII 8)
            if (k > 0) {
                k--;
                printf("\b \b"); // Erase the last character from the screen
            }
        } else {
            password[k] = ch;
            k++;
            printf("*"); // Print a '*' for each character entered
        }
    }
      if (strstr(email,"@uae.ac.ma") != NULL) {
         verifyemail(email,password);
    } else {
       gotoxy(54,24);
         setColor(7);
         printf("  Veuillez verifier votre email ou mot de passe!!");
         gotoxy(54,26);
         setColor(9);
         printf(" Appuyez sur une touche pour ressayer : ");
         setColor(9);
         getch();
          more:
         system("cls");
         setColor(9);
         gotoxy(16,1);
         printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
         gotoxy(16,2);
         printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
         gotoxy(16,3);
         printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
         gotoxy(16,4);
         printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
         gotoxy(16,5);
         printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
         gotoxy(16,6);
         printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
         gotoxy(0,3);
         printf("---------------");
         gotoxy(0,4);
         printf("---------------");
         gotoxy(140,3);
         printf("---------------");
         gotoxy(140,4);
          printf("---------------");
         gotoxy(50,12);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,14);
         printf("||      1. Reessayer de se connecter :                 ||");
         gotoxy(50,16);
         printf("||      2. S\'inscrire  :                              ||");
         gotoxy(50,18);
         printf("||      3. Quitter :                                   ||");
         gotoxy(50,20);
         setColor(9);
         printf(" =======================================================");
         gotoxy(50,22);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,24);
         printf("||           Veuillez entrer votre choix :             ||");
         setColor(9);
         gotoxy(50,26);
         printf(" =======================================================");
        setColor(7);
        gotoxy(94,24);
        scanf("%d/n", &choice);
        switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                login();
                   break;

              case 2:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 signup();
                   break;

              case 3:
                 printf("\n\n\n");
                 setColor(9);
                 exit(0);
              break;

        default:
         setColor(9);
         gotoxy(50,24);
         printf("           CHOIX INCORRECTE !!                          ||");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                             ");
        goto more;
       }
    }
       sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
       espaceadmin();

}
void loginetud(){
     int choice;
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    gotoxy(46,10);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(78,12);
    printf("LOGIN\n");
    setColor(9);
    gotoxy(46,14);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(48,16);
    printf("    Email Academique :                                \n");
    gotoxy(48,20);
    printf("    Mot de passe :                         \n");
    gotoxy(46,28);
    setColor(9);
    printf("+-------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(74,30);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(46,32);
    printf("+-------------------------------------------------------------------+\n");
    gotoxy(73,16);
    setColor(7);
    scanf("%s",email);
    gotoxy(68,20);
    int k=0;
    char ch;
    while (1) {
        ch = getch(); // Get a character without echoing it

        if (ch == 13) { // Check if the character is the Enter key (ASCII 13)
            password[k] = '\0'; // Null-terminate the string
            break;
        } else if (ch == 8) { // Check if the character is the Backspace key (ASCII 8)
            if (k > 0) {
                k--;
                printf("\b \b"); // Erase the last character from the screen
            }
        } else {
            password[k] = ch;
            k++;
            printf("*"); // Print a '*' for each character entered
        }
    }

    if (strstr(email,"@etu.uae.ac.ma") != NULL) {
         verifyemail(email,password);
    } else {
       gotoxy(54,24);
         setColor(7);
         printf("  Veuillez verifier votre email ou mot de passe!!");
         gotoxy(54,26);
         setColor(9);
         printf(" Appuyez sur une touche pour ressayer : ");
         setColor(9);
         getch();
          more:
         system("cls");
         setColor(9);
         gotoxy(16,1);
         printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
         gotoxy(16,2);
         printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
         gotoxy(16,3);
         printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
         gotoxy(16,4);
         printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
         gotoxy(16,5);
         printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
         gotoxy(16,6);
         printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
         gotoxy(0,3);
         printf("---------------");
         gotoxy(0,4);
         printf("---------------");
         gotoxy(140,3);
         printf("---------------");
         gotoxy(140,4);
          printf("---------------");
         gotoxy(50,12);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,14);
         printf("||      1. Reessayer de se connecter :                 ||");
         gotoxy(50,16);
         printf("||      2. S\'inscrire  :                              ||");
         gotoxy(50,18);
         printf("||      3. Quitter :                                   ||");
         gotoxy(50,20);
         setColor(9);
         printf(" =======================================================");
         gotoxy(50,22);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,24);
         printf("||           Veuillez entrer votre choix :             ||");
         setColor(9);
         gotoxy(50,26);
         printf(" =======================================================");
        setColor(7);
        gotoxy(94,24);
        scanf("%d/n", &choice);
        switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                login();
                   break;

              case 2:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 signup();
                   break;

              case 3:
                 printf("\n\n\n");
                 setColor(9);
                 exit(0);
              break;

        default:
         setColor(9);
         gotoxy(50,24);
         printf("           CHOIX INCORRECTE !!                          ||");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                             ");
        goto more;
       }
    }


       sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
        espaceetud();
}
void verifyemail(char *email,char *password){
     Donnee A;
     int choice,i=0,j=0;
     FILE *I = fopen("Infos.DAT", "rb");
     if (I == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
     while( fread(&A,sizeof(Donnee),1,I) != NULL ){
        if((strcmp(A.emailll,email)==0) && (strcmp(A.motdepasse,password)==0)){
            setColor(7);
            gotoxy(54,24);
            printf(" Bienvenue Dans Votre Compte !!");
            gotoxy(54,26);
            setColor(9);
            printf(" Appuyez sur une touche pour continuer : ");
            setColor(7);
            getch();
            j++;
            break;
        }
      i++;
      }
      fclose(I);
        if((i!=0) && (j==0)){
         gotoxy(54,24);
         setColor(7);
         printf("  Veuillez verifier votre email ou mot de passe!!");
         gotoxy(54,26);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         setColor(9);
         getch();
          sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
        more:
         system("cls");
         setColor(9);
         gotoxy(16,1);
         printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
         gotoxy(16,2);
         printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
         gotoxy(16,3);
         printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
         gotoxy(16,4);
         printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
         gotoxy(16,5);
         printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
         gotoxy(16,6);
         printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
         gotoxy(0,3);
         printf("---------------");
         gotoxy(0,4);
         printf("---------------");
         gotoxy(140,3);
         printf("---------------");
         gotoxy(140,4);
          printf("---------------");
         gotoxy(50,12);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,14);
         printf("||      1. Reessayer de se connecter :                 ||");
         gotoxy(50,16);
         printf("||      2. S\'inscrire  :                              ||");
         gotoxy(50,18);
         printf("||      3. Quitter :                                   ||");
         gotoxy(50,20);
         setColor(9);
         printf(" =======================================================");
         gotoxy(50,22);
         printf(" =======================================================");
         setColor(7);
         gotoxy(50,24);
         printf("||           Veuillez entrer votre choix :             ||");
         setColor(9);
         gotoxy(50,26);
         printf(" =======================================================");
        setColor(7);
        gotoxy(94,24);
        scanf("%d/n", &choice);
        switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                login();
                   break;

              case 2:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 signup();
                   break;

              case 3:
                 printf("\n\n\n");
                 setColor(9);
                 exit(0);
              break;

        default:
         setColor(9);
         gotoxy(50,24);
         printf("           CHOIX INCORRECTE !!                          ||");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                             ");
        goto more;
       }
      }

}
void signorlogin() {
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    int choice;
    gotoxy(53,12);
    setColor(9);
    printf(" ================================================");
    setColor(7);
    gotoxy(53,14);
    printf("||                MENU OPTIONS                  ||");
    setColor(9);
    gotoxy(53,16);
    printf(" ================================================");
    setColor(7);
    gotoxy(53,18);
    printf("||          1. LOGIN :                          ||");
    gotoxy(53,20);
    printf("||          2. SIGN UP :                        ||");
    gotoxy(53,22);
    printf("||          3. EXIT :                           ||");
    gotoxy(53,24);
    Again:
        setColor(9);
        gotoxy(53,25);
        printf("                                                 ");
        gotoxy(53,27);
        printf("                                                 ");
        gotoxy(53,24);
    printf(" ================================================");        setColor(7);
        gotoxy(53,26);
    printf("||      Veuillez entrer votre choix :           ||");
        setColor(9);
        gotoxy(53,28);
    printf(" ================================================");
        setColor(7);
        gotoxy(92,26);
        scanf("%d/n", &choice);

    switch (choice) {
    case 1:
       sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,36);
            setColor(9);
            print_slowly(formatted_text,15);
    login();

        break;

    case 2:
          sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,36);
            setColor(9);
            print_slowly(formatted_text,15);
        signup();
        break;

    case 3:
        printf("\n\n\n");
        exit(0);
        break;

    default:
        gotoxy(53,24);
        printf("                                                    ");
        gotoxy(53,25);
        setColor(9);
        printf(" ================================================");
        gotoxy(53,26);
        setColor(7);
        printf("   CHOIX INCORRECTE !!                            ");
        setColor(9);
        gotoxy(53,27);
        printf("   Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        goto Again;
}


}
void signup(){
    int choice;
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    setColor(9);
    gotoxy(48,10);
     printf(" =========================================================");
     gotoxy(48,12);
     setColor(7);
     printf("                    Choix de profile :            ");
     gotoxy(48,14);
     setColor(9);
     printf(" =========================================================");
     setColor(7);
     gotoxy(48,16);
    printf("||       1. Administration :                              ||");
    gotoxy(48,18);
    printf("||       2. Etudiant :                                    ||");
    gotoxy(48,20);
    printf("||       3. Retour Menu Principale :                      ||");
    gotoxy(48,22);
    printf("||       4. Quitter :                                     ||");
    gotoxy(48,24);
    setColor(9);
    printf(" ==========================================================");
    Agaiin:
    gotoxy(48,27);
    printf("                                                             ");
    gotoxy(48,29);
    printf("                                                             ");
    setColor(9);
    gotoxy(48,26);
    printf(" ==========================================================");
    setColor(7);
    gotoxy(48,28);
    printf("||             Veuillez entrer votre choix :              ||");
    setColor(9);
    gotoxy(48,30);
    printf(" ==========================================================");
    setColor(7);
    gotoxy(94,28);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(22,38);
            setColor(9);
            print_slowly(formatted_text,15);
                signad();
                   break;

              case 2:
                     sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(22,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 signetud();
                   break;

              case 3:
                     sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(22,38);
            setColor(9);
            print_slowly(formatted_text,15);
                signorlogin();
              break;

              case 4:
                 printf("\n\n\n");
                 setColor(9);
                 exit(0);

        default:
        gotoxy(48,26);
        printf("                                                             ");
        gotoxy(48,27);
        setColor(9);
        printf(" ==========================================================");
        setColor(7);
        gotoxy(48,28);
        printf("   CHOIX INCORRECTE !!                                         ");
        setColor(9);
        gotoxy(48,29);
        printf("   Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        goto Agaiin;
    }

}
void signetud(){
    Donnee A;
    Again1:
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    gotoxy(42,10);
    printf("+-----------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(76,12);
    printf("SIGN UP\n");
    setColor(9);
    gotoxy(42,14);
    printf("+-----------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(44,16);
    printf("   Nom:                                \n");
    gotoxy(44,18);
    printf("   Prenom:                         \n");
    gotoxy(44,20);
    printf("   Massar:                         \n");
    gotoxy(44,22);
    printf("   Numero Telephone:                         \n");
    gotoxy(44,24);
    printf("   Email Academique:                         \n");
    gotoxy(44,26);
    printf("   Mot de passe:                         \n");
    gotoxy(44,32);
    setColor(9);
    printf("+-----------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(72,34);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(44,36);
    printf("+-----------------------------------------------------------------------+\n");
    gotoxy(53,16);
    setColor(7);
    scanf("%s",nom);
    gotoxy(55,18);
    scanf("%s",prenom);
    gotoxy(55,20);
    scanf("%s",massar);
    gotoxy(67,22);
    scanf("%s",numtele);
    gotoxy(65,24);
    scanf("%s",email);
    gotoxy(65,26);
    int k=0;
    char ch;
    while (1) {
        ch = getch(); // Get a character without echoing it

        if (ch == 13) { // Check if the character is the Enter key (ASCII 13)
            password[k] = '\0'; // Null-terminate the string
            break;
        } else if (ch == 8) { // Check if the character is the Backspace key (ASCII 8)
            if (k > 0) {
                k--;
                printf("\b \b"); // Erase the last character from the screen
            }
        } else {
            password[k] = ch;
            k++;
            printf("*"); // Print a '*' for each character entered
        }
    }
    strcpy(A.emailll,email);
    strcpy(A.massouid,massar);
    strcpy(A.nomm,nom);
    strcpy(A.prenomm,prenom);
    strcpy(A.numtelee,numtele);
    strcpy(A.motdepasse,password);
    gotoxy(50,28);
    if (strstr(email,"@etu.uae.ac.ma") != NULL) {
        printf("Vos Donnees sont bien enregistres !!");
        gotoxy(50,30);
        setColor(9);
        printf("Appuyez sur une touche pour continuer :");
        getch();
        gotoxy(23,38);
        setColor(9);
        print_slowly(formatted_text,15);
        setColor(7);
        remplirficher(A);
    } else {
        printf("  Veuillez verifier votre email !!");
         gotoxy(50,30);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         getch();
         gotoxy(23,38);
         setColor(9);
         print_slowly(formatted_text,15);
         setColor(7);
         goto Again1;
    }
    loginetud();
}
void signad(){
    Donnee A;
    Again :
    system("cls");
    setColor(9);
    gotoxy(16,1);
    printf("   _____ ______  _____ _______ _____ ____  _   _     _____  ______  _____       _____         _      _      ______  _____ \n");
    gotoxy(16,2);
    printf("  / ____|  ____|/ ____|__   __|_   _/ __ \\| \\ | |   |  __ \\|  ____|/ ____|     / ____|  /\\   | |    | |    |  ____|/ ____|\n");
    gotoxy(16,3);
    printf(" | |  __| |__  | (___    | |    | || |  | |  \\| |   | |  | | |__  | (___      | (___   /  \\  | |    | |    | |__  | (___  \n");
    gotoxy(16,4);
    printf(" | | |_ |  __|  \\___ \\   | |    | || |  | | . ` |   | |  | |  __|  \\___ \\      \\___ \\ / /\\ \\ | |    | |    |  __|  \\___ \\ \n");
    gotoxy(16,5);
    printf(" | |__| | |____ ____) |  | |   _| || |__| | |\\  |   | |__| | |____ ____) |     ____) / ____ \\| |____| |____| |____ ____) |\n");
    gotoxy(16,6);
    printf("  \\_____|______|_____/   |_|  |_____\\____/|_| \\_|   |_____/|______|_____/     |_____/_/    \\_\\______|______|______|_____/ \n");
    gotoxy(0,3);
    printf("---------------");
    gotoxy(0,4);
    printf("---------------");
    gotoxy(140,3);
    printf("---------------");
    gotoxy(140,4);
    printf("---------------");
    gotoxy(42,10);
    printf("+------------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(76,12);
    printf("SIGN UP\n");
    setColor(9);
    gotoxy(42,14);
    printf("+------------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(44,16);
    printf("    Nom:                                \n");
    gotoxy(44,18);
    printf("    Prenom:                         \n");
    gotoxy(44,20);
    printf("    Numero d\'identification:        \n");
    gotoxy(44,22);
    printf("    Numero Telephone:                         \n");
    gotoxy(44,24);
    printf("    Email Academique:                         \n");
    gotoxy(44,26);
    printf("    Mot de passe:                         \n");
    gotoxy(42,32);
    setColor(9);
    printf("+------------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(72,34);
    printf("[Se connecter]\n");
    setColor(9);
    gotoxy(42,36);
    printf("+------------------------------------------------------------------------+\n");
    gotoxy(53,16);
    setColor(7);
    scanf("%s",nom);
    gotoxy(56,18);
    scanf("%s",prenom);
    gotoxy(73,20);
    scanf("%s",numid);
    gotoxy(67,22);
    scanf("%s",numtele);
    gotoxy(67,24);
    scanf("%s",email);
    gotoxy(64,26);
    int k=0;
    char ch;
    while (1) {
        ch = getch(); // Get a character without echoing it

        if (ch == 13) { // Check if the character is the Enter key (ASCII 13)
            password[k] = '\0'; // Null-terminate the string
            break;
        } else if (ch == 8) { // Check if the character is the Backspace key (ASCII 8)
            if (k > 0) {
                k--;
                printf("\b \b"); // Erase the last character from the screen
            }
        } else {
            password[k] = ch;
            k++;
            printf("*"); // Print a '*' for each character entered
        }
    }
    strcpy(A.emailll,email);
    strcpy(A.massouid,numid);
    strcpy(A.nomm,nom);
    strcpy(A.prenomm,prenom);
    strcpy(A.numtelee,numtele);
    strcpy(A.motdepasse,password);

    gotoxy(50,28);
    if (strstr(email,"@uae.ac.ma") != NULL) {
        printf("Vos Donnees sont bien enregistres !!");
        gotoxy(50,30);
        setColor(9);
        printf("Appuyez sur une touche pour continuer :");
        getch();
        gotoxy(23,38);
        setColor(9);
        print_slowly(formatted_text,15);
        setColor(7);
        remplirficher(A);
    } else {
        printf("  Veuillez verifier votre email !!");
         gotoxy(50,30);
         setColor(9);
         printf(" Appuyez sur une touche pour continuer : ");
         getch();
         gotoxy(23,38);
         setColor(9);
         print_slowly(formatted_text,15);
         setColor(7);
         goto Again;
    }

   loginad();

}
void remplirficher(Donnee A){
     FILE *I = fopen("Infos.DAT", "ab");
     if (I == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    fwrite(&A,sizeof(Donnee),1,I);
    fclose(I);

}
#define DAYS 6
#define TIME_SLOTS 5
void printDays() {
    int S=31;
    setColor(9);
    gotoxy(19,10);
    printf("Heures");
    setColor(7);
    const char *days[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};
    for (int i = 0; i < DAYS; i++) {
            gotoxy(S,10);
            printf("| %s ", days[i]);
            S+=18;
    }
}
void printSeparator() {
    int S=12;
    setColor(9);
    for (int i = 0; i < DAYS -1 ; i++) {
        gotoxy(16,S);
        printf("+------------------------------------------------------------------------------------------------------------------------");
        S+=4;

    }
    setColor(7);
}
void printSchedule(char *nomreservation) {
    int S=14,T;
    int t=0;
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    const char *time_slots[] = {
        "08:30 - 10:30", "10:30 - 12:30", "14:30 - 16:30",
        "16:30 - 18:30"};
        setColor(7);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
    if (STD == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
    }
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
    if (STP == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
    }
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
    if (SAM == NULL) {
                perror("Erreur lors de l'ouverture du fichier");
                exit(0);
    }
    for (int i = 0; i < TIME_SLOTS; i++) {
         setColor(7);
         gotoxy(17,S);
        printf("%s ", time_slots[i]);
        T=31;
        for(int j=0;j< DAYS;j++){
            FILE *STD = fopen("salleTDinfos.DAT", "rb");
            if (STD == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
            }
            FILE *STP = fopen("salleTPinfos.DAT", "rb");
            if (STP == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
            }
            FILE *SAM = fopen("salleAMinfos.DAT", "rb");
            if (SAM == NULL) {
                perror("Erreur lors de l'ouverture du fichier");
                exit(0);
            }
            t=0;
            gotoxy(T,S);
            setColor(9);
            printf("|");
            trim(nomreservation);
            switch (i){
                  case 0 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].premier);
                         if((strcmp(A.jour[j].premier,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                         }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].premier);
                         if(strcmp(B.jour[j].premier,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].premier);
                         if(strcmp(C.jour[j].premier,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);
                     }
                     break;

                  case 1 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].deuxieme);
                         if((strcmp(A.jour[j].deuxieme,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                        }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].deuxieme);
                         if(strcmp(B.jour[j].deuxieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].deuxieme);
                         if(strcmp(C.jour[j].deuxieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);
                     }
                     break;
                   case 2 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].troixieme);
                         if((strcmp(A.jour[j].troixieme,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                        }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].troixieme);
                         if(strcmp(B.jour[j].troixieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].troixieme);
                         if(strcmp(C.jour[j].troixieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);
                     }
                     break;

                   case 3 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].quatrieme);
                         if((strcmp(A.jour[j].quatrieme,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                        }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].quatrieme);
                         if(strcmp(B.jour[j].quatrieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].quatrieme);
                         if(strcmp(C.jour[j].quatrieme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);

                     }
                     break;

                default:
                break;
            }


            T+=18;
        }
        setColor(7);
        S+=4;
        if(i==3){
             setColor(7);
             gotoxy(58, S - 1);
             printf("\n              Appuyer sur une touche pour retourner au menu principale...");
             getch();
             if(ll!=0){
               espace_ca();
             }
             if(pp==0){
               espaceadmin();
             }
             else{
                espaceetud();
             }


       }
    }
    fclose(STD);
    fclose(STP);
    fclose(SAM);
}
void voir_reservation(){
    int choice,choice2;
    char annee[3];
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
   setColor(7);
    gotoxy(31,8);
    printf("| Choix de Filiere : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("            1. TDIA          2. GI           3. ID      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("            4. GM            5. GC           6. GEER       \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("            7. GEE           8. CP1          9. CP2       \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,27);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,29);
    printf("                          10. AUTRES \n");
    setColor(9);
    gotoxy(10,31);
    printf("+--------------------------------------------------------------+\n");
    setColor(9);
    gotoxy(86,16);
    printf(" ===================================================");
    setColor(7);
    gotoxy(86,19);
    printf("||    Veuillez entrer votre choix :                ||");
    setColor(9);
    gotoxy(86,22);
    printf(" ==================================================");
    setColor(7);
    gotoxy(123,19);
    scanf("%d/n", &choice);
    if(choice>=11 || choice<=0){
        gotoxy(86,19);
        setColor(7);
    printf("         CHOIX INCORRECTE  !!                           ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
        system("cls");
        nom_reservation();
    }

    if((choice<=7) && (choice>=1)){
        gotoxy(30,8);
    printf("| Choix d\'annee : |              ");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("                     1. PREMIERE ANNEE                               \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("                     2. DEUXIEME ANNEE                              \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("                     3. TROIXIEME ANNEE                            \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,27);
    printf("                                                                   \n");
    setColor(7);
    gotoxy(10,29);
    printf("                                                                   \n");
    setColor(9);
    gotoxy(10,31);
    printf("                                                                    \n");
    Agaiiiiin:
    setColor(9);
    gotoxy(86,16);
    printf("                                                                     ");
    gotoxy(86,19);
    printf("                                                                     ");
    gotoxy(86,22);
    printf("                                                                     ");
    setColor(9);
    gotoxy(86,13);
    printf(" ===================================================");
    setColor(7);
    gotoxy(86,16);
    printf("||    Veuillez entrer votre choix :                ||");
    setColor(9);
    gotoxy(86,19);
    printf(" ==================================================");
        setColor(7);
        gotoxy(123,16);
        scanf("%d/n", &choice2);
        switch (choice2) {
              case 1:
                  strcpy(annee,"1");

                   break;

              case 2:
                  strcpy(annee,"2");
                   break;

              case 3:
                  strcpy(annee,"3");
              break;

        default:
        gotoxy(86,13);
        printf("                                                                 ");
        gotoxy(86,15);
        setColor(9);
        printf(" ===================================================");
        gotoxy(86,16);
        setColor(7);
        printf("       CHOIX INCORRECTE !!                            ");
        setColor(9);
        gotoxy(86,18);
        printf("       Appuyer sur une touche pour continuer :");
        getch();
        gotoxy(86,15);
        printf("                                                                 ");
        gotoxy(86,18);
        printf("                                                                 ");
        setColor(7);
        goto Agaiiiiin;
    }
}
    switch (choice) {
              case 1:
                  strcpy(nomreservation,"TDIA");
                  strcat(nomreservation,annee);

                   break;

              case 2:
                  strcpy(nomreservation,"GI");
                  strcat(nomreservation,annee);
                   break;

              case 3:
                  strcpy(nomreservation,"ID");
                  strcat(nomreservation,annee);
              break;

              case 4:
                  strcpy(nomreservation,"GM");
                  strcat(nomreservation,annee);

                   break;

              case 5:
                  strcpy(nomreservation,"GC");
                  strcat(nomreservation,annee);

                   break;

              case 6:
                  strcpy(nomreservation,"GEER");
                  strcat(nomreservation,annee);
              break;

              case 7:
                  strcpy(nomreservation,"GEE");
                  strcat(nomreservation,annee);

                   break;

              case 8:
                   strcpy(nomreservation,"CP1");
                   break;

              case 9:
                  strcpy(nomreservation,"CP2");
              break;
              case 10:
                   system("cls");
                   setColor(9);
                   gotoxy(36, 0);
                   printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
                   gotoxy(36, 1);
                   printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
                   gotoxy(36, 2);
                   printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
                   gotoxy(36, 3);
                   printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
                   gotoxy(36, 4);
                   printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
                   gotoxy(36, 5);
                   printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

                   gotoxy(0,2);
                   printf("-----------------------------");
                   gotoxy(0,3);
                   printf("-----------------------------");
                   gotoxy(127,2);
                   printf("-----------------------------");
                   gotoxy(127,3);
                    printf("-----------------------------");
                   gotoxy(46,14);
                  printf("+-------------------------------------------------------------+\n");
                   setColor(7);
                  gotoxy(65,16);
                  printf("  Nom de Reservation :\n");
                  setColor(9);
                  gotoxy(46,18);
                  printf("+-------------------------------------------------------------+\n");
                  gotoxy(46,20);
                  printf("+-------------------------------------------------------------+\n");
                  setColor(7);
                  gotoxy(46,22);
                  printf("          Donner un nom :                                \n");
                 gotoxy(46,24);
                 setColor(9);
                  printf("+-------------------------------------------------------------+\n");
                  setColor(7);
                  gotoxy(71,22);
                  scanf("%s",nomreservation);
              break;

        default:

        break;
       }

    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(7);
    printDays();
    printSeparator();
    printSchedule(nomreservation);
}
void espaceadmin(){
    int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,8);
    printf(" ==============================================================");
     gotoxy(46,10);
     setColor(7);
     printf("                         Menu Admin :");
     gotoxy(46,12);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,14);
    printf("||       1. Effectuer une reservation :                       ||");
    gotoxy(46,16);
    printf("||       2. Annuler une reservation :                         ||");
    gotoxy(46,18);
    printf("||       3. Status des Salles :                               ||");
    gotoxy(46,20);
    printf("||       4. Voir les reservations :                           ||");
    gotoxy(46,22);
    printf("||       5. Ajouter une salle :                               ||");
    gotoxy(46,24);
    printf("||       6. Supprimer une salle :                             ||");
    gotoxy(46,26);
    printf("||       7. Gestion de Code Admin :                           ||");
    gotoxy(46,28);
    printf("||       8. Mon Profile :                                     ||");
     gotoxy(46,30);
    printf("||       9. Retour au page principale :                       ||");
    gotoxy(46,32);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,34);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,36);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,38);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,36);
    scanf("%d", &choice);
    switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219);
                   gotoxy(23,40);
                   setColor(9);
                   print_slowly(formatted_text,15);
                   reservation_administration();
                   break;

              case 2:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  Annuler_Reservation();
                   break;

              case 3:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  status_salle();
              break;

              case 4:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  voir_reservation();
              break;

              case 5:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  ajout_menu();
              break;

              case 6:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  supprimer_menu();
              break;

              case 7:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  menu_codeadmin();
                 break;

              case 8:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                 menu_profile();
                 break;


              case 9:
                  gotoxy(23,40);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  signorlogin();

        default:
                 setColor(7);
                 gotoxy(46,36);
                 printf("           CHOIX INCORRECTE !!                                   ");
                 sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
                 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                 219, 219, 219, 219, 219, 219);
                 gotoxy(23,40);
                 setColor(9);
                 print_slowly(formatted_text,15);
                 gotoxy(46,33);
                 printf("                                                                 ");
                 gotoxy(46,36);
                 printf("                                                                 ");
                 gotoxy(46,34);
                 printf("                                                                 ");
                 gotoxy(46,35);
                 printf("                                                                 ");
                 gotoxy(46,37);
                 printf("                                                                 ");
                 gotoxy(46,39);
                 printf("                                                                 ");
                 gotoxy(46,38);
                 printf("                                                                 ");
                 gotoxy(23,40);
                   printf("                                                                                                                                                             ");
                 goto moore;
    }
}
void reservation_administration(){
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    int choice1,choice2,choice3,i=0,j=0;
    int k;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(14,8);
    setColor(7);
    printf("| Choix de Salle : |");
    gotoxy(2,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,11);
    printf("             1. Les Salles de TD              \n");
    setColor(9);
    gotoxy(2,13);
    printf("+--------------------------------------------+\n");
    gotoxy(2,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,17);
    printf("             2. Les Salles de TP               \n");
    setColor(9);
    gotoxy(2,19);
    printf("+--------------------------------------------+\n");
    gotoxy(2,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,23);
    printf("             3. Les Amphis               \n");
    setColor(9);
    gotoxy(2,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(4,30);
    printf("                                                       ");
    gotoxy(2,27);
    printf("==============================================");
    setColor(7);
    gotoxy(2,29);
    printf("||        Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(2,31);
    printf("==============================================");

    Again:
    setColor(7);
    gotoxy(68,8);
    printf("| Choix de Jour : |");
    gotoxy(53,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,11);
    printf("       1. Lundi           2. Mardi  \n");
    setColor(9);
    gotoxy(53,13);
    printf("+--------------------------------------------+\n");
    gotoxy(53,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,17);
    printf("       3. Mercredi        4. Jeudi  \n");
    setColor(9);
    gotoxy(53,19);
    printf("+--------------------------------------------+\n");
    gotoxy(53,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,23);
    printf("       5. Vendredi        6. Samedi  \n");
    setColor(9);
    gotoxy(53,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(53,27);
    printf("=============================================");
    setColor(7);
    gotoxy(53,29);
    printf("||      Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(53,31);
    printf("=============================================");
    setColor(7);

    Againnn:
    setColor(7);
    gotoxy(115,8);
    printf("| Choix d\'heure : |");
    gotoxy(103,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,11);
    printf("     1. 8:30 -> 10:30     2. 10:30 -> 12:30  \n");
    setColor(9);
    gotoxy(103,13);
    printf("+--------------------------------------------+\n");
    gotoxy(103,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,17);
    printf("     3. 14:30 -> 16:30    4. 16:30 -> 18:30  \n");
    setColor(9);
    gotoxy(103,19);
    printf("+--------------------------------------------+\n");
    gotoxy(103,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,23);
    printf("     5. 19:00 -> 21:00    6. 21:00 -> 23:00  \n");
    setColor(9);
    gotoxy(103,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(103,30);
    printf("                                                       ");
    gotoxy(103,27);
    printf("=============================================");
    setColor(7);
    gotoxy(103,29);
    printf("||     Veuillez entrer votre choix :        ||");
    setColor(9);
    gotoxy(103,31);
    printf("=============================================");

    if(i==0){
        setColor(7);
        gotoxy(43,29);
        scanf("%d", &choice1);
        switch (choice1) {
              case 1:
                  i++;
                   break;

             case 2:
                  i++;
                   break;

              case 3:
                  i++;
                  break;

        default:
        gotoxy(2,27);
        printf("                                                        ");
        gotoxy(2,28);
        setColor(9);
        printf("============================================== ");
        gotoxy(2,29);
        setColor(7);
        printf("   CHOIX INCORRECTE !!                              ");
        setColor(9);
        gotoxy(4,30);
        printf("   Appuyer sur une touche pour continuer :");
        getch();

        setColor(7);
        reservation_administration();
    }
    }

    if(j==0){
        setColor(7);
       gotoxy(92,29);
       scanf("%d", &choice2);
       switch (choice2) {
              case 1:
                  j++;
                   break;

              case 2:
                  j++;
                   break;

              case 3:
                  j++;
                   break;

              case 4:
                  j++;
                   break;

              case 5:
                  j++;
                   break;

              case 6:
                  j++;
                   break;

        default:
        gotoxy(53,27);
        printf("                                                        ");
        gotoxy(53,28);
        setColor(9);
        printf("==============================================");
        gotoxy(53,29);
        setColor(7);
        printf("    CHOIX INCORRECTE !!                          ");
        setColor(9);
        gotoxy(53,30);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(53,28);
        printf("                                                    ");
        gotoxy(53,30);
        printf("                                                     ");
        goto Again;

    }
    }
       k=0;
       setColor(7);
       gotoxy(141,29);
       scanf("%d/n", &choice3);
       switch (choice3) {
              case 1:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].premier),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].premier),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].premier),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].premier),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                  while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                     if(strcmp((C.jour[choice2-1].premier),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].premier),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                     }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                  break;

              case 2:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].deuxieme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].deuxieme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].deuxieme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].deuxieme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].deuxieme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].deuxieme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                   gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                  break;

              case 3:
                if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].troixieme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].troixieme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].troixieme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].troixieme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].troixieme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].troixieme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                   if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                   break;

              case 4:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].quatrieme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].quatrieme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].quatrieme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].quatrieme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].quatrieme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].quatrieme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                   if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                   break;

              case 5:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].cinqueme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].cinqueme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].cinqueme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                   gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                   break;

              case 6:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].sixeme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].sixeme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].sixeme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                 if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,28);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(38,30);
                    setColor(9);
                    printf("Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(81,30);
                    getch();
                    reservation_administration();
                  }
                   break;

        default:
        gotoxy(101,27);
        printf("                                                      ");
        gotoxy(101,28);
        setColor(9);
        printf("============================================== ");
        gotoxy(101,29);
        setColor(7);
        printf("     CHOIX INCORRECTE !!                         ");
        setColor(9);
        gotoxy(101,31);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(101,28);
        printf("                                                 ");
        gotoxy(101,31);
        printf("                                                  ");
        goto Againnn;
    }
    nom_reservation(choice1,choice2);

}
void nom_reservation(int choice1,int choice2){
    int choice,choice3;
    char annee[3];
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
   setColor(7);
    gotoxy(31,8);
    printf("| Choix de Filiere : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("            1. TDIA          2. GI           3. ID      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("            4. GM            5. GC           6. GEER       \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("            7. GEE           8. CP1          9. CP2       \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,27);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,29);
    printf("                          10. AUTRES \n");
    setColor(9);
    gotoxy(10,31);
    printf("+--------------------------------------------------------------+\n");
    setColor(9);
    gotoxy(86,16);
    printf(" ===================================================");
    setColor(7);
    gotoxy(86,19);
    printf("||    Veuillez entrer votre choix :                ||");
    setColor(9);
    gotoxy(86,22);
    printf(" ==================================================");
    setColor(7);
    gotoxy(123,19);
    scanf("%d/n", &choice);
    if(choice>=11 || choice<=0){
        gotoxy(10,19);
        setColor(9);
        printf("      CHOIX INCORRECTE  !!                       ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
        system("cls");
        nom_reservation(choice1,choice2);
    }

    if((choice<=7) && (choice>=1)){
        gotoxy(30,8);
    printf("| Choix d\'annee : |              ");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("                     1. PREMIERE ANNEE                               \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("                     2. DEUXIEME ANNEE                              \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("                     3. TROIXIEME ANNEE                            \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,27);
    printf("                                                                   \n");
    setColor(7);
    gotoxy(10,29);
    printf("                                                                   \n");
    setColor(9);
    gotoxy(10,31);
    printf("                                                                    \n");
    Agaiiiiin:
    setColor(9);
    gotoxy(86,16);
    printf("                                                                     ");
    gotoxy(86,19);
    printf("                                                                     ");
    gotoxy(86,22);
    printf("                                                                     ");
    setColor(9);
    gotoxy(86,13);
    printf(" ===================================================");
    setColor(7);
    gotoxy(86,16);
    printf("||    Veuillez entrer votre choix :                ||");
    setColor(9);
    gotoxy(86,19);
    printf(" ==================================================");
        setColor(7);
        gotoxy(123,16);
        scanf("%d/n", &choice3);
        switch (choice3) {
              case 1:
                  strcpy(annee,"1");

                   break;

              case 2:
                  strcpy(annee,"2");
                   break;

              case 3:
                  strcpy(annee,"3");
              break;

        default:
        gotoxy(86,13);
        printf("                                                                 ");
        gotoxy(86,15);
        setColor(9);
        printf(" ===================================================");
        gotoxy(86,16);
        setColor(7);
        printf("       CHOIX INCORRECTE !!                            ");
        setColor(9);
        gotoxy(86,18);
        printf("       Appuyer sur une touche pour continuer :");
        getch();
        gotoxy(86,15);
        printf("                                                                 ");
        gotoxy(86,18);
        printf("                                                                 ");
        setColor(7);
        goto Agaiiiiin;
    }
}
    switch (choice) {
              case 1:
                  strcpy(nomreservation,"TDIA");
                  strcat(nomreservation,annee);

                   break;

              case 2:
                  strcpy(nomreservation,"GI");
                  strcat(nomreservation,annee);
                   break;

              case 3:
                  strcpy(nomreservation,"ID");
                  strcat(nomreservation,annee);
              break;

              case 4:
                  strcpy(nomreservation,"GM");
                  strcat(nomreservation,annee);

                   break;

              case 5:
                  strcpy(nomreservation,"GC");
                  strcat(nomreservation,annee);

                   break;

              case 6:
                  strcpy(nomreservation,"GEER");
                  strcat(nomreservation,annee);
              break;

              case 7:
                  strcpy(nomreservation,"GEE");
                  strcat(nomreservation,annee);

                   break;

              case 8:
                   strcpy(nomreservation,"CP1");
                   break;

              case 9:
                  strcpy(nomreservation,"CP2");
              break;
              case 10:
                   system("cls");
                   setColor(9);
                   gotoxy(36, 0);
                   printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
                   gotoxy(36, 1);
                   printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
                   gotoxy(36, 2);
                   printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
                   gotoxy(36, 3);
                   printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
                   gotoxy(36, 4);
                   printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
                   gotoxy(36, 5);
                   printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

                   gotoxy(0,2);
                   printf("-----------------------------");
                   gotoxy(0,3);
                   printf("-----------------------------");
                   gotoxy(127,2);
                   printf("-----------------------------");
                   gotoxy(127,3);
                    printf("-----------------------------");
                   gotoxy(46,14);
                  printf("+-------------------------------------------------------------+\n");
                   setColor(7);
                  gotoxy(65,16);
                  printf("  Nom de Reservation :\n");
                  setColor(9);
                  gotoxy(46,18);
                  printf("+-------------------------------------------------------------+\n");
                  gotoxy(46,20);
                  printf("+-------------------------------------------------------------+\n");
                  setColor(7);
                  gotoxy(46,22);
                  printf("          Donner un nom :                                \n");
                 gotoxy(46,24);
                 setColor(9);
                  printf("+-------------------------------------------------------------+\n");
                  setColor(7);
                  gotoxy(71,22);
                  scanf("%s",nomreservation);
              break;

        default:

        break;
       }

       int l=0;
    if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL)){
                           if(strcmp((A.jour[choice2-1].premier),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].deuxieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].troixieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].quatrieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(STD);
                    if(l!=0){
                        gotoxy(10,27);
                        printf("                                                                        ");
                        gotoxy(10,29);
                        printf("                                                                        ");
                        gotoxy(10,31);
                        printf("                                                                        ");
                        setColor(9);
                        gotoxy(44,27);
                        printf("+-------------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(44,29);
                        printf("   Cette classe a deja une sceance cette heure et ce jour !          \n");
                        setColor(9);
                        gotoxy(44,31);
                        printf(" Appuyer sur une touche pour ressayer une autre reservation : \n");
                        gotoxy(44,33);
                        printf("+-------------------------------------------------------------+\n");
                        gotoxy(105,31);
                        getch();
                        l=0;
                        reservation_administration();
                    }

                 STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if(strcmp((A.jour[choice2-1].premier),"Occupe") == 0){
                       strcpy((A.jour[choice2-1].premier),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if(strcmp((A.jour[choice2-1].deuxieme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].deuxieme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if(strcmp((A.jour[choice2-1].troixieme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].troixieme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if (strcmp((A.jour[choice2-1].quatrieme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].quatrieme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if (strcmp((A.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].cinqueme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if (strcmp((A.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].sixeme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                }
                  fclose(STD);
    }
    if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL)){
                           if(strcmp((B.jour[choice2-1].premier),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].deuxieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].troixieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].quatrieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(STP);
                    if(l!=0){
                         gotoxy(10,27);
                        printf("                                                                        ");
                        gotoxy(10,29);
                        printf("                                                                        ");
                        gotoxy(10,31);
                        printf("                                                                        ");
                        setColor(9);
                        gotoxy(44,27);
                        printf("+-------------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(44,29);
                        printf("   Cette classe a deja une sceance cette heure et ce jour !          \n");
                        setColor(9);
                        gotoxy(44,31);
                        printf(" Appuyer sur une touche pour ressayer une autre reservation : \n");
                        gotoxy(44,33);
                        printf("+-------------------------------------------------------------+\n");
                        gotoxy(105,31);
                        getch();
                        l=0;
                        reservation_administration();
                    }
                    STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }

                while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if(strcmp((B.jour[choice2-1].premier),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].premier),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if (strcmp((B.jour[choice2-1].deuxieme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].deuxieme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if(strcmp((B.jour[choice2-1].troixieme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].troixieme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if(strcmp((B.jour[choice2-1].quatrieme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].quatrieme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if(strcmp((B.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].cinqueme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if(strcmp((B.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].sixeme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                }
                  fclose(STP);
    }
    if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL)){
                           if(strcmp((C.jour[choice2-1].premier),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].deuxieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].troixieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].quatrieme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(SAM);
                    if(l!=0){
                        gotoxy(10,27);
                        printf("                                                                        ");
                        gotoxy(10,29);
                        printf("                                                                        ");
                        gotoxy(10,31);
                        printf("                                                                        ");
                        setColor(9);
                        gotoxy(44,27);
                        printf("+-------------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(44,29);
                        printf("   Cette classe a deja une sceance cette heure et ce jour !          \n");
                        setColor(9);
                        gotoxy(44,31);
                        printf(" Appuyer sur une touche pour ressayer une autre reservation : \n");
                        gotoxy(44,33);
                        printf("+-------------------------------------------------------------+\n");
                        gotoxy(105,31);
                        getch();
                        l=0;
                        reservation_administration();
                    }
                    SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }

                while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if(strcmp((C.jour[choice2-1].premier),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].premier),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].deuxieme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].deuxieme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].troixieme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].troixieme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].quatrieme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].quatrieme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].cinqueme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].sixeme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                }
                  fclose(SAM);
    }
    gotoxy(10,27);
    printf("                                                                        ");
    gotoxy(10,29);
    printf("                                                                        ");
    gotoxy(10,31);
    printf("                                                                        ");
    setColor(9);
    gotoxy(44,27);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(44,29);
    printf("               Votre Reservation a bien fait !          \n");
    setColor(9);
    gotoxy(44,31);
    printf(" Appuyer sur une touche pour retourner au menu principale : \n");
    gotoxy(44,33);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(103,31);
    getch();
    if(ll!=0){
        espace_ca();
    }
    espaceadmin();

}
void Annuler_Reservation(){
    int choice1,choice2,choice3,i=0,j=0,k=0;
     char ccc;
     int a;
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(14,8);
    setColor(7);
    printf("| Choix de Salle : |");
    gotoxy(2,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,11);
    printf("             1. Les Salles de TD              \n");
    setColor(9);
    gotoxy(2,13);
    printf("+--------------------------------------------+\n");
    gotoxy(2,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,17);
    printf("             2. Les Salles de TP               \n");
    setColor(9);
    gotoxy(2,19);
    printf("+--------------------------------------------+\n");
    gotoxy(2,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,23);
    printf("             3. Les Amphis               \n");
    setColor(9);
    gotoxy(2,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(4,30);
    printf("                                                       ");
    gotoxy(2,27);
    printf("==============================================");
    setColor(7);
    gotoxy(2,29);
    printf("||        Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(2,31);
    printf("==============================================");

    Again:
    setColor(7);
    gotoxy(68,8);
    printf("| Choix de Jour : |");
    gotoxy(53,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,11);
    printf("       1. Lundi           2. Mardi  \n");
    setColor(9);
    gotoxy(53,13);
    printf("+--------------------------------------------+\n");
    gotoxy(53,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,17);
    printf("       3. Mercredi        4. Jeudi  \n");
    setColor(9);
    gotoxy(53,19);
    printf("+--------------------------------------------+\n");
    gotoxy(53,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,23);
    printf("       5. Vendredi        6. Samedi  \n");
    setColor(9);
    gotoxy(53,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(53,27);
    printf("=============================================");
    setColor(7);
    gotoxy(53,29);
    printf("||      Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(53,31);
    printf("=============================================");
    setColor(7);

    Againnn:
    setColor(7);
    gotoxy(115,8);
    printf("| Choix d\'heure : |");
    gotoxy(103,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,11);
    printf("     1. 8:30 -> 10:30     2. 10:30 -> 12:30  \n");
    setColor(9);
    gotoxy(103,13);
    printf("+--------------------------------------------+\n");
    gotoxy(103,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,17);
    printf("     3. 14:30 -> 16:30    4. 16:30 -> 18:30  \n");
    setColor(9);
    gotoxy(103,19);
    printf("+--------------------------------------------+\n");
    gotoxy(103,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,23);
    printf("     5. 19:00 -> 21:00    6. 21:00 -> 23:00  \n");
    setColor(9);
    gotoxy(103,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(103,30);
    printf("                                                       ");
    gotoxy(103,27);
    printf("=============================================");
    setColor(7);
    gotoxy(103,29);
    printf("||     Veuillez entrer votre choix :        ||");
    setColor(9);
    gotoxy(103,31);
    printf("=============================================");
;

    if(i==0){
        gotoxy(43,29);
        setColor(7);
        scanf("%d", &choice1);
        switch (choice1) {
              case 1:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,11);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,13);
                  printf("  Donner quel Bloc (A/N) :                     ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,17);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,19);
                  setColor(7);
                  printf("  Donner le numero de la salle (1-->10) :       ");
                  gotoxy(2,21);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(32,13);
                  while (getchar() != '\n');
                  setColor(7);
                  scanf("%c", &ccc);
                  gotoxy(44,19);
                  scanf("%d", &a);
                  gotoxy(2,23);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,25);
                  setColor(7);
                  printf("  Bien Enregistres");
                  gotoxy(2,27);
                  setColor(9);
                  printf("  Appuyer sur une touche pour continuer :");
                  gotoxy(2,29);
                  printf("+--------------------------------------------+\n");
                  gotoxy(45,27);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                      \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                    ");
                  gotoxy(4,28);
                  printf("                                                    ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("1");
                   i++;
                   break;

             case 2:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,11);
                  printf("                                                ");
                  gotoxy(2,13);
                  printf("                                                ");
                  gotoxy(2,21);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,17);
                  setColor(7);
                  printf("  Donner le numero de la salle (1-->10) :       ");
                  gotoxy(2,19);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(44,17);
                  setColor(7);
                  scanf("%d", &a);
                  gotoxy(2,21);
                  setColor(9);
                  printf("----------------------------------------------");
                  gotoxy(2,23);
                  setColor(7);
                  printf("Bien Enregistres");
                  gotoxy(2,25);
                  setColor(9);
                  printf("Appuyer sur une touche pour continuer :");
                  gotoxy(2,27);
                  printf("----------------------------------------------");
                  gotoxy(43,25);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                      \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                       ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("2");
                  i++;
                   break;

              case 3:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,11);
                  printf("                                                ");
                  gotoxy(2,13);
                  printf("                                                ");
                  gotoxy(2,21);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("  Donner amphi (A/B) :                      ");
                  gotoxy(2,19);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(26,17);
                  while (getchar() != '\n');
                  setColor(7);
                  scanf("%c", &ccc);
                  gotoxy(2,21);
                  setColor(9);
                  printf("----------------------------------------------");
                  gotoxy(2,23);
                  setColor(7);
                  printf("Bien Enregistres");
                  gotoxy(2,25);
                  setColor(9);
                  printf("Appuyer sur une touche pour continuer :");
                  gotoxy(2,27);
                  printf("----------------------------------------------");
                  gotoxy(43,25);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                     \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                       ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("3");
                  i++;
                  break;

        default:
        gotoxy(2,27);
        printf("                                                ");
        gotoxy(2,28);
        setColor(9);
        printf("==============================================");
        gotoxy(2,29);
        setColor(7);
        printf("  CHOIX INCORRECTE !!                            ");
        setColor(9);
        gotoxy(4,30);
        printf("  Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        Annuler_Reservation();
    }
    }

    if(j==0){
       gotoxy(92,29);
       setColor(7);
       scanf("%d", &choice2);
       switch (choice2) {
              case 1:
                  j++;
                   break;

              case 2:
                  j++;
                   break;

              case 3:
                  j++;
                   break;

              case 4:
                  j++;
                   break;

              case 5:
                  j++;
                   break;

              case 6:
                  j++;
                   break;

        default:
        gotoxy(53,27);
        printf("                                                        ");
        gotoxy(53,28);
        setColor(9);
        printf("==============================================");
        gotoxy(53,29);
        setColor(7);
        printf("    CHOIX INCORRECTE !!                          ");
        setColor(9);
        gotoxy(53,30);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(53,28);
        printf("                                                    ");
        gotoxy(53,30);
        printf("                                                     ");
        goto Again;

    }
    }
       k=0;
       gotoxy(141,29);
       setColor(7);
       scanf("%d/n", &choice3);
       switch (choice3) {
          case 1:
              if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].premier),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].premier),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].premier),"Disponible")!=0) && (B.num == a) ){
                       strcpy((B.jour[choice2-1].premier),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                  while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                     if( (strcmp((C.jour[choice2-1].premier),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].premier),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                     }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                  break;

              case 2:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].deuxieme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].deuxieme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].deuxieme),"Disponible")!=0) && (B.num==a) ){
                       strcpy((B.jour[choice2-1].deuxieme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].deuxieme),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].deuxieme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                     gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                  break;

              case 3:
                if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].troixieme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].troixieme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].troixieme),"Disponible")!=0) && (B.num=a) ){
                       strcpy((B.jour[choice2-1].troixieme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].troixieme),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].troixieme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                   if(k==0){
                     gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                   break;

              case 4:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].quatrieme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].quatrieme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].quatrieme),"Disponible")!=0) && (B.num ==a) ){
                       strcpy((B.jour[choice2-1].quatrieme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].quatrieme),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].quatrieme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                   if(k==0){
                     gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                   break;

              case 5:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].cinqueme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].cinqueme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].cinqueme),"Disponible")!=0) && (B.num ==a) ){
                       strcpy((B.jour[choice2-1].cinqueme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].cinqueme),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].cinqueme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                     gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                   break;

              case 6:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].sixeme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].sixeme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].sixeme),"Disponible")!=0) && (B.num==a) ){
                       strcpy((B.jour[choice2-1].sixeme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].sixeme),"Disponible")!=0) && (C.nom == ccc ) ){
                       strcpy((C.jour[choice2-1].sixeme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                 if(k==0){
                     gotoxy(1,27);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,29);
                    printf("                                                                                                                                                                          ");
                    gotoxy(1,31);
                    printf("                                                                                                                                                                          ");
                    gotoxy(39,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(39,29);
                    setColor(7);
                    printf("                 Cette Reservation n\'existe pas !!");
                    gotoxy(39,31);
                    setColor(9);
                    printf("                 Appuyer sur une touche pour continuer :");
                    gotoxy(39,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(99,31);
                    getch();
                    Annuler_Reservation();
                  }
                   break;

        default:
        gotoxy(101,27);
        printf("                                                      ");
        gotoxy(101,28);
        setColor(9);
        printf("============================================== ");
        gotoxy(101,29);
        setColor(7);
        printf("     CHOIX INCORRECTE !!                         ");
        setColor(9);
        gotoxy(101,31);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(101,28);
        printf("                                                 ");
        gotoxy(101,31);
        printf("                                                  ");
        goto Againnn;
    }

    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(40,14);
    printf("+-------------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(40,16);
    printf("            Annulation de Cette Reservation a bien fait ! :\n");
    setColor(9);
    gotoxy(40,18);
    printf("+-------------------------------------------------------------------------+\n");
    gotoxy(40,20);
    printf("+-------------------------------------------------------------------------+\n");
    setColor(9);
    gotoxy(40,22);
    printf("            Appuyer sur une touche pour retourner au menu principale :                                \n");
    gotoxy(40,24);
    printf("+-------------------------------------------------------------------------+\n");
    gotoxy(111,22);
    getch();
    setColor(7);
    if(ll!=0){
        espace_ca();
    }
    espaceadmin();
}
void trim(char* str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}
void DebutSemaine(){
    int i;
     remove("salleTDinfos.DAT");
     remove("salleTPinfos.DAT");
     remove("salleAMinfos.DAT");
     SalleinfosTD A;
     SalleinfosTD B;
     SalleinfosTD C;
     SalleinfosTD D;
     SalleinfosTD E;
     SalleinfosTD F;
     SalleinfosTD J;
     SalleinfosTD H;
     SalleinfosTD I;
     SalleinfosTD G;
     SalleinfosTD AA;
     SalleinfosTD BB;
     SalleinfosTD CC;
     SalleinfosTD DD;
     SalleinfosTD EE;
     SalleinfosTD FF;
     SalleinfosTD JJ;
     SalleinfosTD HH;
     SalleinfosTD II;
     SalleinfosTD GG;
     A.num=1;
     A.bloc='A';
     for(i=0;i<7;i++){
        strcpy(A.jour[i].premier,"Disponible");
        strcpy(A.jour[i].deuxieme,"Disponible");
        strcpy(A.jour[i].troixieme,"Disponible");
        strcpy(A.jour[i].quatrieme,"Disponible");
        strcpy(A.jour[i].cinqueme,"Disponible");
        strcpy(A.jour[i].sixeme,"Disponible");
     }
     B.num=2;
     B.bloc='A';
     for(i=0;i<7;i++){
        strcpy(B.jour[i].premier,"Disponible");
        strcpy(B.jour[i].deuxieme,"Disponible");
        strcpy(B.jour[i].troixieme,"Disponible");
        strcpy(B.jour[i].quatrieme,"Disponible");
        strcpy(B.jour[i].cinqueme,"Disponible");
        strcpy(B.jour[i].sixeme,"Disponible");
     }
      C.num=3;
      C.bloc='A';
     for(i=0;i<7;i++){
        strcpy(C.jour[i].premier,"Disponible");
        strcpy(C.jour[i].deuxieme,"Disponible");
        strcpy(C.jour[i].troixieme,"Disponible");
        strcpy(C.jour[i].quatrieme,"Disponible");
        strcpy(C.jour[i].cinqueme,"Disponible");
        strcpy(C.jour[i].sixeme,"Disponible");
     }
      D.num=4;
      D.bloc='A';
     for(i=0;i<7;i++){
        strcpy(D.jour[i].premier,"Disponible");
        strcpy(D.jour[i].deuxieme,"Disponible");
        strcpy(D.jour[i].troixieme,"Disponible");
        strcpy(D.jour[i].quatrieme,"Disponible");
        strcpy(D.jour[i].cinqueme,"Disponible");
        strcpy(D.jour[i].sixeme,"Disponible");
     }
     E.num=5;
     E.bloc='A';
     for(i=0;i<7;i++){
        strcpy(E.jour[i].premier,"Disponible");
        strcpy(E.jour[i].deuxieme,"Disponible");
        strcpy(E.jour[i].troixieme,"Disponible");
        strcpy(E.jour[i].quatrieme,"Disponible");
        strcpy(E.jour[i].cinqueme,"Disponible");
        strcpy(E.jour[i].sixeme,"Disponible");
     }
     F.num=6;
     F.bloc='A';
     for(i=0;i<7;i++){
        strcpy(F.jour[i].premier,"Disponible");
        strcpy(F.jour[i].deuxieme,"Disponible");
        strcpy(F.jour[i].troixieme,"Disponible");
        strcpy(F.jour[i].quatrieme,"Disponible");
        strcpy(F.jour[i].cinqueme,"Disponible");
        strcpy(F.jour[i].sixeme,"Disponible");
     }
     J.num=7;
     J.bloc='A';
     for(i=0;i<7;i++){
        strcpy(J.jour[i].premier,"Disponible");
        strcpy(J.jour[i].deuxieme,"Disponible");
        strcpy(J.jour[i].troixieme,"Disponible");
        strcpy(J.jour[i].quatrieme,"Disponible");
        strcpy(J.jour[i].cinqueme,"Disponible");
        strcpy(J.jour[i].sixeme,"Disponible");
     }
     H.num=8;
     H.bloc='A';
     for(i=0;i<7;i++){
        strcpy(H.jour[i].premier,"Disponible");
        strcpy(H.jour[i].deuxieme,"Disponible");
        strcpy(H.jour[i].troixieme,"Disponible");
        strcpy(H.jour[i].quatrieme,"Disponible");
        strcpy(H.jour[i].cinqueme,"Disponible");
        strcpy(H.jour[i].sixeme,"Disponible");
     }
     I.num=9;
     I.bloc='A';
     for(i=0;i<7;i++){
        strcpy(I.jour[i].premier,"Disponible");
        strcpy(I.jour[i].deuxieme,"Disponible");
        strcpy(I.jour[i].troixieme,"Disponible");
        strcpy(I.jour[i].quatrieme,"Disponible");
        strcpy(I.jour[i].cinqueme,"Disponible");
        strcpy(I.jour[i].sixeme,"Disponible");
     }
     G.num=10;
     G.bloc='A';
     for(i=0;i<7;i++){
        strcpy(G.jour[i].premier,"Disponible");
        strcpy(G.jour[i].deuxieme,"Disponible");
        strcpy(G.jour[i].troixieme,"Disponible");
        strcpy(G.jour[i].quatrieme,"Disponible");
        strcpy(G.jour[i].cinqueme,"Disponible");
        strcpy(G.jour[i].sixeme,"Disponible");
     }
      FILE *STD = fopen("salleTDinfos.DAT", "ab");
       if (STD == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
       }
      fwrite(&A,sizeof(SalleinfosTD),1,STD);
      fwrite(&B,sizeof(SalleinfosTD),1,STD);
      fwrite(&C,sizeof(SalleinfosTD),1,STD);
      fwrite(&D,sizeof(SalleinfosTD),1,STD);
      fwrite(&E,sizeof(SalleinfosTD),1,STD);
      fwrite(&F,sizeof(SalleinfosTD),1,STD);
      fwrite(&J,sizeof(SalleinfosTD),1,STD);
      fwrite(&H,sizeof(SalleinfosTD),1,STD);
      fwrite(&I,sizeof(SalleinfosTD),1,STD);
      fwrite(&G,sizeof(SalleinfosTD),1,STD);
      fclose(STD);


       AA.num=1;
     AA.bloc='N';
     for(i=0;i<7;i++){
        strcpy(AA.jour[i].premier,"Disponible");
        strcpy(AA.jour[i].deuxieme,"Disponible");
        strcpy(AA.jour[i].troixieme,"Disponible");
        strcpy(AA.jour[i].quatrieme,"Disponible");
        strcpy(AA.jour[i].cinqueme,"Disponible");
        strcpy(AA.jour[i].sixeme,"Disponible");
     }
     BB.num=2;
     BB.bloc='N';
     for(i=0;i<7;i++){
        strcpy(BB.jour[i].premier,"Disponible");
        strcpy(BB.jour[i].deuxieme,"Disponible");
        strcpy(BB.jour[i].troixieme,"Disponible");
        strcpy(BB.jour[i].quatrieme,"Disponible");
        strcpy(BB.jour[i].cinqueme,"Disponible");
        strcpy(BB.jour[i].sixeme,"Disponible");
     }
      CC.num=3;
      CC.bloc='N';
     for(i=0;i<7;i++){
        strcpy(CC.jour[i].premier,"Disponible");
        strcpy(CC.jour[i].deuxieme,"Disponible");
        strcpy(CC.jour[i].troixieme,"Disponible");
        strcpy(CC.jour[i].quatrieme,"Disponible");
        strcpy(CC.jour[i].cinqueme,"Disponible");
        strcpy(CC.jour[i].sixeme,"Disponible");
     }
      DD.num=4;
      DD.bloc='N';
     for(i=0;i<7;i++){
        strcpy(DD.jour[i].premier,"Disponible");
        strcpy(DD.jour[i].deuxieme,"Disponible");
        strcpy(DD.jour[i].troixieme,"Disponible");
        strcpy(DD.jour[i].quatrieme,"Disponible");
        strcpy(DD.jour[i].cinqueme,"Disponible");
        strcpy(DD.jour[i].sixeme,"Disponible");
     }
     EE.num=5;
     EE.bloc='N';
     for(i=0;i<7;i++){
        strcpy(EE.jour[i].premier,"Disponible");
        strcpy(EE.jour[i].deuxieme,"Disponible");
        strcpy(EE.jour[i].troixieme,"Disponible");
        strcpy(EE.jour[i].quatrieme,"Disponible");
        strcpy(EE.jour[i].cinqueme,"Disponible");
        strcpy(EE.jour[i].sixeme,"Disponible");
     }
     FF.num=6;
     FF.bloc='N';
     for(i=0;i<7;i++){
        strcpy(FF.jour[i].premier,"Disponible");
        strcpy(FF.jour[i].deuxieme,"Disponible");
        strcpy(FF.jour[i].troixieme,"Disponible");
        strcpy(FF.jour[i].quatrieme,"Disponible");
        strcpy(FF.jour[i].cinqueme,"Disponible");
        strcpy(FF.jour[i].sixeme,"Disponible");
     }
     JJ.num=7;
     JJ.bloc='N';
     for(i=0;i<7;i++){
        strcpy(JJ.jour[i].premier,"Disponible");
        strcpy(JJ.jour[i].deuxieme,"Disponible");
        strcpy(JJ.jour[i].troixieme,"Disponible");
        strcpy(JJ.jour[i].quatrieme,"Disponible");
        strcpy(JJ.jour[i].cinqueme,"Disponible");
        strcpy(JJ.jour[i].sixeme,"Disponible");
     }
     HH.num=8;
     HH.bloc='N';
     for(i=0;i<7;i++){
        strcpy(HH.jour[i].premier,"Disponible");
        strcpy(HH.jour[i].deuxieme,"Disponible");
        strcpy(HH.jour[i].troixieme,"Disponible");
        strcpy(HH.jour[i].quatrieme,"Disponible");
        strcpy(HH.jour[i].cinqueme,"Disponible");
        strcpy(HH.jour[i].sixeme,"Disponible");
     }
     II.num=9;
     II.bloc='N';
     for(i=0;i<7;i++){
        strcpy(II.jour[i].premier,"Disponible");
        strcpy(II.jour[i].deuxieme,"Disponible");
        strcpy(II.jour[i].troixieme,"Disponible");
        strcpy(II.jour[i].quatrieme,"Disponible");
        strcpy(II.jour[i].cinqueme,"Disponible");
        strcpy(II.jour[i].sixeme,"Disponible");
     }
     GG.num=10;
     GG.bloc='N';
     for(i=0;i<7;i++){
        strcpy(GG.jour[i].premier,"Disponible");
        strcpy(GG.jour[i].deuxieme,"Disponible");
        strcpy(GG.jour[i].troixieme,"Disponible");
        strcpy(GG.jour[i].quatrieme,"Disponible");
        strcpy(GG.jour[i].cinqueme,"Disponible");
        strcpy(GG.jour[i].sixeme,"Disponible");
     }
      STD = fopen("salleTDinfos.DAT", "ab");
       if (STD == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
       }
      fwrite(&AA,sizeof(SalleinfosTD),1,STD);
      fwrite(&BB,sizeof(SalleinfosTD),1,STD);
      fwrite(&CC,sizeof(SalleinfosTD),1,STD);
      fwrite(&DD,sizeof(SalleinfosTD),1,STD);
      fwrite(&EE,sizeof(SalleinfosTD),1,STD);
      fwrite(&FF,sizeof(SalleinfosTD),1,STD);
      fwrite(&JJ,sizeof(SalleinfosTD),1,STD);
      fwrite(&HH,sizeof(SalleinfosTD),1,STD);
      fwrite(&II,sizeof(SalleinfosTD),1,STD);
      fwrite(&GG,sizeof(SalleinfosTD),1,STD);
      fclose(STD);

     SalleinfosTP K;
     SalleinfosTP L;
     SalleinfosTP M;
     SalleinfosTP N;
     SalleinfosTP O;
     SalleinfosTP P;
     K.num=01;
     for(i=0;i<7;i++){
        strcpy(K.jour[i].premier,"Disponible");
        strcpy(K.jour[i].deuxieme,"Disponible");
        strcpy(K.jour[i].troixieme,"Disponible");
        strcpy(K.jour[i].quatrieme,"Disponible");
        strcpy(K.jour[i].cinqueme,"Disponible");
        strcpy(K.jour[i].sixeme,"Disponible");
     }
     L.num=02;
     for(i=0;i<7;i++){
        strcpy(L.jour[i].premier,"Disponible");
        strcpy(L.jour[i].deuxieme,"Disponible");
        strcpy(L.jour[i].troixieme,"Disponible");
        strcpy(L.jour[i].quatrieme,"Disponible");
        strcpy(L.jour[i].cinqueme,"Disponible");
        strcpy(L.jour[i].sixeme,"Disponible");
     }
      M.num=03;
     for(i=0;i<7;i++){
        strcpy(M.jour[i].premier,"Disponible");
        strcpy(M.jour[i].deuxieme,"Disponible");
        strcpy(M.jour[i].troixieme,"Disponible");
        strcpy(M.jour[i].quatrieme,"Disponible");
        strcpy(M.jour[i].cinqueme,"Disponible");
        strcpy(M.jour[i].sixeme,"Disponible");
     }
      N.num=04;
     for(i=0;i<7;i++){
        strcpy(N.jour[i].premier,"Disponible");
        strcpy(N.jour[i].deuxieme,"Disponible");
        strcpy(N.jour[i].troixieme,"Disponible");
        strcpy(N.jour[i].quatrieme,"Disponible");
        strcpy(N.jour[i].cinqueme,"Disponible");
        strcpy(N.jour[i].sixeme,"Disponible");
     }
     O.num=05;
     for(i=0;i<7;i++){
        strcpy(O.jour[i].premier,"Disponible");
        strcpy(O.jour[i].deuxieme,"Disponible");
        strcpy(O.jour[i].troixieme,"Disponible");
        strcpy(O.jour[i].quatrieme,"Disponible");
        strcpy(O.jour[i].cinqueme,"Disponible");
        strcpy(O.jour[i].sixeme,"Disponible");
     }
     P.num=06;
     for(i=0;i<7;i++){
        strcpy(P.jour[i].premier,"Disponible");
        strcpy(P.jour[i].deuxieme,"Disponible");
        strcpy(P.jour[i].troixieme,"Disponible");
        strcpy(P.jour[i].quatrieme,"Disponible");
        strcpy(P.jour[i].cinqueme,"Disponible");
        strcpy(P.jour[i].sixeme,"Disponible");
     }
      FILE *STP = fopen("salleTPinfos.DAT", "ab");
       if (STP == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
       }
      fwrite(&K,sizeof(SalleinfosTP),1,STP);
      fwrite(&L,sizeof(SalleinfosTP),1,STP);
      fwrite(&M,sizeof(SalleinfosTP),1,STP);
      fwrite(&N,sizeof(SalleinfosTP),1,STP);
      fwrite(&O,sizeof(SalleinfosTP),1,STP);
      fwrite(&P,sizeof(SalleinfosTP),1,STP);
      fclose(STP);


     SalleinfosAM AAA;
     SalleinfosAM BBB;
     AAA.nom='A';
     for(i=0;i<7;i++){
        strcpy(AAA.jour[i].premier,"Disponible");
        strcpy(AAA.jour[i].deuxieme,"Disponible");
        strcpy(AAA.jour[i].troixieme,"Disponible");
        strcpy(AAA.jour[i].quatrieme,"Disponible");
        strcpy(AAA.jour[i].cinqueme,"Disponible");
        strcpy(AAA.jour[i].sixeme,"Disponible");
     }
     BBB.nom='B';
     for(i=0;i<7;i++){
        strcpy(BBB.jour[i].premier,"Disponible");
        strcpy(BBB.jour[i].deuxieme,"Disponible");
        strcpy(BBB.jour[i].troixieme,"Disponible");
        strcpy(BBB.jour[i].quatrieme,"Disponible");
        strcpy(BBB.jour[i].cinqueme,"Disponible");
        strcpy(BBB.jour[i].sixeme,"Disponible");
     }
      FILE *SAM = fopen("salleAMinfos.DAT", "ab");
       if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
       }
      fwrite(&AAA,sizeof(SalleinfosAM),1,SAM);
      fwrite(&BBB,sizeof(SalleinfosAM),1,SAM);
      fclose(SAM);


}
void ajouter_salle_tp() {
        int numSalle,i;
        SalleinfosTP Y;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(9);
    gotoxy(48, 13);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(48, 16);
    printf("|         Numero :                                             |");
    setColor(9);
    gotoxy(48, 19);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(71,16);
    scanf("%d", &numSalle);

    FILE *STP = fopen("salleTPinfos.DAT", "rb");
         if (STP == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
          }
    while(fread(&Y,sizeof(SalleinfosTP),1,STP) != NULL){
        if(Y.num==numSalle){
            setColor(9);
            gotoxy(47, 21);
            printf("+--------------------------------------------------------------+");
            gotoxy(47, 23);
            setColor(7);
            printf("             Ce numero de salle est deja existe !");
            gotoxy(47, 25);
            setColor(9);
            printf("             Appuyez sur une touche pour ressayer...");
            gotoxy(47, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(99, 25);
            getch();
            ajouter_salle_tp();
         }
    }
    fclose(STP);

     Y.num=numSalle;
     for(i=0;i<7;i++){
        strcpy(Y.jour[i].premier,"Disponible");
        strcpy(Y.jour[i].deuxieme,"Disponible");
        strcpy(Y.jour[i].troixieme,"Disponible");
        strcpy(Y.jour[i].quatrieme,"Disponible");
        strcpy(Y.jour[i].cinqueme,"Disponible");
        strcpy(Y.jour[i].sixeme,"Disponible");
     }
      STP = fopen("salleTPinfos.DAT", "ab");
         if (STP == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
          }
      fwrite(&Y,sizeof(SalleinfosTP),1,STP);
      fclose(STP);
    setColor(9);
    gotoxy(47, 21);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(47, 23);
    printf("                Salle TP ajoutee avec succes !");
    setColor(9);
    gotoxy(47, 25);
    printf("  Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(47, 27);
    printf("+--------------------------------------------------------------+");
    gotoxy(108, 25);
    getch();
    espaceadmin();
}
void ajouter_salle_td() {
    int numeroSalle;
    char bloc;
    SalleinfosTD A;
    system("cls");
   setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(47, 12);
    setColor(9);
    printf("+---------------------------------------------------------------+");
    gotoxy(47, 14);
    setColor(7);
    printf("|       Numero de la salle:                                     |");
    gotoxy(47, 16);
    printf("|       Bloc (A/N):                                             |");
    gotoxy(47, 18);
    setColor(9);
    printf("+---------------------------------------------------------------+");
     setColor(7);
    gotoxy(77, 14);
    scanf("%d",&numeroSalle);
    gotoxy(67, 16);
    scanf(" %c",&bloc);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
         if (STD== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
    while(fread(&A,sizeof(SalleinfosTD),1,STD) != NULL){
        if(A.num==numeroSalle){
            setColor(9);
            gotoxy(47, 21);
            printf("+---------------------------------------------------------------+");
            gotoxy(47, 23);
            setColor(7);
            printf("            Ce numero de salle est deja existe !");
            gotoxy(47, 25);
            setColor(9);
            printf("            Appuyez sur une touche pour ressayer...");
            gotoxy(47, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(101, 25);
            getch();
            ajouter_salle_td();
         }
    }
    fclose(STD);

     A.num=numeroSalle;
     A.bloc=bloc;
     for(int i=0;i<7;i++){
        strcpy(A.jour[i].premier,"Disponible");
        strcpy(A.jour[i].deuxieme,"Disponible");
        strcpy(A.jour[i].troixieme,"Disponible");
        strcpy(A.jour[i].quatrieme,"Disponible");
        strcpy(A.jour[i].cinqueme,"Disponible");
        strcpy(A.jour[i].sixeme,"Disponible");
     }
     STD = fopen("salleTDinfos.DAT", "ab");
         if (STD== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
    fwrite(&A,sizeof(SalleinfosTD),1,STD);
    fclose(STD);
     setColor(9);
    gotoxy(47, 21);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(47, 23);
    printf("               Salle TD ajoutee avec succes !");
    setColor(9);
    gotoxy(47, 25);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(47, 27);
    printf("+--------------------------------------------------------------+");
    gotoxy(107, 25);
    getch();
    espaceadmin();
}
void ajouter_salle_amphi() {
    char nomSalle;
    SalleinfosAM Z;
    system("cls");
   setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(9);
    gotoxy(47, 13);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(47, 16);
    printf("|       Nom de l\'amphi (Un Caractere) :                       |");
    setColor(9);
    gotoxy(47, 19);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(88,16);
    scanf(" %c",&nomSalle);

    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
        if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier salles.txt");
        exit(0);
       }
    while(fread(&Z,sizeof(SalleinfosAM),1,SAM) != NULL){
        if(Z.nom==nomSalle){
            setColor(9);
            gotoxy(47, 21);
            printf("+--------------------------------------------------------------+");
            gotoxy(47, 23);
            setColor(7);
            printf("            Ce nom de salle est deja existe !");
            gotoxy(47, 25);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(47, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(99, 25);
            getch();
            ajouter_salle_amphi();
         }
    }
    fclose(SAM);
     Z.nom=nomSalle;
     for(int i=0;i<7;i++){
        strcpy(Z.jour[i].premier,"Disponible");
        strcpy(Z.jour[i].deuxieme,"Disponible");
        strcpy(Z.jour[i].troixieme,"Disponible");
        strcpy(Z.jour[i].quatrieme,"Disponible");
        strcpy(Z.jour[i].cinqueme,"Disponible");
        strcpy(Z.jour[i].sixeme,"Disponible");
     }
      SAM = fopen("salleAMinfos.DAT", "ab");
        if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier salles.txt");
        exit(0);
      }
      fwrite(&Z,sizeof(SalleinfosAM),1,SAM);
      fclose(SAM);
    setColor(9);
    gotoxy(47, 21);
    printf("+---------------------------------------------------------------+");
    gotoxy(47, 23);
    setColor(7);
    printf("              Salle Amphi ajoutee avec succes !");
    gotoxy(47, 25);
    setColor(9);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(47, 27);
    printf("+---------------------------------------------------------------+");
    gotoxy(107, 25);
    getch();
    espaceadmin();
}
void ajout_menu() {
    int choix;
     system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,10);
    printf(" ==============================================================");
     gotoxy(46,12);
     setColor(7);
     printf("                 Menu d\'ajout des salles :                    ");
     gotoxy(46,14);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,16);
    printf("||       1. Ajouter une salle TP                              ||");
    gotoxy(46,18);
    printf("||       2. Ajouter une salle TD :                            ||");
    gotoxy(46,20);
    printf("||       3. Ajouter une salle Amphi :                         ||");
    gotoxy(46,22);
    printf("||       4. Retour au menu principale :                       ||");
    gotoxy(46,24);
    printf("||       5. Quitter :                                         ||");
    gotoxy(46,26);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,28);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,30);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,32);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,30);
    scanf("%d/n", &choix);
        switch (choix) {
        case 1:
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ajouter_salle_tp();
            break;
        case 2:
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ajouter_salle_td();
            break;
        case 3:
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ajouter_salle_amphi();
            break;

       case 4 :
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            system("cls");
            espaceadmin();
            break;

        case 5 :
            printf("\n\n\n");
            exit(0);
            break;
        default:
        setColor(7);
         gotoxy(46,30);
         printf("              CHOIX INCORRECTE !!                               ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                               ");
            goto moore;
    }
}
void supprimer_menu(){
     int choix;
        system("cls");
        setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,10);
    printf(" ==============================================================");
     gotoxy(46,12);
     setColor(7);
     printf("               Menu de suppression des salles :                ");
     gotoxy(46,14);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,16);
    printf("||       1. Ajouter une salle TP                              ||");
    gotoxy(46,18);
    printf("||       2. Ajouter une salle TD :                            ||");
    gotoxy(46,20);
    printf("||       3. Ajouter une salle Amphi :                         ||");
    gotoxy(46,22);
    printf("||       4. Retour au menu principale :                       ||");
    gotoxy(46,24);
    printf("||       5. Quitter :                                         ||");
    gotoxy(46,26);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,28);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,30);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,32);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,30);
    scanf("%d/n", &choix);

        switch (choix) {
        case 1:
             sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            supprimer_salle_tp();
            break;
        case 2:
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            supprimer_salle_td();
            break;
        case 3:
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            supprimer_salle_amphi();
            break;

        case 4 :
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            system("cls");
            espaceadmin();
            break;

        case 5 :
            printf("\n\n\n");
            exit(0);
            break;

        default:
        setColor(7);
         gotoxy(46,30);
         printf("           CHOIX INCORRECTE !!                                 ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                               ");
            goto moore;
    }
}
void supprimer_salle_tp(){
    int numSalle,i,j=0;
    SalleinfosTP K;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(9);
    gotoxy(48, 13);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(48, 16);
    printf("|         Numero :                                             |");
    setColor(9);
    gotoxy(48, 19);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(71,16);
    scanf("%d", &numSalle);

    FILE *STP = fopen("salleTPinfos.DAT", "rb");
         if (STP == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
          }
    FILE *A= fopen("temp.DAT", "ab");
            if (A == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
            }
    while(fread(&K,sizeof(SalleinfosTP),1,STP) != NULL){
        if(K.num!=numSalle){
           fwrite(&K,sizeof(SalleinfosTP),1,A);
         }
        if(K.num==numSalle){
            j++;
            continue;
        }

    }
    fclose(STP);
    fclose(A);

     if(j==0){
            remove("temp.DAT");
            setColor(9);
            gotoxy(48, 21);
            printf("+---------------------------------------------------------------+");
            gotoxy(48, 23);
            setColor(7);
            printf("             Ce numero de salle n\'est pas existe !");
            gotoxy(48, 25);
            setColor(9);
            printf("             Appuyez sur une touche pour ressayer...");
            gotoxy(48, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(103, 25);
            getch();
            system("cls");
            supprimer_salle_tp();
         }
     else{
        remove("salleTPinfos.DAT");
        rename("temp.DAT","salleTPinfos.DAT");
     }


    setColor(9);
    gotoxy(48, 21);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(48, 23);
    printf("            Salle TP est supprimee avec succes !");
    setColor(9);
    gotoxy(48, 25);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(48, 27);
    printf("+--------------------------------------------------------------+");
    gotoxy(109, 25);
    getch();
    espaceadmin();
}
void supprimer_salle_td(){
    int i,j=0;
    int numeroSalle;
    char bloc;
    SalleinfosTD K;
    system("cls");
     setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(47, 12);
    setColor(9);
    printf("+---------------------------------------------------------------+");
    gotoxy(47, 14);
    setColor(7);
    printf("|       Numero de la salle:                                     |");
    gotoxy(47, 16);
    printf("|       Bloc (A/N):                                             |");
    gotoxy(47, 18);
    setColor(9);
    printf("+---------------------------------------------------------------+");
     setColor(7);
    gotoxy(77, 14);
    scanf("%d",&numeroSalle);
    gotoxy(67, 16);
    scanf(" %c",&bloc);

    FILE *STD = fopen("salleTDinfos.DAT", "rb");
         if (STD == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
          }
    FILE *A= fopen("temp.DAT", "ab");
            if (A == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
            }
    while(fread(&K,sizeof(SalleinfosTD),1,STD) != NULL){
        if((K.num!=numeroSalle) && (K.bloc!=bloc)){
           fwrite(&K,sizeof(SalleinfosTD),1,A);
         }
        if((K.num==numeroSalle) && (K.bloc==bloc)){
            j++;
            continue;
        }

    }
    fclose(STD);
    fclose(A);

     if(j==0){
            remove("temp.DAT");
            setColor(9);
            gotoxy(48, 21);
            printf("+---------------------------------------------------------------+");
            gotoxy(48, 23);
            setColor(7);
            printf("                Cette salle n\'est pas existe !");
            gotoxy(48, 25);
            setColor(9);
            printf("             Appuyez sur une touche pour ressayer...");
            gotoxy(48, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(103, 25);
            getch();
            system("cls");
            supprimer_salle_td();
         }
     else{
        remove("salleTDinfos.DAT");
        rename("temp.DAT","salleTDinfos.DAT");
     }


    setColor(9);
    gotoxy(48, 21);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(48, 22);
    printf("             Salle TD est supprimee avec succes !");
    setColor(9);
    gotoxy(48, 24);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(48, 26);
    printf("+--------------------------------------------------------------+");
    gotoxy(109, 24);
    getch();
    espaceadmin();
}
void supprimer_salle_amphi(){
    int i,j;
    char nomSalle;
    SalleinfosAM K;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(9);
    gotoxy(47, 13);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(47, 16);
    printf("|       Nom de l\'amphi (Un Caractere) :                       |");
    setColor(9);
    gotoxy(47, 19);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(88,16);
    scanf(" %c",&nomSalle);

    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
         if (SAM == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
          }
    FILE *A= fopen("temp.DAT", "ab");
            if (A == NULL) {
             perror("Erreur lors de l'ouverture du fichier salles.txt");
              exit(0);
            }
    j=0;
    while(fread(&K,sizeof(SalleinfosAM),1,SAM) != NULL){
        if(K.nom!=nomSalle){
           fwrite(&K,sizeof(SalleinfosAM),1,A);
         }
        if(K.nom==nomSalle){
            j++;
            continue;
        }

    }
    fclose(SAM);
    fclose(A);

     if(j==0){
            remove("temp.DAT");
            setColor(9);
            gotoxy(48, 21);
            printf("+---------------------------------------------------------------+");
            gotoxy(48, 23);
            setColor(7);
            printf("             Ce nom de salle n\'est pas existe !");
            gotoxy(48, 25);
            setColor(9);
            printf("             Appuyez sur une touche pour ressayer...");
            gotoxy(48, 27);
            printf("+---------------------------------------------------------------+");
            gotoxy(103, 24);
            getch();
            system("cls");
            supprimer_salle_amphi();
         }
     else{
        remove("salleAMinfos.DAT");
        rename("temp.DAT","salleAMinfos.DAT");
     }


    setColor(9);
    gotoxy(48, 21);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(48, 22);
    printf("            Salle AMPHI est supprimee avec succes !");
    setColor(9);
    gotoxy(48, 24);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(48, 26);
    printf("+--------------------------------------------------------------+");
    gotoxy(109, 24);
    getch();
    espaceadmin();
}
void status_salle(){
    int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    setColor(7);
    gotoxy(66,8);
    printf("| Choix de Salle : |");
    gotoxy(46,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,11);
    printf("                    1. Les Salles de TD                     \n");
    setColor(9);
    gotoxy(46,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(46,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,17);
    printf("                    2. Les Salles de TP                     \n");
    setColor(9);
    gotoxy(46,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(46,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,23);
    printf("                    3. Les Amphis                     \n");
    setColor(9);
    gotoxy(46,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(46,28);
    printf("                                                                 ");
    gotoxy(46,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(46,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(46,31);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(96,29);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                statustd();
                   break;

              case 2:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 statustp();
                   break;

              case 3:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                statusamphi();
              break;

        default:
        gotoxy(46,27);
        printf("                                                               ");
        gotoxy(46,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(46,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                              ");
        setColor(9);
        gotoxy(46,30);
        printf("          Appuyer sur une touche pour continuer :");
        getch();
        gotoxy(46,28);
        printf("                                                               ");
        gotoxy(46,30);
        printf("                                                                ");
        setColor(7);
        goto AGGGAIN;
    }
}
void statustd(){
    int choice;
    int numeroSalle,j;
    char bloc;
    char jour[15];
    SalleinfosTD A;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
   setColor(7);
    gotoxy(31,8);
    printf("| Choix de Jour : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("              1. Lundi                   2. Mardi      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("              3. Mercredi                4. Jeudi      \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("              5. Vendredi                6. Samedi      \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(10,28);
    printf("                                                                 ");
    gotoxy(10,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(10,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(10,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(10,31);
    printf(" ==============================================================");
    gotoxy(86, 12);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    gotoxy(86, 14);
    setColor(7);
    printf("|       Numero de la salle:                                    |");
    gotoxy(86, 16);
    printf("|       Bloc (A/N):                                            |");
    gotoxy(86, 18);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(56,29);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(10,27);
        printf("                                                               ");
        gotoxy(10,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(10,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                        ");
        setColor(9);
        gotoxy(10,30);
        printf("          Appuyer sur une touche pour continuer : ");
        getch();
        setColor(7);
        gotoxy(10,28);
        printf("                                                               ");
        gotoxy(10,30);
        printf("                                                               ");
        goto AGGGAIN;
    }

    setColor(7);
    gotoxy(115, 14);
    scanf("%d",&numeroSalle);
    gotoxy(107, 16);
    scanf(" %c",&bloc);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
         if (STD== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosTD),1,STD) != NULL){
        if( (A.num==numeroSalle) && (A.bloc==bloc) ){
            j++;
         }
    }
    fclose(STD);
    if(j==0){
            setColor(9);
            gotoxy(86, 20);
             printf("+--------------------------------------------------------------+");
            gotoxy(86, 22);
            setColor(7);
            printf("           Cette Salle n\'existe pas !");
            gotoxy(86, 24);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(86, 26);
            printf("+---------------------------------------------------------------+");
            gotoxy(136, 24);
            getch();
            system("cls");
            statustd();
    }
    else{
        sstd(choice,jour,numeroSalle,bloc);
    }


}
void statustp(){
    int choice;
    int numeroSalle,j;
    char jour[15];
    SalleinfosTP A;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
   setColor(7);
    gotoxy(31,8);
    printf("| Choix de Jour : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("              1. Lundi                   2. Mardi      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("              3. Mercredi                4. Jeudi      \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("              5. Vendredi                6. Samedi      \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(10,28);
    printf("                                                                 ");
    gotoxy(10,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(10,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(10,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(10,31);
    printf(" ==============================================================");
    gotoxy(86, 12);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    gotoxy(86, 15);
    setColor(7);
    printf("|       Numero de la salle:                                    |");
    gotoxy(86, 18);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(56,29);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(10,27);
        printf("                                                               ");
        gotoxy(10,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(10,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                          ");
        setColor(9);
        gotoxy(10,30);
        printf("          Appuyer sur une touche pour continuer : ");
        getch();
        setColor(7);
        gotoxy(10,28);
        printf("                                                               ");
        gotoxy(10,30);
        printf("                                                               ");
        goto AGGGAIN;
    }

    setColor(7);
    gotoxy(115, 15);
    scanf("%d",&numeroSalle);
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
         if (STP== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosTP),1,STP) != NULL){
        if(A.num==numeroSalle){
            j++;
         }
    }
    fclose(STP);
    if(j==0){
             setColor(9);
            gotoxy(86, 20);
             printf("+--------------------------------------------------------------+");
            gotoxy(86, 22);
            setColor(7);
            printf("           Cette Salle n\'existe pas !");
            gotoxy(86, 24);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(86, 26);
            printf("+---------------------------------------------------------------+");
            gotoxy(136, 24);
            getch();
            system("cls");
            statustp();
    }
    else{
        sstp(choice,jour,numeroSalle);
    }


}
void statusamphi(){
    int choice,j;
    char nomSalle;
    char jour[15];
    SalleinfosAM A;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
   setColor(7);
    gotoxy(31,8);
    printf("| Choix de Jour : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("              1. Lundi                   2. Mardi      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("              3. Mercredi                4. Jeudi      \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("              5. Vendredi                6. Samedi      \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(10,28);
    printf("                                                                 ");
    gotoxy(10,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(10,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(10,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(10,31);
    printf(" ==============================================================");
    gotoxy(86, 12);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(86, 15);
    printf("|       Nom de l\'amphi (Un Caractere) :                       |");
    gotoxy(86, 18);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(56,29);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(10,27);
        printf("                                                               ");
        gotoxy(10,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(10,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                        ");
        setColor(9);
        gotoxy(10,30);
        printf("          Appuyer sur une touche pour continuer : ");
        getch();
        setColor(7);
        gotoxy(10,28);
        printf("                                                               ");
        gotoxy(10,30);
        printf("                                                               ");
        goto AGGGAIN;
    }
    setColor(7);
    gotoxy(128, 15);
    scanf(" %c",&nomSalle);
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
         if (SAM== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosAM),1,SAM) != NULL){
        if(A.nom==nomSalle){
            j++;
         }
    }
    fclose(SAM);
    if(j==0){
             setColor(9);
            gotoxy(86, 20);
             printf("+--------------------------------------------------------------+");
            gotoxy(86, 22);
            setColor(7);
            printf("           Cette Salle n\'existe pas !");
            gotoxy(86, 24);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(86, 26);
            printf("+---------------------------------------------------------------+");
            gotoxy(136, 24);
            getch();
            system("cls");
            statusamphi();
    }
    else{
        ssamphi(choice,jour,nomSalle);
    }


}
void sstd(int choice,char *jour,int numeroSalle,char bloc){
    int i,j;
    system("cls");
     setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,9);
    printf("==============================================================");
     gotoxy(46,11);
     setColor(7);
     printf("           La Salle TD %d Bloc %c en %s :            ",numeroSalle,bloc,jour);
     gotoxy(46,13);
     setColor(9);
    printf("==============================================================");
    setColor(7);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
      if (STD == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosTD A;
      j=0;
      while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
        if( (A.num==numeroSalle) && (A.bloc==bloc) ){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,15);
    printf("||             8:30  -> 10:30 : %s                ",A.jour[choice-1].premier);
              gotoxy(46,17);
    printf("||             10:30 -> 12:30 : %s                ",A.jour[choice-1].deuxieme);
              gotoxy(46,19);
    printf("||             14:30 -> 16:30 : %s                ",A.jour[choice-1].troixieme);
              gotoxy(46,21);
    printf("||             16:30 -> 18:30 : %s                ",A.jour[choice-1].quatrieme);
              gotoxy(46,23);
    printf("||             19:00 -> 21:00 : %s                ",A.jour[choice-1].cinqueme);
              gotoxy(46,25);
    printf("||             21:00 -> 23:00 : %s                ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
    gotoxy(46,27);
    setColor(9);
    printf("==============================================================");
    fclose(STD);
    setColor(9);
    gotoxy(46, 29);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 31);
    setColor(7);
    printf(" C'est l'emploi de %s de la Salle TD %d Bloc %c",jour,numeroSalle,bloc);
    gotoxy(46, 33);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 35);
    setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 33);
    getch();
    system("cls");
    if(ll!=0){
        espace_ca();
    }
    espaceadmin();

}
void sstp(int choice,char *jour,int numeroSalle){
    int i,j;
    system("cls");
   setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,9);
    printf("==============================================================");
     gotoxy(46,11);
     setColor(7);
     printf("               La Salle TP %d en %s :            ",numeroSalle,jour);
     gotoxy(46,13);
     setColor(9);
    printf("==============================================================");
     setColor(7);
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
      if (STP == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosTP A;
      j=0;
      while(fread(&A,sizeof(SalleinfosTP),1,STP)!=NULL){
        if(A.num==numeroSalle){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,15);
    printf("||            8:30  -> 10:30 : %s                     ",A.jour[choice-1].premier);
              gotoxy(46,17);
    printf("||            10:30 -> 12:30 : %s                     ",A.jour[choice-1].deuxieme);
              gotoxy(46,19);
    printf("||            14:30 -> 16:30 : %s                     ",A.jour[choice-1].troixieme);
              gotoxy(46,21);
    printf("||            16:30 -> 18:30 : %s                     ",A.jour[choice-1].quatrieme);
              gotoxy(46,23);
    printf("||            19:00 -> 21:00 : %s                     ",A.jour[choice-1].cinqueme);
              gotoxy(46,25);
    printf("||            21:00 -> 23:00 : %s                     ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
      fclose(STP);
     gotoxy(46,27);
    setColor(9);
    printf("==============================================================");
    setColor(9);
    gotoxy(46, 29);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 31);
    setColor(7);
    printf(" C'est l'emploi de %s de la Salle TP %d ",jour,numeroSalle);
    gotoxy(46, 33);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 35);
     setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 33);
    getch();
    system("cls");
    if(ll!=0){
       espace_ca();
    }
    espaceadmin();

}
void ssamphi(int choice,char *jour,char nomSalle){
    int i,j;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,9);
    printf("==============================================================");
     gotoxy(46,11);
     setColor(7);
     printf("                L\'AMPHI %c EN %s :            ",nomSalle,jour);
     gotoxy(46,13);
     setColor(9);
    printf("==============================================================");
     setColor(7);
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
      if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosAM A;
      j=0;
      while(fread(&A,sizeof(SalleinfosAM),1,SAM)!=NULL){
        if(A.nom==nomSalle){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,15);
    printf("||            8:30  -> 10:30 : %s              ",A.jour[choice-1].premier);
              gotoxy(46,17);
    printf("||            10:30 -> 12:30 : %s              ",A.jour[choice-1].deuxieme);
              gotoxy(46,19);
    printf("||            14:30 -> 16:30 : %s              ",A.jour[choice-1].troixieme);
              gotoxy(46,21);
    printf("||            16:30 -> 18:30 : %s              ",A.jour[choice-1].quatrieme);
              gotoxy(46,23);
    printf("||            19:00 -> 21:00 : %s              ",A.jour[choice-1].cinqueme);
              gotoxy(46,25);
    printf("||            21:00 -> 23:00 : %s              ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
      fclose(SAM);
      gotoxy(46,27);
    setColor(9);
    printf("==============================================================");
    setColor(9);
    gotoxy(46, 29);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 31);
    setColor(7);
    printf(" C'est l'emploi de %s de l\'amphi %c ",jour,nomSalle);
    gotoxy(46, 33);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 35);
     setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 33);
    getch();
    system("cls");
    if(ll!=0){
       espace_ca();
    }
    espaceadmin();

}

void espaceetud(){
    int choice;
    pp=0;
    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");


    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    gotoxy(46,8);
    printf(" ==============================================================");
     gotoxy(46,10);
     setColor(7);
     printf("                         Menu Etudiant :");
     gotoxy(46,12);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,14);
    printf("||      1. Effectuer une reservation de club :                ||");
    gotoxy(46,16);
    printf("||      2. Annuler une reservation de club :                  ||");
    gotoxy(46,18);
    printf("||      3. Status des Salles :                                ||");
    gotoxy(46,20);
    printf("||      4. Voir votre emploi du temps  :                      ||");
    gotoxy(46,22);
    printf("||      5. Voir les reservations des clubs :                  ||");
    gotoxy(46,24);
    printf("||      6. Code pour acces espace admin :                     ||");
     gotoxy(46,26);
    printf("||      7. Mon Profile :                                      ||");
    gotoxy(46,28);
    printf("||      8. Retour au page principale :                        ||");
     gotoxy(46,30);
    printf("||      9. Quitter :                                          ||");
    gotoxy(46,32);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,34);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,36);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,38);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,36);
    scanf("%d", &choice);
    switch (choice) {
              case 1:
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                effectuer_res_etud();
                   break;

              case 2:
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                 annuler_res_etud();
                   break;

              case 3:
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                status_salle_etud();
              break;

              case 4:
                  pp++;
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                voir_reservation();
              break;

              case 5:
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                voir_reservation_clubs();
              break;

              case 6:
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                code_admin();
              break;

              case 7:
                  pp++;
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                 system("cls");
                 menu_profile();
              break;

              case 8:
                  gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
                 system("cls");
                 signorlogin();
              break;

              case 9:
                  printf("\n\n");
                  exit(0);
                break;

        default:
        setColor(7);
         gotoxy(46,36);
         printf("           CHOIX INCORRECTE !!                                    ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,40);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(46,33);
            printf("                                                                 ");
            gotoxy(46,36);
            printf("                                                                 ");
            gotoxy(46,34);
            printf("                                                                 ");
            gotoxy(46,35);
            printf("                                                                 ");
            gotoxy(46,37);
            printf("                                                                 ");
            gotoxy(46,39);
            printf("                                                                 ");
            gotoxy(46,38);
            printf("                                                                 ");
            gotoxy(23,40);
         printf("                                                                                                                                                             ");
            goto moore;
    }
}

void effectuer_res_etud(){
     SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    int choice1,choice2,choice3,i=0,j=0;
    int k;
    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    gotoxy(14,8);
    setColor(7);
    printf("| Choix de Salle : |");
    gotoxy(2,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,11);
    printf("             1. Les Salles de TD              \n");
    setColor(9);
    gotoxy(2,13);
    printf("+--------------------------------------------+\n");
    gotoxy(2,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,17);
    printf("             2. Les Salles de TP               \n");
    setColor(9);
    gotoxy(2,19);
    printf("+--------------------------------------------+\n");
    gotoxy(2,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,23);
    printf("             3. Les Amphis               \n");
    setColor(9);
    gotoxy(2,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(4,30);
    printf("                                                       ");
    gotoxy(2,27);
    printf("==============================================");
    setColor(7);
    gotoxy(2,29);
    printf("||        Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(2,31);
    printf("==============================================");

    Again:
    setColor(7);
    gotoxy(68,8);
    printf("| Choix de Jour : |");
    gotoxy(53,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,11);
    printf("       1. Lundi           2. Mardi  \n");
    setColor(9);
    gotoxy(53,13);
    printf("+--------------------------------------------+\n");
    gotoxy(53,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,17);
    printf("       3. Mercredi        4. Jeudi  \n");
    setColor(9);
    gotoxy(53,19);
    printf("+--------------------------------------------+\n");
    gotoxy(53,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,23);
    printf("       5. Vendredi        6. Samedi  \n");
    setColor(9);
    gotoxy(53,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(53,27);
    printf("=============================================");
    setColor(7);
    gotoxy(53,29);
    printf("||      Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(53,31);
    printf("=============================================");
    setColor(7);

    Againnn:
    setColor(7);
    gotoxy(115,8);
    printf("| Choix d\'heure : |");
    gotoxy(103,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,11);
    printf("   1. 19:00 -> 21:00     2. 21:00 -> 23:00  \n");
    setColor(9);
    gotoxy(103,13);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(103,18);
    printf("                                                      ");
    gotoxy(103,15);
    printf("=============================================");
    setColor(7);
    gotoxy(103,17);
    printf("||     Veuillez entrer votre choix :        ||");
    setColor(9);
    gotoxy(103,19);
    printf("=============================================");

    if(i==0){
        setColor(7);
        gotoxy(43,29);
        scanf("%d", &choice1);
        switch (choice1) {
              case 1:
                  i++;
                   break;

             case 2:
                  i++;
                   break;

              case 3:
                  i++;
                  break;

        default:
        gotoxy(2,27);
        printf("                                                        ");
        gotoxy(2,28);
        setColor(9);
        printf("============================================== ");
        gotoxy(2,29);
        setColor(7);
        printf("   CHOIX INCORRECTE !!                              ");
        setColor(9);
        gotoxy(4,30);
        printf("   Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        effectuer_res_etud();
    }
    }

    if(j==0){
        setColor(7);
       gotoxy(92,29);
       scanf("%d", &choice2);
       switch (choice2) {
              case 1:
                  j++;
                   break;

              case 2:
                  j++;
                   break;

              case 3:
                  j++;
                   break;

              case 4:
                  j++;
                   break;

              case 5:
                  j++;
                   break;

              case 6:
                  j++;
                   break;

        default:
        gotoxy(53,27);
        printf("                                                        ");
        gotoxy(53,28);
        setColor(9);
        printf("==============================================");
        gotoxy(53,29);
        setColor(7);
        printf("    CHOIX INCORRECTE !!                          ");
        setColor(9);
        gotoxy(53,30);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(53,28);
        printf("                                                    ");
        gotoxy(53,30);
        printf("                                                     ");
        goto Again;

    }
    }
       k=0;
       setColor(7);
       gotoxy(141,17);
       scanf("%d/n", &choice3);
       switch (choice3){
              case 1:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].cinqueme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].cinqueme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].cinqueme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].cinqueme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                    gotoxy(103,15);
                    printf("                                                    ");
                    gotoxy(103,17);
                    printf("                                                     ");
                    gotoxy(103,19);
                    printf("                                                    ");
                    gotoxy(1,27);
                    printf("                                                                                                                                       ");
                    gotoxy(1,29);
                    printf("                                                                                                                                       ");
                    gotoxy(1,31);
                    printf("                                                                                                                                       ");
                    gotoxy(31,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(32,29);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(32,31);
                    setColor(1);
                    printf("Appuyer sur une touche pour ressayer :");
                    gotoxy(31,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(73,31);
                    getch();
                    effectuer_res_etud();
                  }
                   break;

              case 2:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( strcmp((A.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((A.jour[choice2-1].sixeme),"Occupe");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( strcmp((B.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((B.jour[choice2-1].sixeme),"Occupe");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( strcmp((C.jour[choice2-1].sixeme),"Disponible")==0 ){
                       strcpy((C.jour[choice2-1].sixeme),"Occupe");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                 if(k==0){
                    gotoxy(103,15);
                    printf("                                                    ");
                    gotoxy(103,17);
                    printf("                                                     ");
                    gotoxy(103,19);
                    printf("                                                    ");
                    gotoxy(1,27);
                    printf("                                                                                                                                       ");
                    gotoxy(1,29);
                    printf("                                                                                                                                       ");
                    gotoxy(1,31);
                    printf("                                                                                                                                       ");
                    gotoxy(31,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(32,29);
                    setColor(7);
                    printf("Tous les salles de votre choix sont pleines cette heure et cette jour !!");
                    gotoxy(32,31);
                    setColor(1);
                    printf("Appuyer sur une touche pour ressayer :");
                    gotoxy(31,33);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(73,31);
                    getch();
                    effectuer_res_etud();
                  }
                   break;

        default:
        gotoxy(101,15);
        printf("                                                      ");
        gotoxy(101,16);
        setColor(9);
        printf("============================================== ");
        gotoxy(101,17);
        setColor(7);
        printf("     CHOIX INCORRECTE !!                         ");
        setColor(9);
        gotoxy(101,18);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(101,18);
        printf("                                                 ");
        gotoxy(101,16);
        printf("                                                  ");
        goto Againnn;
    }
    choose_club(choice1,choice2);








}
void choose_club(int choice1,int choice2){
     int choice,choice3;
    char annee[3];
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
     system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");
    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
   setColor(7);
    gotoxy(72,8);
    printf("| Choix de Club : |");
    gotoxy(18,9);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,11);
    printf("    1. CHESS CLUB       2. ENACTUS         3. TGD      \n");
    setColor(9);
    gotoxy(18,13);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(18,15);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,17);
    printf("    4. CCT              5. CSS             6. PRESS CLUB      \n");
    setColor(9);
    gotoxy(18,19);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(18,21);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,23);
    printf("    7. GC CLUB          8. 01CLUB          9. DATAI CLUB      \n");
    setColor(9);
    gotoxy(18,25);
    printf("+-------------------------------------------------------------+\n");

    gotoxy(81,9);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,11);
    printf("    10. GEER CLUB      11. GEE CLUB        12. GM CLUB    \n");
    setColor(9);
    gotoxy(81,13);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(81,15);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,17);
    printf("    13. QURAN CLUB     14. HULT PRIZE      15. SPORT CLUB      \n");
    setColor(9);
    gotoxy(81,19);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(81,21);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,23);
    printf("    16. JLM CLUB       17. CLUB VOYAGE     18. MUSIC CLUB      \n");
    setColor(9);
    gotoxy(81,25);
    printf("+-------------------------------------------------------------+\n");



    setColor(9);
    gotoxy(60,27);
    printf(" =========================================");
    setColor(7);
    gotoxy(60,29);
    printf("||    Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(60,31);
    printf(" =========================================");
    setColor(7);
    gotoxy(96,29);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  strcpy(nomreservation,"CHESS");
                   break;

              case 2:
                  strcpy(nomreservation,"ENACTUS");
                   break;

              case 3:
                  strcpy(nomreservation,"TGD");
              break;

              case 4:
                  strcpy(nomreservation,"CCT");

                   break;

              case 5:
                  strcpy(nomreservation,"CSS");
                   break;

              case 6:
                  strcpy(nomreservation,"PRESS");

              break;

              case 7:
                  strcpy(nomreservation,"GC");

                   break;

              case 8:
                   strcpy(nomreservation,"01");
                   break;

              case 9:
                  strcpy(nomreservation,"DATAI");
              break;
              case 10:
                  strcpy(nomreservation,"GEER");
              break;

              case 11:
                  strcpy(nomreservation,"GEE");

              break;

              case 12:
                  strcpy(nomreservation,"GM");

                   break;

              case 13:
                   strcpy(nomreservation,"QURAN");
                   break;

              case 14:
                  strcpy(nomreservation,"HULTPRIZE");
              break;

              case 15:
                  strcpy(nomreservation,"SPORT");
              break;

              case 16:
                   strcpy(nomreservation,"JLM");
                   break;

              case 17:
                  strcpy(nomreservation,"VOYAGE");
              break;

              case 18:
                  strcpy(nomreservation,"MUSIC");
              break;


        default:
            setColor(9);
           gotoxy(60,29);
           printf("||    CHOIX INCORRECTE !!                ||");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            system("cls");
            choose_club(choice1,choice2);
        break;
       }

    int l=0;
    if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL)){
                          if(strcmp((A.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((A.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(STD);
                    if(l!=0){
                        setColor(9);
                        gotoxy(50,27);
                        printf("+----------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(50,29);
                        printf("    Ce club a deja une sceance cette heure et ce jour !                               \n");
                        setColor(9);
                        gotoxy(50,31);
                        printf("   Appuyer sur une touche pour ressayer une autre fois : \n");
                        gotoxy(50,33);
                        printf("+----------------------------------------------------------+\n");
                        gotoxy(112,31);
                        getch();
                        l=0;
                        effectuer_res_etud();
                    }

                 STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }

                while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if (strcmp((A.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].cinqueme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                    if (strcmp((A.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((A.jour[choice2-1].sixeme),nomreservation);
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       break;
                    }
                }
                  fclose(STD);
    }
    if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }

                     while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL)){
                          if(strcmp((B.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((B.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(STP);
                    if(l!=0){
                        setColor(9);
                        gotoxy(50,27);
                        printf("+----------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(50,29);
                        printf("    Ce club a deja une sceance cette heure et ce jour !                               \n");
                        setColor(9);
                        gotoxy(50,31);
                        printf("   Appuyer sur une touche pour ressayer une autre fois : \n");
                        gotoxy(50,33);
                        printf("+----------------------------------------------------------+\n");
                        gotoxy(112,31);
                        getch();
                        l=0;
                        effectuer_res_etud();
                    }

                 STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }

                while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if(strcmp((B.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].cinqueme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                    if(strcmp((B.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((B.jour[choice2-1].sixeme),nomreservation);
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       break;
                    }
                }
                  fclose(STP);
    }
    if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL)){
                          if(strcmp((A.jour[choice2-1].cinqueme),nomreservation) == 0){
                            l++;
                          }
                          if(strcmp((C.jour[choice2-1].sixeme),nomreservation) == 0){
                            l++;
                          }
                    }
                    fclose(SAM);
                    if(l!=0){
                        setColor(9);
                        gotoxy(50,27);
                        printf("+----------------------------------------------------------+\n");
                        setColor(7);
                        gotoxy(50,29);
                        printf("     Ce club a deja une sceance cette heure et ce jour !                               \n");
                        setColor(9);
                        gotoxy(50,31);
                        printf("   Appuyer sur une touche pour ressayer une autre fois : \n");
                        gotoxy(50,33);
                        printf("+----------------------------------------------------------+\n");
                        gotoxy(112,31);
                        getch();
                        l=0;
                        effectuer_res_etud();
                    }

                 SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if(strcmp((C.jour[choice2-1].cinqueme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].cinqueme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                    if(strcmp((C.jour[choice2-1].sixeme),"Occupe") == 0 ){
                       strcpy((C.jour[choice2-1].sixeme),nomreservation);
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       break;
                    }
                }
                  fclose(SAM);
    }
    setColor(9);
    gotoxy(50,27);
    printf("+----------------------------------------------------------+\n");
    setColor(7);
    gotoxy(50,29);
    printf("              Votre Reservation a bien fait !                               \n");
    setColor(9);
    gotoxy(50,31);
    printf("Appuyer sur une touche pour retourner au menu principale : \n");
    gotoxy(50,33);
    printf("+----------------------------------------------------------+\n");
    gotoxy(108,31);
    getch();
    espaceetud();








}
void annuler_res_etud(){

     int choice1,choice2,choice3,i=0,j=0,k=0;
     char ccc;
     int a;
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    gotoxy(14,8);
    setColor(7);
    printf("| Choix de Salle : |");
    gotoxy(2,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,11);
    printf("             1. Les Salles de TD              \n");
    setColor(9);
    gotoxy(2,13);
    printf("+--------------------------------------------+\n");
    gotoxy(2,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,17);
    printf("             2. Les Salles de TP               \n");
    setColor(9);
    gotoxy(2,19);
    printf("+--------------------------------------------+\n");
    gotoxy(2,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(2,23);
    printf("             3. Les Amphis               \n");
    setColor(9);
    gotoxy(2,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(4,30);
    printf("                                                       ");
    gotoxy(2,27);
    printf("==============================================");
    setColor(7);
    gotoxy(2,29);
    printf("||        Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(2,31);
    printf("==============================================");

    Again:
    setColor(7);
    gotoxy(68,8);
    printf("| Choix de Jour : |");
    gotoxy(53,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,11);
    printf("       1. Lundi           2. Mardi  \n");
    setColor(9);
    gotoxy(53,13);
    printf("+--------------------------------------------+\n");
    gotoxy(53,15);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,17);
    printf("       3. Mercredi        4. Jeudi  \n");
    setColor(9);
    gotoxy(53,19);
    printf("+--------------------------------------------+\n");
    gotoxy(53,21);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(53,23);
    printf("       5. Vendredi        6. Samedi  \n");
    setColor(9);
    gotoxy(53,25);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(53,27);
    printf("=============================================");
    setColor(7);
    gotoxy(53,29);
    printf("||      Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(53,31);
    printf("=============================================");
    setColor(7);

    Againnn:
    setColor(7);
    gotoxy(115,8);
    printf("| Choix d\'heure : |");
    gotoxy(103,9);
    setColor(9);
    printf("+--------------------------------------------+\n");
    setColor(7);
    gotoxy(103,11);
    printf("   1. 19:00 -> 21:00     2. 21:00 -> 23:00  \n");
    setColor(9);
    gotoxy(103,13);
    printf("+--------------------------------------------+\n");
    setColor(9);
    gotoxy(103,18);
    printf("                                                      ");
    gotoxy(103,15);
    printf("=============================================");
    setColor(7);
    gotoxy(103,17);
    printf("||     Veuillez entrer votre choix :        ||");
    setColor(9);
    gotoxy(103,19);
    printf("=============================================");

    if(i==0){
        setColor(7);
        gotoxy(43,29);
        scanf("%d", &choice1);
        switch (choice1) {
              case 1:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,11);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,13);
                  printf("  Donner quel Bloc (A/N) :                     ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,17);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,19);
                  setColor(7);
                  printf("  Donner le numero de la salle (1-->10) :       ");
                  gotoxy(2,21);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(32,13);
                  while (getchar() != '\n');
                  setColor(7);
                  scanf("%c", &ccc);
                  gotoxy(44,19);
                  scanf("%d", &a);
                  gotoxy(2,23);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,25);
                  setColor(7);
                  printf("  Bien Enregistres");
                  gotoxy(2,27);
                  setColor(9);
                  printf("  Appuyer sur une touche pour continuer :");
                  gotoxy(2,29);
                  printf("+--------------------------------------------+\n");
                  gotoxy(45,27);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                      \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                    ");
                  gotoxy(4,28);
                  printf("                                                    ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("1");
                   i++;
                   break;

             case 2:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,11);
                  printf("                                                ");
                  gotoxy(2,13);
                  printf("                                                ");
                  gotoxy(2,21);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,17);
                  setColor(7);
                  printf("  Donner le numero de la salle (1-->10) :       ");
                  gotoxy(2,19);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(44,17);
                  setColor(7);
                  scanf("%d", &a);
                  gotoxy(2,21);
                  setColor(9);
                  printf("----------------------------------------------");
                  gotoxy(2,23);
                  setColor(7);
                  printf("Bien Enregistres");
                  gotoxy(2,25);
                  setColor(9);
                  printf("Appuyer sur une touche pour continuer :");
                  gotoxy(2,27);
                  printf("----------------------------------------------");
                  gotoxy(43,25);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                      \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                       ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("2");
                  i++;
                   break;

              case 3:
                  gotoxy(14,8);
                  printf("                                                ");
                  gotoxy(2,9);
                  printf("                                                ");
                  gotoxy(2,11);
                  printf("                                                ");
                  gotoxy(2,13);
                  printf("                                                ");
                  gotoxy(2,21);
                  printf("                                                ");
                  gotoxy(2,23);
                  printf("                                                ");
                  gotoxy(2,25);
                  printf("                                                ");
                  gotoxy(2,27);
                  printf("                                                ");
                  gotoxy(2,29);
                  printf("                                                ");
                  gotoxy(2,31);
                  printf("                                                ");
                  gotoxy(2,15);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("  Donner amphi (A/B) :                      ");
                  gotoxy(2,19);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  gotoxy(26,17);
                  while (getchar() != '\n');
                  setColor(7);
                  scanf("%c", &ccc);
                  gotoxy(2,21);
                  setColor(9);
                  printf("----------------------------------------------");
                  gotoxy(2,23);
                  setColor(7);
                  printf("Bien Enregistres");
                  gotoxy(2,25);
                  setColor(9);
                  printf("Appuyer sur une touche pour continuer :");
                  gotoxy(2,27);
                  printf("----------------------------------------------");
                  gotoxy(43,25);
                  getch();
                  gotoxy(14,8);
                  setColor(7);
                  printf("| Choix de Salle : |");
                  gotoxy(2,9);
                  setColor(9);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,11);
                  printf("             1. Les Salles de TD              \n");
                  setColor(9);
                  gotoxy(2,13);
                  printf("+--------------------------------------------+\n");
                  gotoxy(2,15);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,17);
                  printf("             2. Les Salles de TP               \n");
                  setColor(9);
                  gotoxy(2,19);
                   printf("+--------------------------------------------+\n");
                   gotoxy(2,21);
                  printf("+--------------------------------------------+\n");
                  setColor(7);
                  gotoxy(2,23);
                  printf("             3. Les Amphis                     \n");
                  setColor(9);
                  gotoxy(2,25);
                  printf("+--------------------------------------------+\n");
                  setColor(9);
                  gotoxy(4,30);
                  printf("                                                       ");
                  gotoxy(2,27);
                  printf("==============================================");
                  setColor(7);
                  gotoxy(2,29);
                  printf("||        Veuillez entrer votre choix :      ||");
                  setColor(9);
                  gotoxy(2,31);
                  printf("==============================================");
                  gotoxy(43,29);
                  setColor(7);
                  printf("3");
                  i++;
                  break;

        default:
        gotoxy(2,27);
        printf("                                                        ");
        gotoxy(2,28);
        setColor(9);
        printf("============================================== ");
        gotoxy(2,29);
        setColor(7);
        printf("   CHOIX INCORRECTE !!                              ");
        setColor(9);
        gotoxy(4,30);
        printf("   Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        annuler_res_etud();
    }
    }

    if(j==0){
        setColor(7);
       gotoxy(92,29);
       scanf("%d", &choice2);
       switch (choice2) {
              case 1:
                  j++;
                   break;

              case 2:
                  j++;
                   break;

              case 3:
                  j++;
                   break;

              case 4:
                  j++;
                   break;

              case 5:
                  j++;
                   break;

              case 6:
                  j++;
                   break;

        default:
        gotoxy(53,27);
        printf("                                                        ");
        gotoxy(53,28);
        setColor(9);
        printf("==============================================");
        gotoxy(53,29);
        setColor(7);
        printf("    CHOIX INCORRECTE !!                          ");
        setColor(9);
        gotoxy(53,30);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(53,28);
        printf("                                                    ");
        gotoxy(53,30);
        printf("                                                     ");
        goto Again;

    }
    }
       k=0;
      setColor(7);
       gotoxy(141,17);
       scanf("%d/n", &choice3);
       switch (choice3) {
              case 1:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].cinqueme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].cinqueme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].cinqueme),"Disponible")!=0) && (B.num ==a) ){
                       strcpy((B.jour[choice2-1].cinqueme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].cinqueme),"Disponible")!=0) && (C.nom == ccc) ){
                       strcpy((C.jour[choice2-1].cinqueme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                    if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                         ");
                    gotoxy(1,29);
                    printf("                                                                                                                                         ");
                    gotoxy(1,31);
                    printf("                                                                                                                                         ");
                    gotoxy(103,15);
                    printf("                                                                 ");
                    gotoxy(103,17);
                    printf("                                                                 ");
                    gotoxy(103,19);
                    printf("                                                                 ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,29);
                    setColor(7);
                    printf("                  Cette Reservation n\'existe pas !!");
                    gotoxy(38,27);
                    setColor(9);
                    printf("                  Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(98,27);
                    getch();
                    annuler_res_etud();
                  }
                   break;

              case 2:
                  if(choice1==1){
                    FILE *STD = fopen("salleTDinfos.DAT", "r+b");
                    if (STD == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL) ){
                    if( (strcmp((A.jour[choice2-1].sixeme),"Disponible")!=0) && (A.bloc == ccc) && (A.num==a) ){
                       strcpy((A.jour[choice2-1].sixeme),"Disponible");
                       fseek(STD, -sizeof(SalleinfosTD), SEEK_CUR);
                       fwrite(&A,sizeof(SalleinfosTD),1,STD);
                       k++;
                       break;
                    }
                  }
                  fclose(STD);
                  }
                  if(choice1==2){
                    FILE *STP = fopen("salleTPinfos.DAT", "r+b");
                    if (STP == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                    while( (fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL) ){
                    if( (strcmp((B.jour[choice2-1].sixeme),"Disponible")!=0) && (B.num==a) ){
                       strcpy((B.jour[choice2-1].sixeme),"Disponible");
                       fseek(STP, -sizeof(SalleinfosTP), SEEK_CUR);
                       fwrite(&B,sizeof(SalleinfosTP),1,STP);
                       k++;
                       break;
                    }
                  }
                  fclose(STP);
                  }
                  if(choice1==3){
                    FILE *SAM = fopen("salleAMinfos.DAT", "r+b");
                    if (SAM == NULL) {
                         perror("Erreur lors de l'ouverture du fichier");
                          exit(0);
                    }
                     while( (fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL) ){
                    if( (strcmp((C.jour[choice2-1].sixeme),"Disponible")!=0) && (C.nom == ccc ) ){
                       strcpy((C.jour[choice2-1].sixeme),"Disponible");
                       fseek(SAM, -sizeof(SalleinfosAM), SEEK_CUR);
                       fwrite(&C,sizeof(SalleinfosAM),1,SAM);
                       k++;
                       break;
                    }
                  }
                  fclose(SAM);
                  }
                 if(k==0){
                    gotoxy(1,27);
                    printf("                                                                                                                                         ");
                    gotoxy(1,29);
                    printf("                                                                                                                                         ");
                    gotoxy(1,31);
                    printf("                                                                                                                                         ");
                    gotoxy(103,15);
                    printf("                                                                 ");
                    gotoxy(103,17);
                    printf("                                                                 ");
                    gotoxy(103,19);
                    printf("                                                                 ");
                    gotoxy(38,27);
                    setColor(9);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(38,29);
                    setColor(7);
                    printf("                  Cette Reservation n\'existe pas !!");
                    gotoxy(38,27);
                    setColor(9);
                    printf("                  Appuyer sur une touche pour continuer :");
                    gotoxy(38,31);
                    printf("+-------------------------------------------------------------------------+");
                    gotoxy(98,27);
                    getch();
                    annuler_res_etud();
                  }
                   break;

        default:
        gotoxy(101,15);
        printf("                                                      ");
        gotoxy(101,16);
        setColor(9);
        printf("============================================== ");
        gotoxy(101,17);
        setColor(7);
        printf("     CHOIX INCORRECTE !!                         ");
        setColor(9);
        gotoxy(101,18);
        printf("    Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(101,18);
        printf("                                                 ");
        gotoxy(101,16);
        printf("                                                  ");
        goto Againnn;
    }

    system("cls");
     setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    gotoxy(43,10);
    printf("+--------------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(43,12);
    printf("          Annulation de Cette Reservation a bien fait ! :\n");
    setColor(9);
    gotoxy(43,14);
    printf("+--------------------------------------------------------------------+\n");
    gotoxy(43,16);
    printf("+--------------------------------------------------------------------+\n");
    setColor(9);
    gotoxy(43,18);
    printf("        Appuyer sur une touche pour retourner au menu principale :                                \n");
    gotoxy(43,20);
    printf("+--------------------------------------------------------------------+\n");
    gotoxy(110,18);
    getch();
    setColor(7);
    espaceetud();

}
void status_salle_etud(){
    int choice;
    system("cls");
     setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    setColor(7);
    gotoxy(66,8);
    printf("| Choix de Salle : |");
    gotoxy(46,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,11);
    printf("                    1. Les Salles de TD                     \n");
    setColor(9);
    gotoxy(46,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(46,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,17);
    printf("                    2. Les Salles de TP                     \n");
    setColor(9);
    gotoxy(46,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(46,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,23);
    printf("                    3. Les Amphis                     \n");
    setColor(9);
    gotoxy(46,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(46,28);
    printf("                                                                 ");
    gotoxy(46,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(46,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(46,31);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(96,29);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                statustd_etud();
                   break;

              case 2:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                 statustp_etud();
                   break;

              case 3:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                statusamphi_etud();
              break;

        default:
       gotoxy(46,27);
        printf("                                                                ");
        gotoxy(46,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(46,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                   ");
        setColor(9);
        gotoxy(46,30);
        printf("          Appuyer sur une touche pour continuer :               ");
        getch();
        gotoxy(46,28);
        printf("                                                               ");
        gotoxy(46,30);
        printf("                                                                ");
        setColor(7);
        goto AGGGAIN;
    }
}
void statustd_etud(){
    int choice;
    int numeroSalle,j;
    char bloc;
    char jour[15];
    SalleinfosTD A;
    system("cls");
     setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    setColor(7);
    gotoxy(31,8);
    printf("| Choix de Jour : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("              1. Lundi                   2. Mardi      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("              3. Mercredi                4. Jeudi      \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("              5. Vendredi                6. Samedi      \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(10,28);
    printf("                                                                 ");
    gotoxy(10,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(10,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(10,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(10,31);
    printf(" ==============================================================");
    gotoxy(86, 12);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    gotoxy(86, 14);
    setColor(7);
    printf("|       Numero de la salle:                                    |");
    gotoxy(86, 16);
    printf("|       Bloc (A/N):                                            |");
    gotoxy(86, 18);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(56,29);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(10,27);
        printf("                                                               ");
        gotoxy(10,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(10,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                   ");
        setColor(9);
        gotoxy(10,30);
        printf("          Appuyer sur une touche pour continuer :               ");
        getch();
        setColor(7);
        gotoxy(10,28);
        printf("                                                                ");
        gotoxy(10,30);
        printf("                                                                ");
        goto AGGGAIN;
    }

    setColor(7);
    gotoxy(115, 14);
    scanf("%d",&numeroSalle);
    gotoxy(107, 16);
    scanf(" %c",&bloc);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
         if (STD== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosTD),1,STD) != NULL){
        if( (A.num==numeroSalle) && (A.bloc==bloc) ){
            j++;
         }
    }
    fclose(STD);
    if(j==0){
            setColor(9);
            gotoxy(86, 20);
             printf("+--------------------------------------------------------------+");
            gotoxy(86, 22);
            setColor(7);
            printf("           Cette Salle n\'existe pas !");
            gotoxy(86, 24);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(86, 26);
            printf("+---------------------------------------------------------------+");
            gotoxy(136, 24);
            getch();
            system("cls");
            statustd_etud();
    }
    else{
        sstd_etud(choice,jour,numeroSalle,bloc);
    }




}
void sstd_etud(int choice,char* jour,int numeroSalle,char bloc){
    int i,j;
    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    gotoxy(46,11);
    printf("==============================================================");
     gotoxy(46,13);
     setColor(7);
     printf("           La Salle TD %d Bloc %c en %s :            ",numeroSalle,bloc,jour);
     gotoxy(46,15);
     setColor(9);
    printf("==============================================================");
    setColor(7);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
      if (STD == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosTD A;
      j=0;
      while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
        if( (A.num==numeroSalle) && (A.bloc==bloc) ){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,18);

    printf("||             19:00 -> 21:00 : %s                ",A.jour[choice-1].cinqueme);
              gotoxy(46,21);
    printf("||             21:00 -> 23:00 : %s                ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
    fclose(STD);
     gotoxy(46,24);
    setColor(9);
    printf("==============================================================");
    setColor(9);
    gotoxy(46, 27);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 29);
    setColor(7);
    printf(" C'est l'emploi de %s de la Salle TD %d Bloc %c",jour,numeroSalle,bloc);
    gotoxy(46, 31);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 33);
    setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 31);
    getch();
    system("cls");
    espaceetud();





}
void statustp_etud(){
    int choice;
    int numeroSalle,j;
    char jour[15];
    SalleinfosTP A;
    system("cls");
    setColor(9);
    printf("=====================================================================================================================================");
    setColor(7);
    gotoxy(56, 2);
    printf("STATUS D\'UNE SALLE TP");
    setColor(9);
    gotoxy(0, 4);
    printf("=====================================================================================================================================");
    gotoxy(22,6);
    setColor(7);
    printf("| Choix de Jour : |");
    gotoxy(22,6);
    setColor(9);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(22,8);
    printf("       1. Lundi           2. Mardi  \n");
    setColor(9);
    gotoxy(22,10);
    printf("+----------------------------------------+\n");
    gotoxy(22,12);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(22,14);
    printf("       3. Mercredi        4. Jeudi  \n");
    setColor(9);
    gotoxy(22,16);
    printf("+----------------------------------------+\n");
    gotoxy(22,18);
    printf("+----------------------------------------+\n");
    setColor(7);
    gotoxy(22,20);
    printf("       5. Vendredi        6. Samedi  \n");
    setColor(9);
    gotoxy(22,22);
    printf("+----------------------------------------+\n");
    AGGGGAIN:
    gotoxy(22,25);
    printf("                                           ");
    gotoxy(22,27);
    printf("                                           ");
    setColor(9);
    gotoxy(22,24);
    printf(" =========================================");
    setColor(7);
    gotoxy(22,26);
    printf("||    Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(22,28);
    printf(" =========================================");
    gotoxy(70, 14);
    setColor(9);
    printf("+-------------------------------------------+");
    gotoxy(70, 16);
    setColor(7);
    printf("| Numero de la salle:                       |");
    gotoxy(70, 18);
    setColor(9);
    printf("+-------------------------------------------+");

    gotoxy(58,26);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(22,24);
        printf("                                           ");
        gotoxy(22,25);
        setColor(9);
        printf("==============================================");
        gotoxy(22,26);
        setColor(7);
        printf(" CHOIX INCORRECTE !!                        ");
        setColor(9);
        gotoxy(22,27);
        printf("Appuyer sur une touche pour continuer :");
        getch();
        setColor(7);
        gotoxy(22,29);
        printf("                                           ");
        gotoxy(22,31);
        printf("                                          ");
        goto AGGGGAIN;
    }


    gotoxy(93, 16);
    scanf("%d",&numeroSalle);
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
         if (STP== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosTP),1,STP) != NULL){
        if(A.num==numeroSalle){
            j++;
         }
    }
    fclose(STP);
    if(j==0){
            setColor(9);
            gotoxy(70, 21);
            printf("+--------------------------------------------+");
            gotoxy(70, 22);
            setColor(7);
            printf(" Ce numero de salle n\'est pas existe !");
            gotoxy(70, 24);
            setColor(9);
            printf(" Appuyez sur une touche pour ressayer...");
            gotoxy(70, 26);
            printf("+--------------------------------------------+");
            gotoxy(110, 24);
            getch();
            system("cls");
            statustp_etud();
    }
    else{
        sstp_etud(choice,jour,numeroSalle);
    }

}
void sstp_etud(int choice,char* jour,int numeroSalle){
    int i,j;
    system("cls");
     setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
   gotoxy(46,11);
    printf("==============================================================");
     gotoxy(46,13);
     setColor(7);
     printf("               La Salle TP %d en %s :            ",numeroSalle,jour);
     gotoxy(46,15);
     setColor(9);
    printf("==============================================================");
     setColor(7);
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
      if (STP == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosTP A;
      j=0;
      while(fread(&A,sizeof(SalleinfosTP),1,STP)!=NULL){
        if(A.num==numeroSalle){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,18);
    printf("||                 19:00 -> 21:00 : %s                     ",A.jour[choice-1].cinqueme);
              gotoxy(46,21);
    printf("||                 21:00 -> 23:00 : %s                     ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
    gotoxy(46,24);
    setColor(9);
    printf("==============================================================");
    fclose(STP);
      setColor(9);
    gotoxy(46, 27);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 29);
    setColor(7);
    printf(" C'est l'emploi de %s de la Salle TP %d ",jour,numeroSalle);
    gotoxy(46, 31);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 33);
     setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 31);
    getch();
    system("cls");
    espaceetud();


}
void statusamphi_etud(){
     int choice,j;
    char nomSalle;
    char jour[15];
    SalleinfosAM A;
    system("cls");
     setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    setColor(7);
    gotoxy(31,8);
    printf("| Choix de Jour : |");
    gotoxy(10,9);
    setColor(9);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,11);
    printf("              1. Lundi                   2. Mardi      \n");
    setColor(9);
    gotoxy(10,13);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,15);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,17);
    printf("              3. Mercredi                4. Jeudi      \n");
    setColor(9);
    gotoxy(10,19);
    printf("+--------------------------------------------------------------+\n");
    gotoxy(10,21);
    printf("+--------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(10,23);
    printf("              5. Vendredi                6. Samedi      \n");
    setColor(9);
    gotoxy(10,25);
    printf("+--------------------------------------------------------------+\n");
    AGGGAIN:
    gotoxy(10,28);
    printf("                                                                 ");
    gotoxy(10,30);
    printf("                                                                 ");
    setColor(9);
    gotoxy(10,27);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(10,29);
    printf("||              Veuillez entrer votre choix :                 ||");
    setColor(9);
    gotoxy(10,31);
    printf(" ==============================================================");
    gotoxy(86, 12);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(86, 15);
    printf("|       Nom de l\'amphi (Un Caractere) :                       |");
    gotoxy(86, 18);
    setColor(9);
    printf("+--------------------------------------------------------------+");
    setColor(7);
    gotoxy(56,29);
    scanf("%d",&choice);
    switch (choice) {
              case 1:
                strcpy(jour,"Lundi");
                   break;

              case 2:
                 strcpy(jour,"Mardi");
                   break;

              case 3:
                strcpy(jour,"Mercredi");
              break;

              case 4:
                strcpy(jour,"Jeudi");
                   break;

              case 5:
                 strcpy(jour,"Vendredi");
                   break;

              case 6:
                 strcpy(jour,"Samedi");
              break;


        default:
        gotoxy(10,27);
        printf("                                                               ");
        gotoxy(10,28);
        setColor(9);
        printf(" ==============================================================");
        gotoxy(10,29);
        setColor(7);
        printf("          CHOIX INCORRECTE !!                                  ");
        setColor(9);
        gotoxy(10,30);
        printf("          Appuyer sur une touche pour continuer : ");
        getch();
        setColor(7);
        gotoxy(10,28);
        printf("                                                               ");
        gotoxy(10,30);
        printf("                                                               ");
        goto AGGGAIN;
    }
    setColor(7);
    gotoxy(128, 15);
    scanf(" %c",&nomSalle);
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
         if (SAM== NULL) {
            perror("Erreur lors de l'ouverture du fichier ");
             exit(0);
          }
          j=0;
    while(fread(&A,sizeof(SalleinfosAM),1,SAM) != NULL){
        if(A.nom==nomSalle){
            j++;
         }
    }
    fclose(SAM);
    if(j==0){
            setColor(9);
            gotoxy(86, 20);
             printf("+--------------------------------------------------------------+");
            gotoxy(86, 22);
            setColor(7);
            printf("           Cette Salle n\'existe pas !");
            gotoxy(86, 24);
            setColor(9);
            printf("           Appuyez sur une touche pour ressayer...");
            gotoxy(86, 26);
            printf("+---------------------------------------------------------------+");
            gotoxy(136, 24);
            getch();
            system("cls");
            statusamphi_etud();
    }
    else{
        ssamphi_etud(choice,jour,nomSalle);
    }






}
void printSeparator_etud() {
    int S=14;
    setColor(9);
    for (int i = 0; i < 3 ; i++) {
        gotoxy(14,S);
        printf("+---------------------------------------------------------------------------------------------------------------------------");
        S+=4;

    }
    setColor(7);
}
void ssamphi_etud(int choice,char *jour,char nomSalle){
     int i,j;
    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");

    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
   gotoxy(46,11);
    printf("==============================================================");
     gotoxy(46,13);
     setColor(7);
     printf("                L\'AMPHI %c EN %s :            ",nomSalle,jour);
     gotoxy(46,15);
     setColor(9);
    printf("==============================================================");
     setColor(7);
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
      if (SAM == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
      }
      SalleinfosAM A;
      j=0;
      while(fread(&A,sizeof(SalleinfosAM),1,SAM)!=NULL){
        if(A.nom==nomSalle){
            j++;
           for(i=0;i<7;i++){
              gotoxy(46,18);
    printf("||         19:00 -> 21:00 : %s              ",A.jour[choice-1].cinqueme);
              gotoxy(46,21);
    printf("||         21:00 -> 23:00 : %s              ",A.jour[choice-1].sixeme);
    break;

           }
         }
         if(j!=0){
            break;
         }

      }
    setColor(9);
    gotoxy(46,24);
    printf(" ================================================");
    fclose(SAM);
    gotoxy(46, 27);
    printf("+------------------------------------------------------------+");
    gotoxy(46, 29);
    setColor(7);
    printf(" C'est l'emploi de %s de l\'amphi %c ",jour,nomSalle);
    gotoxy(46, 31);
    setColor(1);
    printf(" Appuyez sur une touche pour retourner au menu principale...");
    gotoxy(46, 33);
     setColor(9);
    printf("+------------------------------------------------------------+");
    gotoxy(107, 31);
    getch();
    system("cls");
    espaceetud();
}
void printSchedule_etud(char *nomreservation){
 int S=16,T;
    int t=0;
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
    const char *time_slots[] = {"19:00 - 21:00", "21:00 - 23:00"};
    setColor(7);
    FILE *STD = fopen("salleTDinfos.DAT", "rb");
    if (STD == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
    }
    FILE *STP = fopen("salleTPinfos.DAT", "rb");
    if (STP == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
    }
    FILE *SAM = fopen("salleAMinfos.DAT", "rb");
    if (SAM == NULL) {
                perror("Erreur lors de l'ouverture du fichier");
                exit(0);
    }
    for (int i = 0; i < 2; i++) {
         setColor(7);
         gotoxy(17,S);
        printf("%s ", time_slots[i]);
        T=31;
        for(int j=0;j< DAYS;j++){
            FILE *STD = fopen("salleTDinfos.DAT", "rb");
            if (STD == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
            }
            FILE *STP = fopen("salleTPinfos.DAT", "rb");
            if (STP == NULL) {
               perror("Erreur lors de l'ouverture du fichier");
               exit(0);
            }
            FILE *SAM = fopen("salleAMinfos.DAT", "rb");
            if (SAM == NULL) {
                perror("Erreur lors de l'ouverture du fichier");
                exit(0);
            }
            t=0;
            gotoxy(T,S);
            setColor(9);
            printf("|");
            trim(nomreservation);
            switch (i){
                  case 0 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].cinqueme);
                         if((strcmp(A.jour[j].cinqueme,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                         }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].cinqueme);
                         if(strcmp(B.jour[j].cinqueme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].cinqueme);
                         if(strcmp(C.jour[j].cinqueme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);
                     }
                     break;

                  case 1 :
                     while(fread(&A,sizeof(SalleinfosTD),1,STD)!=NULL){
                            trim(A.jour[j].sixeme);
                         if((strcmp(A.jour[j].sixeme,nomreservation)==0)){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TD%d Bloc%c",A.num,A.bloc);
                            break;
                        }
                     }
                     if(t!=0){
                            fclose(STD);
                        break;
                     }
                     while(fread(&B,sizeof(SalleinfosTP),1,STP)!=NULL){
                            trim(B.jour[j].sixeme);
                         if(strcmp(B.jour[j].sixeme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Salle TP %d",B.num);
                            break;
                         }
                     }
                     if(t!=0){
                         fclose(STP);
                        break;
                     }
                     while(fread(&C,sizeof(SalleinfosAM),1,SAM)!=NULL){
                            trim(C.jour[j].sixeme);
                         if(strcmp(C.jour[j].sixeme,nomreservation)==0){
                            t++;
                            gotoxy(T+2,S);
                            setColor(7);
                            printf("Amphi %c",C.nom);
                            break;
                         }
                    }
                    if(t!=0){
                            fclose(SAM);
                        break;
                     }
                     if(t==0){
                        gotoxy(T+1,S);
                        setColor(9);
                        printf("Pas de Sceance");
                        fclose(STD);
                        fclose(STP);
                        fclose(SAM);
                     }
                     break;

                default:
                break;
            }


            T+=18;
        }
        fclose(STD);
        fclose(STP);
        fclose(SAM);
        setColor(7);
        S+=4;
        if(i==1){
             setColor(7);
             gotoxy(58, S - 1);
             printf("\n              Appuyer sur une touche pour retourner au menu principale...");
             getch();
             espaceetud();

       }
    }
}
void printDays_etud() {
    int S=31;
    setColor(9);
    gotoxy(19,12);
    printf("Heures");
    setColor(7);
    const char *days[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};
    for (int i = 0; i < DAYS; i++) {
            gotoxy(S,12);
            printf("| %s ", days[i]);
            S+=18;
    }
}
void voir_reservation_clubs(){
    int choice;
    SalleinfosTD A;
    SalleinfosTP B;
    SalleinfosAM C;
     system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");
    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
   setColor(7);
    gotoxy(72,8);
    printf("| Choix de Club : |");
    gotoxy(18,9);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,11);
    printf("    1. CHESS CLUB       2. ENACTUS         3. TGD      \n");
    setColor(9);
    gotoxy(18,13);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(18,15);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,17);
    printf("    4. CCT              5. CSS             6. PRESS CLUB      \n");
    setColor(9);
    gotoxy(18,19);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(18,21);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(18,23);
    printf("    7. GC CLUB          8. 01CLUB          9. DATAI CLUB      \n");
    setColor(9);
    gotoxy(18,25);
    printf("+-------------------------------------------------------------+\n");

    gotoxy(81,9);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,11);
    printf("    10. GEER CLUB      11. GEE CLUB        12. GM CLUB    \n");
    setColor(9);
    gotoxy(81,13);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(81,15);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,17);
    printf("    13. QURAN CLUB     14. HULT PRIZE      15. SPORT CLUB      \n");
    setColor(9);
    gotoxy(81,19);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(81,21);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(81,23);
    printf("    16. JLM CLUB       17. CLUB VOYAGE     18. MUSIC CLUB      \n");
    setColor(9);
    gotoxy(81,25);
    printf("+-------------------------------------------------------------+\n");



    setColor(9);
    gotoxy(60,27);
    printf(" =========================================");
    setColor(7);
    gotoxy(60,29);
    printf("||    Veuillez entrer votre choix :      ||");
    setColor(9);
    gotoxy(60,31);
    printf(" =========================================");
    setColor(7);
    gotoxy(98,29);
    scanf("%d/n", &choice);
    switch (choice) {
              case 1:
                  strcpy(nomreservation,"CHESS");
                   break;

              case 2:
                  strcpy(nomreservation,"ENACTUS");
                   break;

              case 3:
                  strcpy(nomreservation,"TGD");
              break;

              case 4:
                  strcpy(nomreservation,"CCT");

                   break;

              case 5:
                  strcpy(nomreservation,"CSS");
                   break;

              case 6:
                  strcpy(nomreservation,"PRESS");

              break;

              case 7:
                  strcpy(nomreservation,"GC");

                   break;

              case 8:
                   strcpy(nomreservation,"01");
                   break;

              case 9:
                  strcpy(nomreservation,"DATAI");
              break;
              case 10:
                  strcpy(nomreservation,"GEER");
              break;

              case 11:
                  strcpy(nomreservation,"GEE");

              break;

              case 12:
                  strcpy(nomreservation,"GM");

                   break;

              case 13:
                   strcpy(nomreservation,"QURAN");
                   break;

              case 14:
                  strcpy(nomreservation,"HULTPRIZE");
              break;

              case 15:
                  strcpy(nomreservation,"SPORT");
              break;

              case 16:
                   strcpy(nomreservation,"JLM");
                   break;

              case 17:
                  strcpy(nomreservation,"VOYAGE");
              break;

              case 18:
                  strcpy(nomreservation,"MUSIC");
              break;


        default:
            setColor(9);
           gotoxy(60,29);
           printf("||    CHOIX INCORRECTE !!                ||");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            system("cls");
            voir_reservation_clubs();
        break;
       }

    system("cls");
    setColor(9);
    gotoxy(25, 0);
    printf("  ______  _____ _____        _____ ______      ______ _______ _    _ _____ _____          _   _ _______ \n");
    gotoxy(25, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|    |  ____|__   __| |  | |  __ \\_   _|   /\\   | \\ | |__   __|\n");
    gotoxy(25, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__       | |__     | |  | |  | | |  | || |    /  \\  |  \\| |  | |   \n");
    gotoxy(25, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|      |  __|    | |  | |  | | |  | || |   / /\\ \\ | . ` |  | |   \n");
    gotoxy(25, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____     | |____   | |  | |__| | |__| || |_ / ____ \\| |\\  |  | |   \n");
    gotoxy(25, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|    |______|  |_|   \\____/|_____/_____/_/    \\_\\_| \\_|  |_|   \n");
    gotoxy(0,2);
    printf("---------------------");
    gotoxy(0,3);
    printf("---------------------");
    gotoxy(131,2);
    printf("---------------------");
    gotoxy(131,3);
    printf("---------------------");
    setColor(7);
    printDays_etud();
    printSeparator_etud();
    printSchedule_etud(nomreservation);


}
void menu_codeadmin(){
    int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,8);
    printf(" ==============================================================");
     gotoxy(46,10);
     setColor(7);
     printf("                         Menu Options :");
     gotoxy(46,12);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,14);
    printf("||       1. Creer Votre Code :                                 ||");
    gotoxy(46,16);
    printf("||       2. Voir Votre Code :                                  ||");
    gotoxy(46,18);
    printf("||       3. Changer Votre Code :                               ||");
    gotoxy(46,20);
    printf("||       4. Retour au menu principale :                        ||");
    gotoxy(46,22);
    printf("||       5. Quitter :                                          ||");
    gotoxy(46,24);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,26);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,28);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,30);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,28);
    scanf("%d", &choice);

    switch (choice) {
    case 1:
         sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
        CreeCodeAdmin();
        break;

    case 2:
        gotoxy(23,38);
        setColor(9);
        print_slowly(formatted_text,15);
        VoirCodeAdmin();
        break;

    case 3:
        gotoxy(23,38);
        setColor(9);
        print_slowly(formatted_text,15);
        ChangerCodeAdmin();
        break;

    case 4:
        system("cls");
        espaceadmin();
        break;

     case 5:
        printf("\n\n\n");
        exit(0);
        break;

    default:
        setColor(7);
         gotoxy(46,28);
         printf("           CHOIX INCORRECTE !!                               ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                               ");
            goto moore;
}



}
void CreeCodeAdmin(){
    CodeAdmin A;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    FILE *CA = fopen("CodesAdmin.DAT", "rb");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    while(fread(&A,sizeof(CodeAdmin),1,CA)==1){
        if(strcmp(A.emaill,email)==0){
            fclose(CA);
            setColor(9);
            gotoxy(46, 17);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46, 20);
            setColor(7);
            printf("             Vous avez deja un code admin !!");
            gotoxy(46, 23);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            gotoxy(46, 26);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 23);
            getch();
            system("cls");
            menu_codeadmin();
           }
    }
    setColor(9);
    gotoxy(46,12);
    printf("+-------------------------------------------------------------+");
    setColor(7);
    gotoxy(60,14);
    printf("  ECRIRE UN CODE :\n");
    setColor(9);
    gotoxy(46,16);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(46,18);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,20);
    printf("    CODE :                                \n");
    gotoxy(46,22);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(58,20);
    scanf(" %[^\n]s",pass);
    CA = fopen("CodesAdmin.DAT", "ab");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    strcpy(A.emaill,email);
    strcpy(A.codead,pass);
    fwrite(&A,sizeof(CodeAdmin),1,CA);
    fclose(CA);
    setColor(9);
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46, 26);
            setColor(7);
            printf("                 Votre Code est bien Cree !!");
            gotoxy(46, 28);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            gotoxy(46, 30);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 28);
            getch();
            system("cls");
            menu_codeadmin();
}

void VoirCodeAdmin(){
    CodeAdmin A;
    int iii=0;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    FILE *CA = fopen("CodesAdmin.DAT", "rb");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    while(fread(&A,sizeof(CodeAdmin),1,CA) == 1){
         if(strcmp(A.emaill,email)==0){
            iii++;
            setColor(9);
            gotoxy(30, 13);
            printf("+----------------------------------------------------------------------------------------------------+");
            gotoxy(30, 16);
            setColor(7);
            printf("                                       Votre Code ADMIN :");
            gotoxy(30, 19);
            setColor(1);
            printf("   Ce code est pour donner l\'autorisation a l\'etudiant pour acces au espace administration ");
            gotoxy(30, 22);
            printf("                                    --->  %s  <---",A.codead);
            gotoxy(30, 25);
            setColor(9);
            printf("+----------------------------------------------------------------------------------------------------+");
            fclose(CA);
            gotoxy(42, 27);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            getch();
            system("cls");
            menu_codeadmin();
           }
    }
    if(iii==0){
            fclose(CA);
            setColor(9);
            gotoxy(46, 15);
            printf("+-------------------------------------------------------------+");
            gotoxy(46, 18);
            setColor(7);
            printf("             Vous n\'avez pas un code admin !!");
            gotoxy(46, 21);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 21);
            getch();
            system("cls");
            menu_codeadmin();
           }

}
void ChangerCodeAdmin(){
    CodeAdmin A;
    int ii=0;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    FILE *CA = fopen("CodesAdmin.DAT", "r+b");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    while(fread(&A,sizeof(CodeAdmin),1,CA) == 1){
         if(strcmp(A.emaill,email)==0){
            ii++;
            setColor(9);
            gotoxy(46,12);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(66,14);
            printf("ECRIRE LE NOUVEAU CODE :\n");
            setColor(9);
            gotoxy(46,16);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46,18);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(46,20);
            printf("    CODE :                                \n");
            gotoxy(46,22);
            setColor(9);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(58,20);
            scanf(" %[^\n]s",pass);
            strcpy(A.codead,pass);
            fseek(CA, -sizeof(CodeAdmin), SEEK_CUR);
            fwrite(&A,sizeof(CodeAdmin),1,CA);
            fclose(CA);
            }
    }
    if(ii==0){
            fclose(CA);
            setColor(9);
            gotoxy(46, 15);
            printf("+-------------------------------------------------------------+");
            gotoxy(46, 18);
            setColor(7);
            printf("             Vous n\'avez pas un code admin !!");
            gotoxy(46, 21);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+");
            gotoxy(105, 21);
            getch();
            system("cls");
            menu_codeadmin();
    }

            setColor(9);
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+");
            gotoxy(46, 26);
            setColor(7);
            printf("                Votre Code est bien Change !!");
            gotoxy(46, 28);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale...");
            gotoxy(46, 30);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 28);
            getch();
            system("cls");
            menu_codeadmin();

}
void code_admin(){
    CodeAdmin A;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");

    setColor(9);
    gotoxy(46,12);
    printf("+-------------------------------------------------------------+");
    setColor(7);
    gotoxy(60,14);
    printf("  ECRIRE UN CODE :\n");
    setColor(9);
    gotoxy(46,16);
    printf("+-------------------------------------------------------------+\n");
    gotoxy(46,18);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(46,20);
    printf("    CODE :                                \n");
    gotoxy(46,22);
    setColor(9);
    printf("+-------------------------------------------------------------+\n");
    setColor(7);
    gotoxy(58,20);
    scanf(" %[^\n]s",pass);
    FILE *CA = fopen("CodesAdmin.DAT", "rb");
    if (CA == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    int i=0;
    while( fread(&A,sizeof(CodeAdmin),1,CA) != NULL ){
        if(strcmp(A.codead,pass)==0){
            i++;
        }
    }
    fclose(CA);
    if(i!=0){
            setColor(9);
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46, 26);
            setColor(7);
            printf("                 Ce code est bien existe !!");
            gotoxy(46, 28);
            setColor(9);
            printf(" Appuyez sur une touche pour acceder au espace admin ...");
            gotoxy(46, 30);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 28);
            getch();
            system("cls");
            espace_ca();
    }
    else{
            setColor(9);
            gotoxy(46, 24);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46, 26);
            setColor(7);
            printf("                Ce code n\'existe pas!!");
            gotoxy(46, 28);
            setColor(9);
            printf(" Appuyez sur une touche pour retourner au menu principale ...");
            gotoxy(46, 30);
            printf("+-------------------------------------------------------------+");
            gotoxy(107, 28);
            getch();
            system("cls");
            espaceetud();

    }
}
void espace_ca(){
     ll=0;
     int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,8);
    printf(" ==============================================================");
     gotoxy(46,10);
     setColor(7);
     printf("                         Menu Admin :");
     gotoxy(46,12);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,14);
    printf("||       1. Effectuer une reservation :                       ||");
    gotoxy(46,16);
    printf("||       2. Annuler une reservation :                         ||");
    gotoxy(46,18);
    printf("||       3. Status des Salles :                               ||");
    gotoxy(46,20);
    printf("||       4. Voir les reservations :                           ||");
    gotoxy(46,22);
    printf("||       5. Retour au espace etudiant :                       ||");
    gotoxy(46,24);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,26);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,28);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,30);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,28);
    scanf("%d", &choice);
    switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ll++;
                reservation_administration();
                   break;

              case 2:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ll++;
                 Annuler_Reservation();
                   break;

              case 3:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ll++;
                status_salle();
              break;

              case 4:
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            ll++;
                voir_reservation();
              break;

              case 5:
                  gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
                espaceetud();
              break;


        default:
        setColor(7);
         gotoxy(46,34);
         printf("           CHOIX INCORRECTE !!                                   ");
            sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
           219, 219, 219, 219, 219, 219);
            gotoxy(23,38);
            setColor(9);
            print_slowly(formatted_text,15);
            gotoxy(23,38);
            printf("                                                                                                                                                               ");
            goto moore;
    }
}
void menu_profile(){
      int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
    gotoxy(46,8);
    printf(" ==============================================================");
     gotoxy(46,10);
     setColor(7);
     printf("                         Menu Profile :");
     gotoxy(46,12);
     setColor(9);
    printf(" ==============================================================");
     setColor(7);
    gotoxy(46,14);
    printf("||       1. Voir mon profile :                                ||");
    gotoxy(46,16);
    printf("||       2. Changer votre mot de passe :                      ||");
    gotoxy(46,18);
    printf("||       3. Retour au menu principale :                       ||");
    gotoxy(46,20);
    setColor(9);
    printf(" ==============================================================");
    moore:
    gotoxy(46,22);
    setColor(9);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(46,24);
    printf("||             Veuillez entrer votre choix :                  ||");
    setColor(9);
    gotoxy(46,26);
    printf(" ==============================================================");
    setColor(7);
    gotoxy(94,24);
    scanf("%d", &choice);
    switch (choice) {
              case 1:
                   sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                   219, 219, 219, 219, 219, 219);
                   gotoxy(23,38);
                   setColor(9);
                   print_slowly(formatted_text,15);
                   voir_profile();
                   break;

              case 2:
                  gotoxy(23,38);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  changer_motdepasse();
                   break;

              case 3:
                  gotoxy(23,38);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  if(pp!=0){
                    espaceetud();
                  }
                  else{
                    espaceadmin();
                  }
              break;


        default:
                  setColor(7);
                  gotoxy(46,24);
                  printf("           CHOIX INCORRECTE !!                                   ");
                  sprintf(formatted_text,"\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
                  219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                  219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                  219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219,
                  219, 219, 219, 219, 219, 219);
                  gotoxy(23,38);
                  setColor(9);
                  print_slowly(formatted_text,15);
                  gotoxy(23,38);
                  printf("                                                                                                                                                               ");
                  goto moore;
    }

}
void changer_motdepasse(){
     Donnee A;
     int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");
            setColor(9);
            gotoxy(46,12);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(62,14);
            printf("ECRIRE LE NOUVEAU MOT DE PASSE :\n");
            setColor(9);
            gotoxy(46,16);
            printf("+-------------------------------------------------------------+\n");
            gotoxy(46,18);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(46,20);
            printf("    MOT DE PASSE :                                \n");
            gotoxy(46,22);
            setColor(9);
            printf("+-------------------------------------------------------------+\n");
            setColor(7);
            gotoxy(66,20);
            scanf(" %s",pass);

    FILE *I = fopen("Infos.DAT", "r+b");
     if (I == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    while( fread(&A,sizeof(Donnee),1,I) != NULL ){
         if(strcmp(A.emailll,email)==0){
            strcpy(A.motdepasse,pass);
            fseek(I, -sizeof(Donnee), SEEK_CUR);
            fwrite(&A,sizeof(Donnee),1,I);
            break;
         }
    }
    fclose(I);
    gotoxy(50,24);
    setColor(9);
    printf("Appuyer une touche pour retourner au menu principale...");
    getch();
    menu_profile();
}
void voir_profile(){
   Donnee A;
     int choice;
    system("cls");
    setColor(9);
    gotoxy(36, 0);
    printf("  ______  _____ _____        _____ ______                 _____  __  __ _____ _   _ \n");
    gotoxy(36, 1);
    printf(" |  ____|/ ____|  __ \\ /\\   / ____|  ____|          /\\   |  __ \\|  \\/  |_   _| \\ | |\n");
    gotoxy(36, 2);
    printf(" | |__  | (___ | |__) /  \\ | |    | |__            /  \\  | |  | | \\  / | | | |  \\| |\n");
    gotoxy(36, 3);
    printf(" |  __|  \\___ \\|  ___/ /\\ \\| |    |  __|          / /\\ \\ | |  | | |\\/| | | | | . ` |\n");
    gotoxy(36, 4);
    printf(" | |____ ____) | |  / ____ \\ |____| |____        / ____ \\| |__| | |  | |_| |_| |\\  |\n");
    gotoxy(36, 5);
    printf(" |______|_____/|_| /_/    \\_\\_____|______|      /_/    \\_\\_____/|_|  |_|_____|_| \\_|\n");

    gotoxy(0,2);
    printf("-----------------------------");
    gotoxy(0,3);
    printf("-----------------------------");
    gotoxy(127,2);
    printf("-----------------------------");
    gotoxy(127,3);
    printf("-----------------------------");

    FILE *I = fopen("Infos.DAT", "rb");
     if (I == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(0);
    }
    while( fread(&A,sizeof(Donnee),1,I) != NULL ){
        if( strcmp(A.emailll,email) == 0){
          break;
        }
    }
    fclose(I);
    setColor(7);
    gotoxy(36,10);
    printf("|-----------------------------------------------------------------------------------");
    gotoxy(36,12);
    printf("|                        | Nom : %s                Prenom : %s                      ",A.nomm,A.prenomm);
    gotoxy(36,14);
    printf("|                        |----------------------------------------------------------");
    gotoxy(36,16);
    printf("|          Photo         | Num Tele : %s           ID : %s                         ",A.numtelee,A.massouid);
    gotoxy(36,18);
    printf("|                        |----------------------------------------------------------");
    gotoxy(36,20);
    printf("|------------------------| Email : %s                                               ",A.emailll);
    gotoxy(36,22);
    printf("|-----------------------------------------------------------------------------------");
    gotoxy(36,24);
    printf("|                           Universite : Abdelmalek Essaadi                             ");
    gotoxy(36,26);
    printf("|-----------------------------------------------------------------------------------");
    setColor(9);
    gotoxy(38,30);
    printf("Appuyer sur une touche pour retourner au menu principale...");
    getch();
    menu_profile();

}
#endif
