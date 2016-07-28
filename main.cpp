/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "main.h"

int main(){

    banner();

    char command[100], command2[100];

    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        printf("l0l >");
        gets(command);
        // scanf("%s", command);
        int readKaka = 0, writeKaka;

        while(command[readKaka] == ' '){
            readKaka++;
        }

        for(writeKaka = 0;command[readKaka] != '\0'; readKaka++){
          if(command[readKaka]==' ' && command[readKaka-1]==' '){
              continue;
          }
          command2[writeKaka] = command[readKaka];
          writeKaka++;
        }
        command2[writeKaka] = '\0';

        char *str;
        str = strtok(command2, " ");

        // Commands..

        if (strlen(command) == 0 || command[0] == '\r' || command[0] == '\n');

        else if (strcmp(str," ") == 0){
            help();
        }

        else if (strcmp(str,"help") == 0){
            help();
        }
        else if (strcmp(str,"banner") == 0){
            banner();
        }
        else if (strcmp(str,"clear") == 0){
            clear();
        }
        else if(strcmp(str,"os") == 0){
            char *os =  shorter(command,3);
            printf("\n");
            system(os);
            printf("\n");
        }
        else if (strcmp(str,"exit") == 0){
            closeApp();
        }
        else{
            printf("\n[-] Unknown command: %s\n\n", str);
        }
    }
    return 0;
}
