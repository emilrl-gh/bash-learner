/* Author: RazerSAISO */
/* This program will guide you through learning the command line interface (CLI) mainly the bash shell */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20
#define MAXCHAR 1000

int main()
{
   char st[MAX_LIMIT];
   char cmd[100];
   char compar[] = "cd"; //This is the string that we will that we will compare later.   
   char rf[MAXCHAR];
   char ch;
   int result;
   FILE *fp;

   fp = fopen("place.txt", "w+");//open place.txt
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

		
	    }
        }

   }

   return 0;
}
