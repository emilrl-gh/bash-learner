#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"
#define MAXL 2000
#define MAXCHAR 2000

void pwd_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
  FILE *fp; //This var is for opening place.txt
  fp = fopen(filename, "r+");
  fprintf(fp,"pwd\n");
  printf(FONT_BOLD BRIGHT_GREEN "%s%s\n", "In the shell, you can move between 'folders' called directories. "
              " The first command you will learn is `pwd`, it shows which directory or folder you're in. ",
              " You can name directories whatever you want. Try it write pwd: " ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "pwd");
    result2 = strcmp(st, "pwd ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_BLUE "Good Job you just learned your first command!\n" );
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing pwd: \n" ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_BLUE "Good Job you just learned your first command!\n" );
        break;
      }
    }
  }
}

void cd_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
  FILE *fp; //This var is for opening place.txt
  fp = fopen(filename, "r+");
  fprintf(fp,"cd\n");
  printf(FONT_BOLD BRIGHT_BLUE "%s%s%s", "Now that you've learned how to see in what directory you now need to know how to move from one directory to another.",
                  " For that you need to know the command cd which stands for Change Directory and add the name of the directory.",
                  " It should look like this: cd test. Try it!: \n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "cd test");
    result2 = strcmp(st, "cd test ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_BLUE "Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n" ANSI_RESET);
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing cd test: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_BLUE "Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n" ANSI_RESET);
        break;
      }
    }
  }
}

void ls_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
  FILE *fp; //This var is for opening place.txt
  fp = fopen(filename, "r+");
  fprintf(fp,"ls\n");
  printf(FONT_BOLD BRIGHT_GREEN "Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
  printf("%s%s", "It's good you thought of that to look at the directories you can go in, you need the following command: ls.",
                "It stands for list. Directories that start with . will not be shown Try it! :\n " ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "ls");
    result2 = strcmp(st, "ls ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_YELLOW"\n Good Job ! You know how look at the directories! \n");
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing ls: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_YELLOW"\n Good Job ! You know how look at the directories! \n");
        break;
      }
    }
  }
}

void ls_atext(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  printf(FONT_BOLD COLOR_YELLOW "%s%s%s", "\n Something I did not tell you is that almost each command has what is called a 'parameter' ",
                  " by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls",
                  " command you can add -a to see every directories even the ones that start with. Try it: \n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "ls -a");
    result2 = strcmp(st, "ls -a ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD BRIGHT_BLUE "Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n" );
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing ls -a: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD BRIGHT_BLUE "Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n" );
        break;
      }
    }
  }
}

void man_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  printf("%s%s", "You have to know that not all commands have a -h parameters in this case you should use the man command",
                  " with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "man ls");
    //result2 = strcmp(st, "man ls ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the man command ! \n");
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing ls -a: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the man command ! \n");
        break;
      }
    }
  }
}

int readcheckpoint(FILE *fp, filename) {
  char* findpwd = "pwd"; /*                                                     */
  char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
  char* findls = "ls"; /*                                                     */
  char str[MAXCHAR];
  if (fp == NULL) {
    printf(FONT_BOLD COLOR_RED);
    fprintf( "%s: %s!\n", filename, "Checkpoint file unavailable, exiting" ANSI_RESET);
    exit(1);
  }
  while (fgets(str, MAXCHAR, fp) != NULL) {
    printf("%s ", str);
    printf("Checking for checkpoints !\n");
    if (strcmp(str, findls) == 10){
      ls_text();
    }
    else if (strcmp(str, findcd) == 10){
      cd_text();
    }
    else if (strcmp(str, findpwd) == 10){
      pwd_text();
    }
  }
}
