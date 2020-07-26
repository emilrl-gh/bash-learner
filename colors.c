/*
    Author: K0stad1N
    This c file will be used to add colors to strings.
    based on http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void red () {
  printf("\033[1;31m");
}

void boldred () {
  printf("\033[1;31m");
}

void green (){
    printf("\033[0;32m");
}

void boldgreen (){
    printf("\033[1;32m");
}

void yellow (){
  printf("\033[1;33m");
}

void boldyellow (){
    printf("\033[01;33m");
}

void blue (){
    printf("\033[0;34m");
}

void boldblue (){
    printf("\033[1;34m");
}

void magenta (){
    printf("\033[0;35m");
}

void boldmagenta (){
    printf("\033[1;35m");
}

void cyan (){
    printf("\033[0;36m");
}

void boldcyan (){
    printf("\033[1;36m");
}

void reset () {
  printf("\033[0m");
}

