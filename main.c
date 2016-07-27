/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "core/core.h"

int main(){

    restart:
    banner();
    char str[100];

    // Ctrl+C Detect

    signal(SIGINT, ctrlcDetect);

    while(1){
    do{

        printf("l0l >");
        scanf("%99s", str);

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
        else if (strcmp(str,"restart") == 0){
            clear();
            goto restart;
        }
        else{
            printf("\n[*] Invalid Command !\n\n");
        }

  }while(2);
}

    return 0;
}
