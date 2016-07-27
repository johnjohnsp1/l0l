/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : functions.c
*/

/*
char* mainConsole( char *s ){
        printf("l0l >");
        scanf("%99s", s);
        return s;
}
*/

void help(){
    printf("\n    Commands\n");
    printf("    --------\n");
    printf("    help    - Help Menu\n");
    printf("    banner  - Show Banner\n");
    printf("    clear   - Clean Screen\n");
    printf("    exit    - Close Application\n\n");

}

void closeApp(){
    printf("\n[*] Trying to exit..\n");
    exit(0);
}

void ctrlcDetect(int qwe)
{
    signal(SIGINT, ctrlcDetect);
    printf("\n[*] (Ctrl + C) Detected. Trying to exit..\n");
    exit(0);
}


