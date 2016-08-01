    int shellcodeP = 1;
    int encodersP = 1;
    int injectorP = 1;
    int backdoorsP = 1;
    int differentOsP = 11;

void banner(){
   srand ( time(NULL) );
   int x = rand() % 5 + 1 ;
   char kaka;
   FILE *fp;

    if(x == 1)
        fp = fopen("core/banner/banner1.txt","r");
    else if(x == 2)
        fp = fopen("core/banner/banner2.txt", "r");
    else if(x == 3)
        fp = fopen("core/banner/banner3.txt", "r");
    else if(x == 4)
        fp = fopen("core/banner/banner4.txt", "r");
    else if(x == 5)
        fp = fopen("core/banner/banner5.txt", "r");
    else
        printf("Error!\n");

    // Set Red Color
    rlutil::setColor(12);

    while( ( kaka = fgetc(fp) ) != EOF )
      printf("%c",kaka);

    fclose(fp);

    printf("\n");



    // Set Red Color
    // rlutil::setColor(12);


    // Set Green Color
    // rlutil::setColor(2);

    rlutil::setColor(2);
    printf("        =[ l0l v1         -");
    rlutil::setColor(12);
    printf("  BETA                               ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ %d shellcode    -", shellcodeP);
    rlutil::setColor(12);
    printf("  %d Different OS                     ", differentOsP);
    rlutil::setColor(2);
    printf("]\n");


    printf(" + -- --=[ %d encoders     -", encodersP);
    rlutil::setColor(12);
    printf("  (Shellcodes/executable files)      ");
    rlutil::setColor(2);
    printf("]\n");


    printf(" + -- --=[ %d injector     -", injectorP);
    rlutil::setColor(12);
    printf("  (PE,ELF,DLL,RAR,DEB etc...)        ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ %d backdoors    -", backdoorsP);
    rlutil::setColor(12);
    printf("  (ReverseShell)                     ");
    rlutil::setColor(2);
    printf("]\n");

    printf(" + -- --=[ Open Source    :");
    rlutil::setColor(12);
    printf("  https://github.com/roissy/l0l      ");
    rlutil::setColor(2);
    printf("]\n");

    printf("\n");

}
