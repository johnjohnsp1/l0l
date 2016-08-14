/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:B3mB4m
*/

#include "core/core.h"

int main(){

    banner();

    // Ctrl+C Detect
    signal(SIGINT, ctrlcDetect);

    while(1){

        mainConsole:

        char command[100] = "", *str;

        // Set Blue Color
        rlutil::setColor(9);
        cout << "l0l > ";

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

            if(command[3] == '\0'){
                osCommand();
            }else{
                printf("\n");
                system(str);
            }
            printf("\n");
        }

        else if (strcmp(command,"exit") == 0){
            closeApp();
        }
        else if(strcmp(command,"show") == 0){
            str =  shorter(command,5);

            if(command[5] == '\0'){
                showCommand();
            }
            else{

                rlutil::setColor(10);

                if(str[0] == 'e' && str[1] == 'n' && str[2] == 'c' && str[3] == 'o' && str[4] == 'd' && str[5] == 'e' && str[6] == 'r' && str[7] == 's' && str[8] == '\0'){
                    encoderlist();
                }
                else if(str[0] == 'i' && str[1] == 'n' && str[2] == 'j' && str[3] == 'e' && str[4] == 'c' && str[5] == 't' && str[6] == 'o' && str[7] == 'r' && str[8] == 's' && str[9] == '\0'){
                    injectorList();
                }
                else if(str[0] == 's' && str[1] == 'h' && str[2] == 'e' && str[3] == 'l' && str[4] == 'l' && str[5] == 'c' && str[6] == 'o' && str[7] == 'd' && str[8] == 'e' && str[9] == 's' && str[10] == '\0'){
                    shellcodeList();
                }
                else if(str[0] == 'b' && str[1] == 'a' && str[2] == 'c' && str[3] == 'k' && str[4] == 'd' && str[5] == 'o' && str[6] == 'o' && str[7] == 'r' && str[8] == 's' && str[9] == '\0'){
                    backdoorList();
                }
                else{
                        // Set Red Color
                        rlutil::setColor(12);
                        printf("[-] Unknown type: %s\n", str);
                }
            }
        }
        else if(strcmp(command, "use") == 0){
            // Include use statement
            #include "core/use.cpp"
        }
        else{
            // Set Red Color
            rlutil::setColor(12);
            printf("[-] Unknown command: %s\n", command);
        }
}

    rlutil::resetColor();

    return 0;
}
