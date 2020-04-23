/* Author: RazerSAISO */
/* This program will guide you through learning the command line interface (CLI) mainly the bash shell */
#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
   char str[MAX_LIMIT];	
   printf("Hello and Welcome to bash learner, I am you're bash teacher my name is Basher.\n");
   fgets(str, MAX_LIMIT, stdin); 
   printf("Hi %s", str); 
   return 0;
}
