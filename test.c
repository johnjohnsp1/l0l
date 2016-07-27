#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


char command[100] ="";
char piece1[20] = ""
    ,piece2[20] = "";
char * p;

printf("l0l >");
        scanf("%99s", command);

p = strtok (command," ");
if (p != NULL)
{
    strcpy(piece1,p);
    p = strtok (NULL, " ");
    if (p != NULL)
        strcpy(piece2,p);
}
printf("%s :: %s\n",piece1,piece2);



    return 0;
}
