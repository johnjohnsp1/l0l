do{
    char usecmd[100] = "", usecmd2[100] = "", *str2, *str3;

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

    // Shellcode Commands

    else if(strcmp(usecmd, "back") == 0){
        goto mainConsole;
    }
    else if(strcmp(usecmd, "help") == 0){
        shellcodeHelp();
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

        string required;

        if(strcmp(usecmd, ""))

        rlutil::setColor(10);
        cout <<
                "\n\tModule options (" << modulen << "):\n\n"
                "\t\tName\t" << "\tDescription" << "\t\tCurrent Setting\n"
                "\t\t----\t" "\t-----------" << "\t\t---------------\n";


        if(modulen == "windows/messagebox")
        {
            cout <<
                    "\t\tmessage\t" <<  "\tMessage Box Text\t" << message << "\n\n";

        }
        else if(modulen == "taktak")
        {
            cout <<
                "\t\thost\t" << "\tConnection Host\t\t" << host << "\n"
                "\t\tport\t" <<  "\tConnection Port\t\t" << port << "\n\n";
        }

    }
    else if(strcmp(usecmd2, "set") == 0){

        str2 = shorter(usecmd2,4);

        if(modulen == "qwe");

        else if(modulen == "windows/messagebox")
        {
            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' && str2[7] == ' ' )
            {

                str3 = shorter(str2,8);

                if(strlen(str3)>7){ serefsiz = "\t\t\t"; }

                message = str3;
                cout << "\nmessage -> " << str3 << "\n\n";

            }

            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }


        }

        else if(modulen == "taktak")
        {

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){
                str3 = shorter(str2,6);

                if(strlen(str3)>7){ serefsiz = "\t\t\t"; }

                host = str3;
                cout << "\nhost -> " << str3 << "\n\n";

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){
                str3 = shorter(str2,6);

                if(strlen(str3)>7){ serefsiz = "\t\t\t"; }

                port = str3;
                cout << "\nport -> " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

    }

    else if(strcmp(usecmd2, "unset") == 0){

        str2 = shorter(usecmd2,6);

        if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't'){
            host = "None";
        }
        else if( str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' ){
            port = "None";
        }
        else if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[5] == 'e' ){
            message = "None";
        }
        else{
            rlutil::setColor(12);
            cout << "This option is not available.\n";
        }
    }

    else if(strcmp(usecmd, "generate") == 0){
        if(host == "None" || port == "None"){
            cout << "\nSet options before generate shellcode.\n\n";
        }
        else{
            // generate. .. .
        }
    }

    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
