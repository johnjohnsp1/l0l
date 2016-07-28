/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "main.h"

int main(){

    banner();



    char command[100];

    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        printf("l0l >");
        gets(command);

        char *str;
        str = strtok(command, " ");

        if (strlen(command) == 0 || command[0] == '\r' || command[0] == '\n');

        // Commands..

        else if (strcmp(command,"help") == 0){
            help();
        }

        else if (strcmp(command,"banner") == 0){
            banner();
        }

        else if (strcmp(command,"clear") == 0){
            clear();
        }

        else if(strcmp(command,"os") == 0){
            char *os =  shorter(command,3);
            printf("\n");
            system(os);
            printf("\n");
        }

        else if (strcmp(command,"exit") == 0){
            closeApp();
        }

        else{
            printf("[-] Unknown command: %s\n", command);
        }
}
    return 0;
}
