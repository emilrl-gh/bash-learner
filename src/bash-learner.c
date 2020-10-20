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
   char* filename = "place.txt"; // file for storing checkpoint
   FILE *fp; //This var is for opening place.txt
   fp = fopen(filename, "r+");
   ascii_art();
   if (fp == NULL){
       fprintf(stderr, "%s: %s!\n", filename, strerror(errno));
       printf("Created %s file\n", filename);
       system("touch place.txt");
       fp = fopen(filename, "r+");
   }
   system("git pull");
   readcheckpoint(fp, filename);
   alltext();
   return 0;
}
