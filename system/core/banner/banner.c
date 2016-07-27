/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : banner.c
*/


void banner(){
   srand ( time(NULL) );
   int x = rand() % 5 + 1 ;
   char kaka;
   FILE *fp;

    if(x == 1)
        fp = fopen("system/core/banner/banner1.txt","r");
    else if(x == 2)
        fp = fopen("system/core/banner/banner2.txt", "r");
    else if(x == 3)
        fp = fopen("system/core/banner/banner3.txt", "r");
    else if(x == 4)
        fp = fopen("system/core/banner/banner4.txt", "r");
    else if(x == 5)
        fp = fopen("system/core/banner/banner5.txt", "r");
    else
        printf("Error!\n");

   while( ( kaka = fgetc(fp) ) != EOF )
      printf("%c",kaka);

    fclose(fp);

    printf("\n");

    int shellcodeP = 0;
    int encodersP = 0;
    int injectorP = 0;
    int backdoorsP = 0;
    int differentOsP = 0;

    printf("        =[ l0l v0.1       -  BETA                               ]\n");
    printf(" + -- --=[ %d shellcode    -  %d Different OS                     ]\n", shellcodeP, differentOsP);
    printf(" + -- --=[ %d encoders     -  (Shellcodes/executable files)      ]\n", encodersP);
    printf(" + -- --=[ %d injector     -  (PE,ELF,DLL,RAR,DEB etc...)        ]\n", injectorP);
    printf(" + -- --=[ %d backdoors    -  (ReverseShell)                     ]\n", backdoorsP);
    printf(" + -- --=[ Open Source    :  https://github.com/roissy/l0l      ]\n");

    printf("\n");

}
