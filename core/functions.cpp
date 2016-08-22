
// Os detection and Clear Screen Functions.

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

void injectorHelp(){

    // Set Green Color
    rlutil::setColor(2);

    cout <<
            "\nInjector Commands\n"
            "=================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    help    \t\tHelp Menu\n"
            "\t    os      \t\tCommand directly ur computer\n"
            "\t    back    \t\tA back goes into operation.\n"
            "\t    exit    \t\tClose Application\n\n";

}

void encoderHelp(){

    // Set Green Color
    rlutil::setColor(2);

    cout <<
            "\nEncoder Commands\n"
            "================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    help    \t\tHelp Menu\n"
            "\t    os      \t\tCommand directly ur computer\n"
            "\t    back    \t\tA back goes into operation.\n"
            "\t    exit    \t\tClose Application\n\n";

}

void shellcodeHelp(){

    // Set Green Color
    rlutil::setColor(2);

    cout <<
            "\nShellcode Commands\n"
            "==================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    exit     \t\tClose Application\n"
            "\t    set      \t\tSet Value Of Options To Modules\n"
            "\t    unset    \t\tUnset Value Of Options To Modules\n"
            "\t    help     \t\tHelp menu\n"
            "\t    back     \t\tA back goes into operation.\n"
            "\t    os       \t\tCommand directly ur computer\n"
            "\t    clear    \t\tClear the menu\n"
            "\t    generate \t\tGenerate shellcode\n"
            "\t    show options\tShow current options of selected module\n\n";

}

void backdoorHelp(){

    // Set Green Color
    rlutil::setColor(2);

    cout <<
            "\nBackdoor Commands\n"
            "=================\n"
            "\t    Commands\t\tDescription\n"
            "\t    ----------\t \t--------------\n"
            "\t    exit     \t\tClose Application\n"
            "\t    set      \t\tSet Value Of Options To Modules\n"
            "\t    unset    \t\tUnset Value Of Options To Modules\n"
            "\t    help     \t\tHelp menu\n"
            "\t    back     \t\tA back goes into operation.\n"
            "\t    os       \t\tCommand directly ur computer\n"
            "\t    clear    \t\tClear the menu\n"
            "\t    generate \t\tGenerate backdoor\n"
            "\t    show options\tShow current options of selected module\n\n";
}

void osCommand(){

    // Set Green Color
    rlutil::setColor(2);
    cout <<
            "\nos Command\n"
            "============\n"
            "\tDescription: Command directly ur computer\n"
            "\tUsage: os (command)\n"
            "\tExp: os ver\n";

}

void showCommand(){

    // Set Green Color
    rlutil::setColor(2);
    cout <<
            "\nshow Command\n"
            "============\n"
            "\tDescription: The specified module type list.\n"
            "\tUsage: show (Module Type)\n"
            "\tExp: show injectors\n\n"
            "Module Types\n"
            "============\n"
            "\tshellcodes\n"
            "\tencoders\n"
            "\tinjentors\n"
            "\tbackdoors\n\n";

}


void useCommand(){

    rlutil::setColor(2);
    cout <<
            "\nuse Command\n"
            "===========\n"
            "\tDescription: Execute the specified module.\n"
            "\tUsage: use (Module)\n"
            "\tExp: use test\n\n"
            "To see the modules, use the show command.\n\n";

}

// Close Function
void closeApp(){

    // Set White Color
    rlutil::setColor(15);

    printf("\nThanks for using l0l !\n");
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

bool isValidIpAddress(char *st)
{
    int num, i, len;
    char *ch;

    int quadsCnt=0;

    //printf("Split IP: \"%s\"\n", st);

    len = strlen(st);

    //  Check if the string is valid
    if(len<7 || len>15)
        return false;

    ch = strtok(st, ".");

    while (ch != NULL)
    {
        quadsCnt++;
        //printf("Quald %d is %s\n", quadsCnt, ch);

        num = 0;
        i = 0;

        //  Get the current token and convert to an integer value
        while(ch[i]!='\0')
        {
            num = num*10;
            num = num+(ch[i]-'0');
            i++;
        }

        if(num<0 || num>255)
        {
            //printf("Not a valid ip\n");
            return false;
        }

        if( (quadsCnt == 1 && num == 0) || (quadsCnt == 4 && num == 0))
        {
            //printf("Not a valid ip, quad: %d AND/OR quad:%d is zero\n", quadsCnt, quadsCnt);
            return false;
        }

        ch = strtok(NULL, ".");
    }

    //  Check the address string, should be n.n.n.n format
    if(quadsCnt!=4)
    {
        return false;
    }

    //  Looks like a valid IP address
    return true;
}

int check_digit(char c)
{
    return (c>='0' && c<='9');
}
