/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "main.h"

int main(){

    banner();

    char command[100] = "", *str;

    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        // Set Blue Color
        rlutil::setColor(9);

        printf("l0l >");

        // Set White Color
        rlutil::setColor(15);

        gets(command);

        strtok(command, " ");

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

            // Set White Color
            rlutil::setColor(15);

            str =  shorter(command,3);
            printf("\n");
            system(str);
            printf("\n");
        }

        else if (strcmp(command,"exit") == 0){
            closeApp();
        }

        else{
            rlutil::setColor(12);
            printf("[-] Unknown command: %s\n", command);
        }
}
    return 0;
}
