/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : main.c
*/

#include "main.h"

int main(){

    banner();

    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        char command[100] = "", *str, str2;

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

        else if (strcmp(command,"clear") == 0){"\\n";
            clear();
        }

        else if(strcmp(command,"os") == 0){

            // Set White Color
            rlutil::setColor(15);

            str =  shorter(command,3);
            printf("\n");
            if(command[3] == '\0'){
                // Set Green Color
                rlutil::setColor(2);
                std::cout <<
                                "os Command\n"
                                "-----------\n"
                                "\tDescription: Command directly ur computer\n"
                                "\tUsage: os (command)\n"
                                "\tExp: os ver\n";

            }else{
                system(str);
            }
            printf("\n");
        }

        else if (strcmp(command,"exit") == 0){
            closeApp();
        }

        else if(strcmp(command,"show") == 0){
            str =  shorter(command,5);

            if(str[0] == 'e' && str[1] == 'n' && str[2] == 'c' && str[3] == 'o' && str[4] == 'd' && str[5] == 'e' && str[6] == 'r' && str[7] == 's'){
                encoderlist();
            }else{
                printf("kaka\n");
            }

        }

        else{
            // Set Red Color
            rlutil::setColor(12);
            printf("[-] Unknown command: %s\n", command);
        }
}

    return 0;
}
