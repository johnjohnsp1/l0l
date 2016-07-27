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

        console:
        //mainConsole( str );
        printf("l0l >");
        gets(command);
        //scanf("%99s", command);


        char *str1;
        char *str2;

        char *search = " ";

        str1 = strtok(command, search);
        str2 = strtok(NULL, search);



        if (strcmp(str1,"help") == 0){
            help();
            goto console;
        }
        else if (strcmp(str1,"banner") == 0){
            banner();
            goto console;
        }
        else if (strcmp(str1,"clear") == 0){
            clear();
            goto console;
        }
        else if(strcmp(str1,"os") == 0){
            printf("\n");
            system(str2);
            goto console;
        }
        else if (strcmp(str1,"exit") == 0){
            closeApp();
        }
        else{
            printf("\n[-] Unknown command: %s\n\n", str1);
            goto console;
        }

}
    return 0;
}
