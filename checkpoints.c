#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#define MAX_LIMIT 20
#define MAXCHAR 1000

int pwd(){
  char st[MAX_LIMIT];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  char compare[20] = "cd" ; //This is the string that we will that we will compare later.
  int result; //this interger is used as the output of comparing two strings.
  char str[MAXCHAR]; //str is used as a string to store the checkpoints read in place.txt
  FILE *fp;
  char* filename = "place.txt";
  fp = fopen(filename, "r+");
  printf("%s\n%s\n", "In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directory or folder you are in.",
                 " You can name directories whatever you want. Try it write pwd! \n ");
  fgets(st, MAX_LIMIT, stdin);
  result = strcmp(st,"pwd");
  if(result == 10)
  {
       sprintf(cmd, "%s\n", st);
       system(cmd);
       fprintf(fp,"cd\n");
       printf(FONT_BOLD BRIGHT_YELLOW "Good Job you just learned your first command!\n");
       printf("%s\n%s\n%s\n", "Now that you've learned how to see in what directory you now need to know how to move from one directory to another.",
                      " For that you need to know the command cd which stands for Change Directory and add the name of the directory.",
                      " It should look like this: cd nameofdirectory. Try it! (type cd test): \n" ANSI_RESET);
       fgets(st, MAX_LIMIT, stdin);
       if (strstr(st, compare) == NULL)
       {
           printf("Wrong retry. cd + the name of the directory.");
       }
       else
       {
           fprintf(fp,"ls");
           sprintf(cmd, "%s\n", st);
           system(cmd);
           printf( BRIGHT_RED "%s\n%s\n", "Good Job you just learned how to move from another directory to another.",
                                          "To move out of a directory you use this specific command: cd .. \n");
           printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
           printf("%s\n%s\n", "It's good you thought of that to look at the directories you can go in, you need the following command: ls.",
                             "It stands for list. Directories that start with . will not be shown Try it! :\n "ANSI_RESET );
           fgets(st,MAX_LIMIT, stdin);
           result = strcmp(st,"ls");
           if (result == 10)
           {
               sprintf(cmd, "%s\n", st);
               system(cmd);
               printf("\n Good Job ! You know how look at the directories! \n");
               printf("%s%s%s\n", "Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter ",
                                  "so you can see what you really want to see for example in the ls" ,
                                  " command you can add -a to see every directories even the ones that start with . Try it! : ");
               fgets(st,MAX_LIMIT, stdin);
               result = strcmp(st,"ls -a");
       if (result == 10)
       {
           sprintf(cmd, "%s\n", st);
           system(cmd);//run command from user input
               printf("Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n");
               printf("%s%s", "You have to know that not all commands have a -h parameters in this case you should use the man command",
                      " with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n");
               fgets(st,MAX_LIMIT, stdin);
               result = strcmp(st,"man ls");
               if (result == 10){
                   sprintf(cmd, "%s\n", st);
                   system(cmd);
                   printf("Good Job! You know how to use the man command !\n");
                   printf("You need to know how to read files from the command line (coming soon, spoiler: mkdir). \n");
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
  return 0; //end of the pwd checkpoint
}


int cd(){
  char st[MAX_LIMIT];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  char compare[20] = "cd" ; //This is the string that we will that we will compare later.
  int result; //this interger is used as the output of comparing two strings.
  char str[MAXCHAR]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
  const char* findpwd = "pwd"; /*                                                     */
  const char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
  const char* findls = "ls"; /*                                                     */
  const char* checkforupdate = "sh checkforupdate.sh"; // check for updates using a shell script
  FILE *fp; //This var is for opening place.txt
  fp = fopen(filename, "r+");
  printf("%s%s","Now that you've learned how to see in what directory you now need to know how to move from one directory to another.",
                " For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
  fgets(st, MAX_LIMIT, stdin);
  if (strstr(st, compare) == NULL)
  {
      printf("Wrong retry. cd + the name of the directory. \n");
  }
  else
  {
  fprintf(fp,"ls\n");
  sprintf(cmd, "%s\n", st);
  system(cmd);
  printf(FONT_BOLD COLOR_YELLOW "%s", "Good Job you just learned how to move from another directory to another.",
                                        "To move out of a directory you use this specific command: cd .. \n" );
  printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
  printf("%s" "It's good you thought of that to look at the directories you can go in, you need the following command: ls.",
                "It stands for list. Directories that start with . will not be shown Try it! :\n " ANSI_RESET);
  fgets(st,MAX_LIMIT, stdin);
  result = strcmp(st,"ls");
      if (result == 10)
      {
          sprintf(cmd, "%s\n", st);
          system(cmd);
          printf(FONT_BOLD BRIGHT_BLUE "\n Good Job ! You know how look at the directories! \n");
          printf("%s%s" "\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter",
                  " so you can see what you really want to see for example in the ls command you can add -a ",
                  "to see every directories even the ones that start with . \n" ANSI_RESET);
          fgets(st,MAX_LIMIT, stdin);
          result = strcmp(st,"ls -a");
  if (result == 10)
  {
              sprintf(cmd, "%s\n", st);
              system(cmd);//run command from user input
              printf(FONT_BOLD COLOR_BLUE "%s", "Another parameter is -h which almost always stands for help.",
                                                 "It will show you all the parameters for the command. \n");
              printf("%s%s%s", "You have to know that not all commands have a -h parameters in this case ",
                     "you should use the man command with the name of the command for example :",
                     " man ls or man cd. Try it! (type man ls then to quit tap q.)\n" ANSI_RESET);
              fgets(st,MAX_LIMIT, stdin);
              result = strcmp(st,"man ls");
              if (result == 10){
                  sprintf(cmd, "%s\n", st);
                  system(cmd);
                  printf(FONT_BOLD COLOR_BLUE "Good Job! You know how to use the man command ! \n");
                  printf("You need to know how to read files from the command line (coming soon,  spoiler: mkdir). \n" ANSI_RESET);
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
    return 0;
  } //end of cd checkpoint


int ls(){
  char st[MAX_LIMIT];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  char compare[20] = "cd" ; //This is the string that we will that we will compare later.
  int result; //this interger is used as the output of comparing two strings.
  char str[MAXCHAR]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
  const char* findpwd = "pwd"; /*                                                     */
  const char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
  const char* findls = "ls"; /*                                                     */
  FILE *fp; //This var is for opening place.txt
  fp = fopen(filename, "r+");
  printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
  printf("%s%s", "It's good you thought of that to look at the directories you can go in, you need the following command: ls.",
                " It stands for list. Directories that start with . will not be shown Try it! :\n ");
  fgets(st,MAX_LIMIT, stdin);
  result = strcmp(st,"ls");
      if (result == 10)
      {
          sprintf(cmd, "%s\n", st);
          system(cmd);
          printf( FONT_BOLD COLOR_YELLOW "\n Good Job ! You know how look at the directories! \n");
          printf("%s%s%s%s", "\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' ",
                          " you can add a parameter",
                          " so you can see what you really want to see for example in the ls command you can add -a ",
                          "to see every directories even the ones that start with . Try it: \n" ANSI_RESET);
          fgets(st,MAX_LIMIT, stdin);
          result = strcmp(st,"ls -a");
  if (result == 10)
  {
               sprintf(cmd, "%s\n", st);
               system(cmd);//run command from user input
               printf(FONT_BOLD COLOR_BLUE "Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n" );
               printf("%s%s", "You have to know that not all commands have a -h parameters in this case you should use the man command with the name ",
                             "of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n" ANSI_RESET);
               fgets(st,MAX_LIMIT, stdin);
               result = strcmp(st,"man ls");
               if (result == 10){
                   sprintf(cmd, "%s\n", st);
                   system(cmd);
                   printf(FONT_BOLD COLOR_MAGENTA"Good Job! You know how to use the man command !\n");
                   printf("You need to know how to read files from the command line (coming soon,  spoiler: mkdir). \n" ANSI_RESET);
                   exit(0);
               }
               else
               {
                   printf("Wrong command try again !");
                   exit(0);
               }
  }
  else {
      printf("Wrong retry.");
      exit(0);
  }
  exit(0);
  }
  return 0;
}



int readcheckpoint() {
  char* findpwd = "pwd"; /*                                                     */
  char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
  char* findls = "ls"; /*                                                     */
  char str[MAXCHAR];
  char* filename = "place.txt";
  FILE *fp;
  fp = fopen(filename, "rb");
  if (fp == NULL) {
    printf(FONT_BOLD COLOR_RED);
    fprintf( "%s: %s!\n", filename, "Checkpoint file unavailable, exiting" ANSI_RESET);
    exit(1);
  }
  while (fgets(str, MAXCHAR, fp) != NULL) {
    printf("Checking for checkpoints !");
    if (strcmp(str, findls) == 10){
      ls();
    }
    else if (strcmp(str, findcd) == 10){
      cd();
    }
    else if (strcmp(str, findpwd) == 10){
      pwd();
    }
  }
}