/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:b3mb4m

    File : clear.c
*/

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
