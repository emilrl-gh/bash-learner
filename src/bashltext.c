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
  int result1; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  printf(FONT_BOLD BRIGHT_BLUE "%s", "To go into a directory you have to know the cd command. You use it as follows: cd + nameofdirectory. Try it!(type cd test): \n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result1 = strcmp(st, "cd test");
    result2 = strcmp(st, "cd test ");
    if(result1 == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system("cd test");
      printf(FONT_BOLD COLOR_BLUE "%s%s", "Good Job you just learned how to move from another directory to another.",
                                  " To move out of a directory you use this specific command: cd .. \n" ANSI_RESET);
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing cd test: " ANSI_RESET);
      if(result1 == 10 || result2 == 10){
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
                " It stands for list. Directories that start with . will not be shown Try it! :\n " ANSI_RESET);
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
  printf(FONT_BOLD COLOR_YELLOW "%s%s", "Each command has a 'paramater'. Each parameter starts with - for example command + -a -h For example to see everything",
                                        " in a directory including the ones that start with . you can use the command ls and add the parameter -a. Try it ! (ls -a): \n" ANSI_RESET);
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
  printf(FONT_BOLD COLOR_YELLOW "%s%s", "The man command is used to know everything about a command. ",
                                      " It works like this man nameofcommand. To leave the man command use the q key. Try it (type man ls): \n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "man ls");
    result2 = strcmp(st, "man ls ");
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

void mkdir_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  printf(FONT_BOLD COLOR_BLUE "%s%s", "To create a directory you need to know the command mkdir which stands for make directory. ",
                                    "To create a directory you use mkdir and add the name of the directory. Try it! (Type mkdir test) \n " ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "mkdir test");
    //result2 = strcmp(st, "mkdir test ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the mkdir directory ! \n");
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing mkdir test: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the mkdir directory !  \n");
        break;
      }
    }
  }
}

void rmdir_text(){
  char st[200];//This string is used for getting user input
  char cmd[100]; //This string is used to run actual commands in the shell.
  int result; //this interger is used as the output of comparing two strings.
  int result2;
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  printf(FONT_BOLD COLOR_BLUE "%s%s", "To remove a directory you need to know the command rmdir which stands for remove directory. ",
                                    "To remove a directory you use rmdir and add the name of the directory. Try it! (Type rmdir test) \n" ANSI_RESET);
  while(1){
    fgets(st, 200, stdin);
    result = strcmp(st, "rmdir test");
    result2 = strcmp(st, "rmdir test ");
    if(result == 10 || result2 == 10){
      sprintf(cmd, "%s\n", st);
      system(cmd);
      printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the rmdir directory ! \n");
      break;
    } else {
      printf(FONT_BOLD COLOR_RED "Try again by typing rmdir test: " ANSI_RESET);
      if(result == 10 || result2 == 10){
        sprintf(cmd, "%s\n", st);
        system(cmd);
        printf(FONT_BOLD COLOR_YELLOW "Good Job! You know how to use the rmdir directory !  \n");
        break;
      }
    }
  }
}

void alltext(){
  char st[200];//This string is used for getting user input
  char str[200]; //str is used as a string to store the checkpoints read in place.txt
  char* filename = "place.txt"; // file for storing checkpoint
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

  printf(FONT_BOLD BRIGHT_GREEN "Hello and Welcome to bash learner,  What's your name ?\n");
  fgets(st, 200, stdin);
  printf("Hi %s I am your bash teacher my name is Basher.", st);
  rewind(fp);
  fprintf(fp,"pwd\n"); // Write checkpoint
  pwd_text();
  rewind(fp);
  fprintf(fp,"ls\n"); // Write checkpoint
  ls_text();
  ls_atext();
  rewind(fp);
  fprintf(fp,"mkdir\n"); // Write checkpoint
  mkdir_text();
  rewind(fp);
  fprintf(fp,"cd\n"); // Write checkpoint
  cd_text();
  man_text();
  rmdir_text();
  fclose(fp);
  exit(0);
}

int readcheckpoint(FILE *fp, char* filename) {
  char* findpwd = "pwd"; /*                                                     */
  char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
  char* findls = "ls"; /*                                                     */
  char* findmkdir = "mkdir"; /*                                               */
  char str[MAXCHAR];
  if (fp == NULL) {
    printf(FONT_BOLD COLOR_RED);
    fprintf( "%s: %s!\n", filename, "Checkpoint file unavailable, exiting" ANSI_RESET);
    exit(1);
  }
  while (fgets(str, MAXCHAR, fp) != NULL) {
    printf("%s ", str);
    printf("Checking for checkpoints !\n");
    if (strcmp(str, findmkdir) == 10){
      printf("Found checkpoint !\n");
      rewind(fp);
      fprintf(fp,"mkdir\n"); // Write checkpoint
      mkdir_text();
      rewind(fp);
      fprintf(fp,"cd\n"); // Write checkpoint
      cd_text();
      man_text();
      rmdir_text();
      fclose(fp);
      break;
    }
    else if (strcmp(str, findls) == 10){
      printf("Found checkpoint !\n");
      rewind(fp);
      fprintf(fp,"ls\n"); // Write checkpoint
      ls_text();
      ls_atext();
      rewind(fp);
      fprintf(fp,"mkdir\n"); // Write checkpoint
      mkdir_text();
      rewind(fp);
      fprintf(fp,"cd\n"); // Write checkpoint
      cd_text();
      man_text();
      rmdir_text();
      fclose(fp);
      break;
    }
    else if (strcmp(str, findcd) == 10){
      printf("Found checkpoint !\n");
      rewind(fp);
      fprintf(fp,"ls\n"); // Write checkpoint
      ls_text();
      ls_atext();
      rewind(fp);
      fprintf(fp,"mkdir\n"); // Write checkpoint
      mkdir_text();
      rewind(fp);
      fprintf(fp,"cd\n"); // Write checkpoint
      cd_text();
      man_text();
      rmdir_text();
      fclose(fp);
      break;
    }
    else if (strcmp(str, findpwd) == 10){
      printf("Found checkpoint !\n");
      rewind(fp);
      fprintf(fp,"pwd\n"); // Write checkpoint
      pwd_text();
      rewind(fp);
      fprintf(fp,"ls\n"); // Write checkpoint
      ls_text();
      ls_atext();
      rewind(fp);
      fprintf(fp,"mkdir\n"); // Write checkpoint
      mkdir_text();
      fprintf(fp,"cd\n"); // Write checkpoint
      cd_text();
      man_text();
      rmdir_text();
      fclose(fp);
      break;
    }
  }
}
