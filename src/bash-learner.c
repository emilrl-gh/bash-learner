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
   char* filename = "place.txt"; // file for storing checkpoint
   FILE *fp; //This var is for opening place.txt
   fp = fopen(filename, "r+");
   system("git pull");
   readcheckpoint(fp, filename);
   alltext();
   return 0;
}
