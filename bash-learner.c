/*
   Author: K0stad1n
   This program will guide you through learning the command line interface (CLI) mainly the bash shell
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20
#define MAXCHAR 1000

int main()
{
   char st[MAX_LIMIT];//This string is used for
   char cmd[100]; //This string is used to run actual commands in the shell.
   char compar[20] = "cd" ; //This is the string that we will that we will compare later.
   int result; //this interger is used as the output of comparing two strings.
   char str[MAXCHAR]; //str is used as a string to store the checkpoints read in place.txt
   char* filename = "place.txt"; // file for storing checkpointa
   const char* findpwd = "pwd"; /*                                                     */
   const char* findcd = "cd";  /*   These strings are for comparing with checkpoints  */
   const char* findls = "ls"; /*                                                     */
   FILE *fp; //This var is for opening place.txt
   
   fp = fopen(filename, "r+");
   if (fp == NULL){
       printf("Could not open file %s, rerun this code and place.txt was just created. If this problem persists please report it as an issue on Github.\n ",filename);
       system("touch place.txt");
       exit(EXIT_FAILURE);
   }
   while (fgets(str, MAXCHAR, fp) != NULL)
       printf("%s", str);
    //here starts pwd checkpoint
   if (strcmp (str, findpwd) == 10) {
       printf("Found checkpoint !\n");
       printf("In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directory or folder you are in. you can name directories whatever you want. Try it write pwd! \n ");
       fgets(st, MAX_LIMIT, stdin);
       result = strcmp(st,"pwd");
       if(result == 10)
       {
            sprintf(cmd, "%s\n", st);
            system(cmd);
            fprintf(fp,"cd\n");
            printf("Good Job you just learned your first command!\n");
            printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
            fgets(st, MAX_LIMIT, stdin);
            if (strstr(st, compar) == NULL)
            {
                printf("Wrong retry. cd + the name of the directory.");
            }
            else
            {
                fprintf(fp,"ls\n");
                sprintf(cmd, "%s\n", st);
                system(cmd);
                printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
                printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
                printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . while not be shown Try it! :\n ");
                fgets(st,MAX_LIMIT, stdin);
                result = strcmp(st,"ls");
                if (result == 10)
                {
                    sprintf(cmd, "%s\n", st);
                    system(cmd);
                    printf("\n Good Job ! You know how look at the directories! \n");
                    printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . ");
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"ls -a");
            if (result == 10)
            {
                sprintf(cmd, "%s\n", st);
                system(cmd);//run command from user input
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
            printf("Found cd checkpoint! \n");
            printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
            fgets(st, MAX_LIMIT, stdin);
            if (strstr(st, compar) == NULL)
            {
                printf("Wrong retry. cd + the name of the directory.");
            }
            else
            {
            fprintf(fp,"ls\n");
            sprintf(cmd, "%s\n", st);
            system(cmd);
            printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
            printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
            printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . while not be shown Try it! :\n ");
            fgets(st,MAX_LIMIT, stdin);
            result = strcmp(st,"ls");
                if (result == 10)
                {
                    sprintf(cmd, "%s\n", st);
                    system(cmd);
                    printf("\n Good Job ! You know how look at the directories! \n");
                    printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . ");
                    fgets(st,MAX_LIMIT, stdin);
                    result = strcmp(st,"ls -a");
            if (result == 10)
            {
                        sprintf(cmd, "%s\n", st);
                        system(cmd);//run command from user input
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
       printf("Found ls checkpoint !");
       printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
       printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . while not be shown Try it! :\n ");
       fgets(st,MAX_LIMIT, stdin);
       result = strcmp(st,"ls");
           if (result == 10)
           {
               sprintf(cmd, "%s\n", st);
               system(cmd);
               printf("\n Good Job ! You know how look at the directories! \n");
               printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . ");
               fgets(st,MAX_LIMIT, stdin);
               result = strcmp(st,"ls -a");
       if (result == 10)
       {
                   sprintf(cmd, "%s\n", st);
                   system(cmd);//run command from user input
       }
       else {
           printf("Wrong retry.");
       }
       }
   }//end of ls checkpoint
   fprintf(fp,"pwd\n");//write
   
   if(fp == NULL)
   {
      printf("Error! Could not create a text file. Please report this error on GitHub");   
      exit(1);             
   }
    
   printf("Hello and Welcome to bash learner, I am you're bash teacher my name is Basher. What's you're name ?\n");
   fgets(st, MAX_LIMIT, stdin); 
   printf("Hi %s", st);
   printf("In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directory or folder you are in. you can name directories whatever you want. Try it write pwd! \n ");
   fgets(st, MAX_LIMIT, stdin);
   result = strcmp(st,"pwd");
   if(result == 10)
   {
        sprintf(cmd, "%s\n", st);
        system(cmd);
        fprintf(fp,"cd\n");
        printf("Good Job you just learned your first command!\n");
        printf("Now that you've learned how to see in what directory you now need to know how to move from one directory to another. For that you need to know the command cd which stands for Change Directory and add the name of the directory. It should look like this: cd nameofdirectory. Try it!: \n");
        fgets(st, MAX_LIMIT, stdin);
        if (strstr(st, compar) == NULL)
        {
            printf("Wrong retry. cd + the name of the directory.");
        }
        else
        {
            fprintf(fp,"ls\n");
            sprintf(cmd, "%s\n", st);
            system(cmd);
            printf("Good Job you just learned how to move from another directory to another. To move out of a directory you use this specific command: cd .. \n");
            printf("Now you may think : Basher how do I see the possible directories in which I can go in ? \n ");
            printf("It's good you thought of that to look at the directories you can go in, you need the following command: ls. It stands for list. Directories that start with . while not be shown Try it! :\n ");
            fgets(st,MAX_LIMIT, stdin);
            result = strcmp(st,"ls");
        if (result == 10){
                sprintf(cmd, "%s\n", st);
                system(cmd);
                printf("\n Good Job ! You know how look at the directories! \n");
                printf("\n Something I did not tell you is that almost each command has what is called a 'parameter' by that I mean an 'argument' you can add a parameter so you can see what you really want to see for example in the ls command you can add -a to see every directories even the ones that start with . ");
                fgets(st,MAX_LIMIT, stdin);
                result = strcmp(st,"ls -a");
		if (result == 10)
		{ 
                    sprintf(cmd, "%s\n", st);
                    system(cmd);//run command from user input
		}
        else {
            printf("Wrong retry.");
        }
	    }
        }
   }
   return 0;
}
