/*
   Author: K0stad1n
   This program will guide you through learning the command line interface (CLI) mainly the bash shell
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#include "bashltext.c"

#define MAXL 2000
int main()
{
   char st[200];//This string is used for getting user input
   char cmd[100]; //This string is used to run actual commands in the shell.
   char compare[20] = "cd" ; //This is the string that we will that we will compare later.
   int result; //this interger is used as the output of comparing two strings.
   char str[200]; //str is used as a string to store the checkpoints read in place.txt
   char* filename = "place.txt"; // file for storing checkpoint
   const char* findpwd = "pwd"; /*                                                     */
   const char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
   const char* findls = "ls"; /*                                                     */
   const char* checkforupdate = "sh checkforupdate.sh"; // check for updates using a shell script
   FILE *fp; //This var is for opening place.txt
   fp = fopen(filename, "r+");

   if (fp == NULL){
       fprintf(stderr, "%s: %s!\n", filename, strerror(errno));
       fprintf(stdout, "%s%s%s [%sY%s/%sn%s]> ", FONT_BOLD COLOR_YELLOW, "Continue ? or stop so I can create file.", ANSI_RESET, BRIGHT_GREEN, ANSI_RESET, COLOR_RED, ANSI_RESET);
       fgets(st, 200, stdin);
       if (strcmp(st,"Y") == 10){
         printf("Ok\n");
       } else {
         printf("%s%s%s", "Creating file please restart the program.",
                    " By typing the command bash-learner when you are in",
                    " linux, on mac type ./bash-learner, on windows rerun the .exe file.\n");
        system("touch place.txt");
       }
   }
   system("git pull");

   if(fp == NULL)
   {
      printf("Error! Could not create a text file. Please report this error on GitHub");
      exit(1);
   }
   readcheckpoint(fp, filename);
   printf(FONT_BOLD BRIGHT_GREEN "Hello and Welcome to bash learner,  What's your name ?\n");
   fgets(st, 200, stdin);
   printf("Hi %s I am your bash teacher my name is Basher.", st);
   rewind(fp);
   fprintf(fp,"pwd\n"); // Write checkpoint
   pwd_text();
   cd_text();
   rewind(fp);
   fprintf(fp,"cd\npwd\n"); // Write checkpoint
   ls_text();
   rewind(fp);
   fprintf(fp,"ls\ncd\npwd\n"); // Write checkpoint
   ls_atext();
   man_text();
   fclose(fp);
   return 0;
}
