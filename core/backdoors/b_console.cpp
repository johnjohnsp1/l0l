do{
    char usecmd[100] = "", usecmd2[100] = "", *str2;

    rlutil::setColor(9);
    cout << "l0l";
    // Set White Color
    rlutil::setColor(15);
    cout << ":";
    // Set Red Color
    rlutil::setColor(12);
    cout << usetxt;
    rlutil::setColor(9);
    printf(" > ");
    // Set White Color
    rlutil::setColor(15);

    gets(usecmd);

    strcpy(usecmd2,usecmd);

    strtok(usecmd2, " ");

    string modulen = str;

    if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');

    // Backdoor Commands

    else if(strcmp(usecmd, "back") == 0){
        goto mainConsole;
    }
    else if(strcmp(usecmd, "help") == 0){
        backdoorHelp();
    }
    else if (strcmp(usecmd,"exit") == 0){
        closeApp();
    }
    else if(strcmp(usecmd2,"os") == 0){

        // Set White Color
        rlutil::setColor(15);

        str2 =  shorter(usecmd,3);

        if(usecmd[3] == '\0'){
            osCommand();
        }else{
            printf("\n");
            system(str2);
        }
        printf("\n");

    }
    else if(strcmp(usecmd, "clear") == 0){
        clear();
    }
    else if(strcmp(usecmd, "show options") == 0){

        rlutil::setColor(10);
        cout <<
                "\n\tModule options (" << modulen << "):\n\n"
                "\t\tName\t\tCurrent Setting\t\tRequired\tDescription\n"
                "\t\t----\t\t---------------\t\t--------\t-----------\n"
                "\t\tLHOST\t\t" << lhost << "\t\t\t" << "yes" <<"\t\tConnection Host\n"
                "\t\tLPORT\t\t" << lport << "\t\t\t" << "yes" <<"\t\tConnection Port\n\n";

    }
    else if(strcmp(usecmd, "set") == 0){

        rlutil::setColor(12);
        cout << "This option is not available.\n";

    }
    else if(strcmp(usecmd, "generate") == 0){
        if(lhost == "None" || lport == "None"){
            cout << "\nSet options before generate payload.\n\n";
        }
        else{
            if(modulen == "backdoors/windows/ps/reverse_tcp")
                windows_ps_reverse_tcp(lhost,lport);

            lhost = "None";
            lport = "None";
        }
    }

    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
