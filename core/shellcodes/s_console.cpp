/**
    l0l - Exploit Development Kit
    Authors:roissy, esw0rmer
    Greetz:B3mB4m

    Thanks to : ollend, bomch4nte, MrSw7G3R
*/

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
                "\t\t----\t" "\t-----------\t" << "\t---------------\n";


        if(modulen == "windows/exec")
        {
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";

        }
        else if(modulen == "windows/messagebox")
        {
            cout <<
                    "\t\tmessage\t" <<  "\tMessage Box Text\t" << args1 << "\n\n";
        }

    }
    else if(strcmp(usecmd2, "set") == 0){

        str2 = shorter(usecmd2,4);


        if(modulen == "windows/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' )
            {
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand -> " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "windows/messagebox")
        {

            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' && str2[7] == ' ' ){
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\nhost -> " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

    }
    else if(strcmp(usecmd2, "unset") == 0){

        str2 = shorter(usecmd2,6);

        if(modulen == "windows/exec")
        {
            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }
        else if(modulen == "windows/messagebox")
        {
            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        // ...
    }

    else if(strcmp(usecmd, "generate") == 0){

        if(modulen == "windows/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                char rn[100], xx[5] = ".py";
                srand ( time(NULL) );
                int x = rand() % 99999 + 11111;
                itoa (x,rn,10);
                strcat(rn,xx);

                string session="from core.shellcodes.database.generator import *\n";
                session += "input = \"";
                session += args1;
                session += "\"\n";
                session += "os = \"windows\"\n";
                session += "shelltype = \"exec\"\n\n";
                session += "input = generator( os, shelltype, input)\n";
                session += "shellcode =  \"\"\"\nchar shellcode [] = \"%s\";\"\"\"\ % input\n";
                session += "print shellcode";


                char filename []  =  "database\\";  strcpy(filename,rn);
                std::ofstream outfile (filename);
                outfile << session;
                outfile.close();

                char py [] = "python ";  strcpy(py,filename);
                system(py);

                cout << "\n";
                remove(rn);

            }

        }
        else if(modulen == "windows/messagebox")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                char rn[100], xx[5] = ".py";
                srand ( time(NULL) );
                int x = rand() % 99999 + 11111;
                itoa (x,rn,10);
                strcat(rn,xx);

                string session="from core.shellcodes.database.generator import *\n";
                session += "input = \"";
                session += args1;
                session += "\"\n";
                session += "os = \"windows\"\n";
                session += "shelltype = \"messagebox\"\n\n";
                session += "input = generator( os, shelltype, input)\n";
                session += "shellcode =  \"\"\"\nchar shellcode [] = \"%s\";\"\"\"\ % input\n";
                session += "print shellcode";

                std::ofstream outfile (rn);
                outfile << session;
                outfile.close();

                char py [] = "python ";  strcpy(py,rn);

                system(py);

                cout << "\n";

                remove(rn);

            }
        }
    }
    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
