/*
   Author: K0stad1n
   This program will guide you through learning the command line interface (CLI) mainly the bash shell
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colors.c"
#define MAX_LIMIT 20
#define MAXCHAR 1000

int main()
{
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

   system(checkforupdate);
   fp = fopen(filename, "r+");

   if (fp == NULL){
       printf("Could not open file %s, rerun this code and place.txt was just created. If this problem persists please report it as an issue on Github.\n ",filename);
       system("touch place.txt");
       exit(EXIT_FAILURE);
   }
   while (fgets(str, MAXCHAR, fp) != NULL)
       printf("");
    //here starts pwd checkpoint
   if (strcmp (str, findpwd) == 10) {
       boldgreen();
       printf("Found checkpoint !\n");
       reset();
       printf("In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directory or folder you are in. you can name directories whatever you want. Try it write pwd! \n ");
       fgets(st, MAX_LIMIT, stdin);
       result = strcmp(st,"pwd");
       if(result == 10)
       {
            sprintf(cmd, "%s\n", st);
            system(cmd);
            fprintf(fp,"cd\n");
            boldyellow();
            printf("Good Job you just learned your first command!\n");
            printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it! (type cd test): \n");
            reset();
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
                printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
                printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
                printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . will not be shown Try it! :\n ");
                fgets(st,MAX_LIMIT, stdin);
                result = strcmp(st,"ls");
                if (result == 10)
                {
                    sprintf(cmd, "%s\n", st);
                    system(cmd);
                    printf("\n Good Job ! You know how look at the directories! \n");
                    printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . \n");
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"ls -a");
            if (result == 10)
            {
                sprintf(cmd, "%s\n", st);
                system(cmd);//run command from user input
                    printf("Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n");
                    printf("You have to know that not all commands have a -h parameters in this case you should use the man command with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n");
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"man ls");
                    if (result == 10){
                        sprintf(cmd, "%s\n", st);
                        system(cmd);
                        printf("Good Job! You know how to use the man command !\n");
                        printf("You need to know how to read files from the command line (coming soon). \n");
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
   //Start of cd checkpoint
   else if (strcmp (str, findcd) == 10)
   {
            boldgreen();
            printf("Found cd checkpoint! \n");
            reset();
            printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
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
            boldyellow();
            printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
            printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
            printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . will not be shown Try it! :\n ");
            reset();
            fgets(st,MAX_LIMIT, stdin);
            result = strcmp(st,"ls");
                if (result == 10)
                {
                    sprintf(cmd, "%s\n", st);
                    system(cmd);
                    boldblue();
                    printf("\n Good Job ! You know how look at the directories! \n");
                    printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . \n");
                    reset();
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"ls -a");
            if (result == 10)
            {
                        sprintf(cmd, "%s\n", st);
                        system(cmd);//run command from user input
                        boldblue();
                        printf("Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n");
                        printf("You have to know that not all commands have a -h parameters in this case you should use the man command with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n");
                        reset();
                        fgets(st,MAX_LIMIT, stdin);
                        result = strcmp(st,"man ls");
                        if (result == 10){
                            sprintf(cmd, "%s\n", st);
                            system(cmd);
                            boldblue();
                            printf("Good Job! You know how to use the man command ! \n");
                            printf("You need to know how to read files from the command line (coming soon). \n");
                            reset();
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
   else if (strcmp (str, findls) == 10)
   {
       boldgreen();
       printf("Found ls checkpoint !\n");
       reset();
       printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
       printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . will not be shown Try it! :\n ");
       fgets(st,MAX_LIMIT, stdin);
       result = strcmp(st,"ls");
           if (result == 10)
           {
               sprintf(cmd, "%s\n", st);
               system(cmd);
               boldyellow();
               printf("\n Good Job ! You know how look at the directories! \n");
               printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . \n");
               reset();
               fgets(st,MAX_LIMIT, stdin);
               result = strcmp(st,"ls -a");
       if (result == 10)
       {
                    sprintf(cmd, "%s\n", st);
                    system(cmd);//run command from user input
                    boldblue();
                    printf("Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n");
                    printf("You have to know that not all commands have a -h parameters in this case you should use the man command with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n");
                    reset();
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"man ls");
                    if (result == 10){
                        sprintf(cmd, "%s\n", st);
                        system(cmd);
                        boldmagenta();
                        printf("Good Job! You know how to use the man command !\n");
                        printf("You need to know how to read files from the command line (coming soon). \n");
                        reset();
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
   }//end of ls checkpoint
   fprintf(fp,"pwd\n");//write

   if(fp == NULL)
   {
      printf("Error! Could not create a text file. Please report this error on GitHub");
      exit(1);
   }
   boldmagenta();
   printf("Hello and Welcome to bash learner,  What's you're name ?\n");
   fgets(st, MAX_LIMIT, stdin);
   printf("Hi %s, I am you're bash teacher my name is Basher.", st);
   printf("In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directory or folder you are in. you can name directories whatever you want. Try it write pwd! \n ");
   red();
   fgets(st, MAX_LIMIT, stdin);
   result = strcmp(st,"pwd");
   if(result == 10)
   {
        sprintf(cmd, "%s\n", st);
        system(cmd);
        fprintf(fp,"cd\n");
        boldblue();
        printf("Good Job you just learned your first command!\n");
        printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
        reset();
        fgets(st, MAX_LIMIT, stdin);
        if (strstr(st, compare) == NULL)
        {
            printf("Wrong retry. cd + the name of the directory.");
        }
        else
        {
            fprintf(fp,"ls\n");
            sprintf(cmd, "%s\n", st);
            system(cmd);
            boldgreen();
            printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
            printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
            printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . will not be shown Try it! :\n ");
            reset();
            fgets(st,MAX_LIMIT, stdin);
            result = strcmp(st,"ls");
        if (result == 10){
                sprintf(cmd, "%s\n", st);
                system(cmd);
                boldyellow();
                printf("\n Good Job ! You know how look at the directories! \n");
                printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with.\n");
                reset();
                fgets(st,MAX_LIMIT, stdin);
                result = strcmp(st,"ls -a");
		if (result == 10)
		{
                    sprintf(cmd, "%s\n", st);
                    system(cmd);//run command from user input
                    boldcyan();
                    printf("Another parameter is -h which almost always stands for help. It will show you all the parameters for the command. \n");
                    printf("You have to know that not all commands have a -h parameters in this case you should use the man command with the name of the command for example : man ls or man cd. Try it! (type man ls then to quit tap q.)\n");
                    reset();
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"man ls");
                    if (result == 10){
                        sprintf(cmd, "%s\n", st);
                        system(cmd);
                        boldyellow();
                        printf("Good Job! You know how to use the man command ! \n");
                        printf("You need to know how to create directories (coming soon, spoiler: mkdir).\n");
                        reset();
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
