/* Author: RazerSAISO */
/* This program will guide you through learning the command line interface (CLI) mainly the bash shell */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20

int main()
{
   char str[MAX_LIMIT];
   char cmd[100];   
   int result;
   printf("Hello and Welcome to bash learner, I am you're bash teacher my name is Basher. What's you're name ?\n");
   fgets(str, MAX_LIMIT, stdin); 
   printf("Hi %s", str); 
   printf("In the shell you can move between 'folders' called directories the first command you will learn is pwd it shows in which directorie you are in. Try it write pwd! \n ");
   fgets(str, MAX_LIMIT, stdin);
   result = strcmp(str,"pwd");
   if(result == 10)
   {
        sprintf(cmd, "%s\n", str);
	system(cmd);
	printf("Good Job you just learned your first command!\n");
      printf("Now that you've learned how to see in what directorie you now need to know how to move from one directorie to another.\n");	
   
   }
   return 0;
}
