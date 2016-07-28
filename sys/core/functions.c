/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : functions.c
*/

// Os detection and Clear Screen Functions.

#ifdef __unix__
#elif defined(_WIN32) || defined(WIN32)
#define OS_Windows
#endif

void clear(){

        #ifdef OS_Windows
            system("cls");
        #else
            system("clear");
        #endif

}

// Help Menu Function
void help(){

    // Set Green Color
    rlutil::setColor(2);

    printf("\nUsage Commands\n");
    printf("===============\n");
    printf("\t    Commands\t\tDescription\n");
    printf("\t    ----------\t \t--------------\n");
    printf("\t    help    \t\tHelp Menu\n");
    printf("\t    os      \t\tCommand directly ur computer\n");
    printf("\t    banner  \t\tShow Banner\n");
    printf("\t    clear   \t\tClear the menu\n");
    printf("\t    exit    \t\tClose Application\n\n");

}

// Close Function
void closeApp(){

    // Set White Color
    rlutil::setColor(15);

    printf("\nThanks for using l0l .d !\n");
    exit(0);
}

// Ctrl + C Catch Function
void ctrlcDetect(int qwe) {
    signal(SIGINT, ctrlcDetect);

    // Set White Color
    rlutil::setColor(15);

    printf("\n[*] (Ctrl + C) Detected. Trying to exit..\n");
    exit(0);
}

// String Shorter
char* shorter(char *bilik, int p){
    bilik+=p;
    return bilik;
}
