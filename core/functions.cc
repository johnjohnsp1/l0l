
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

   	cout <<
				"\nUsage Commands\n"
				"===============\n"
				"\t    Commands\t\tDescription\n"
				"\t    ----------\t \t--------------\n"
				"\t    help    \t\tHelp Menu\n"
				"\t    os      \t\tCommand directly ur computer\n"
				"\t    banner  \t\tShow Banner\n"
				"\t    clear   \t\tClear the menu\n"
				"\t    show shellcodes\tShow Shellcodes of Current Database\n"
				"\t    show backdoors\tShow Backdoors of Current Database\n"
				"\t    show injectors\tShow Injectors(Shellcode,dll,so etc..\n"
				"\t    show encoders\tShow Encoders(Py,Ruby,PHP,Shellcode etc..\n"
				"\t    use     \t\tExecute the specified module.\n"
				"\t    back    \t\tA back goes into operation.\n"
				"\t    exit    \t\tClose Application\n\n";

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

    printf("\nCtrl + C Detected. Trying to exit..\n");
    exit(0);
}

// String Shorter
char* shorter(char *bilik, int p){
    bilik+=p;
    return bilik;
}
