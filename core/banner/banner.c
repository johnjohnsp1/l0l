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

   while( ( kaka = fgetc(fp) ) != EOF )
      printf("%c",kaka);

    fclose(fp);

    printf("\n");

}
