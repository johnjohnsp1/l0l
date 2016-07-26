/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "core/core.h"

int main(){

    banner();
    char str[100];

    do{
        console:
        consoleRead( str );

        if (strcmp(str,"help") == 0){
            help();
        }
        else if (strcmp(str,"exit") == 0){
            closeApp();
        }
        else if (strcmp(str,"banner") == 0){
            banner();
            goto console;
        }
        else if (strcmp(str,"clear") == 0){
            clear();
            goto console;
        }
        else{
            printf("\n[*] Invalid Command !\n\n");
        }

  }while(1);

    return 0;
}
