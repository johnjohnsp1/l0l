/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "system/core/core.h"

int main(){

    banner();
    char str[100];

    // Ctrl+C Detect

    signal(SIGINT, ctrlcDetect);

    while(1){
    do{

        mainConsole( str );

        if (strcmp(str,"help") == 0){
            help();
        }
        else if (strcmp(str,"exit") == 0){
            closeApp();
        }
        else if (strcmp(str,"banner") == 0){
            banner();
        }
        else if (strcmp(str,"clear") == 0){
            clear();
        }

        else{
            printf("\n[*] Invalid Command !\n\n");
        }

  }while(2);
}

    return 0;
}
