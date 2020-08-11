/*
   Author: K0stad1n
   This program will guide you through learning the command line interface (CLI) mainly the bash shell
 */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#include "checkpoints.c"
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
   fp = fopen(filename, "rb");

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
   system(checkforupdate);
   readcheckpoint();
   while (fgets(str, 200, fp) != NULL)
       printf("");
   fprintf(fp,"pwd\n");//write

   if(fp == NULL)
   {
      printf("Error! Could not create a text file. Please report this error on GitHub");
      exit(1);
   }
   printf(FONT_BOLD BRIGHT_GREEN "Hello and Welcome to bash learner,  What's your name ?\n");
   fgets(st, 200, stdin);
   printf("Hi %s I am you're bash teacher my name is Basher.", st);
   printf("%s\n%s\n", "In the shell, you can move between 'folders' called directories. "
               " The first command you will learn is `pwd`, it shows which directory or folder you're in. ",
               " You can name directories whatever you want. Try it write pwd! \n " ANSI_RESET);
   fgets(st, 200, stdin);
   result = strcmp(st,"pwd");
   if(result == 10)
   {
        sprintf(cmd, "%s\n", st);
        system(cmd);
        fprintf(fp,"cd\n");
        printf(FONT_BOLD COLOR_BLUE "Good Job you just learned your first command!\n" );
        printf("%s%s%s", "Now that you've learned how to see in what directory you now need to know how to move from one directory to another.",
                        " For that you need to know the command cd which stands for Change Directory and add the name of the directory.",
                        " It should look like this: cd nameofdirectory. Try it!: \n" ANSI_RESET);
        fgets(st, 200, stdin);
        if (strstr(st, compare) == NULL)
        {
            printf("Wrong retry. cd + the name of the directory.");
        }
        else
        {
            fprintf(fp,"ls\n");
            sprintf(cmd, "%s\n", st);
            system(cmd);
            printf(FONT_BOLD COLOR_BLUE "Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
            printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
            printf("%s%s", "It's good you thought of that to look at the directories you can go in, you need the following command: ls.",
                          "It stands for list. Directories that start with . will not be shown Try it! :\n " ANSI_RESET);
            fgets(st, 200, stdin);
            result = strcmp(st,"ls");
        if (result == 10){
                sprintf(cmd, "%s\n", st);
                system(cmd);
                printf(FONT_BOLD COLOR_YELLOW"\n Good Job ! You know how look at the directories! \n");
                printf("%s%s%s", "\n Something I did not tell you is that almost each command has what is called a 'parameter' ",
                                " by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls",
                                " command you can add -a to see every directories even the ones that start with. Try it: \n" ANSI_RESET);
                fgets(st, MAXL, stdin);
                result = strcmp(st,"ls -a");
		if (result == 10)
		{
                    sprintf(cmd, "%s\n", st);
                    system(cmd);//run command from user input
                    printf(FONT_BOLD BRIGHT_BLUE "Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n" );
                    printf("%s%s%s", "You have to know that not all commands have a -h parameters in this case you should use the man command",
                                    " with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n" ANSI_RESET);
                    fgets(st,MAXL, stdin);
                    result = strcmp(st,"man ls");
                    if (result == 10){
                        sprintf(cmd, "%s\n", st);
                        system(cmd);
                        printf(FONT_BOLD COLOR_YELLOW"Good Job! You know how to use the man command ! \n");
                        printf("You need to know how to create directories (coming soon, spoiler: mkdir).\n" ANSI_RESET);
                    }
                    else
                    {
                        printf("Wrong command try again !");
                    }


		    }
        else {
            printf("Wrong retry.");
        }
	      }
        }
   }
   return 0;
}
