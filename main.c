/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "sys/sys.h"

int main(){

    banner();

    char command[100];


    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        //mainConsole( str );
        printf("l0l >");
        gets(command);
        //scanf("%99s", command);

        char sCommand2[] = "os ver";
        char *str1;
        char *asdasd = " ";
        str1 = strtok(command, asdasd);

        if (strcmp(str1,"help") == 0){
            help();
        }
        else if (strcmp(str1,"banner") == 0){
            banner();
        }
        else if (strcmp(str1,"clear") == 0){
            clear();
        }
        else if(strcmp(str1,"os") == 0){
            char *str2 =  shorter(command,3);
            printf("\n");
            system(str2);
            printf("\n");
        }
        else if (strcmp(str1,"exit") == 0){
            closeApp();
        }
        else{
            printf("\n[-] Unknown command: %s\n\n", str1);
        }
}
    return 0;
}
