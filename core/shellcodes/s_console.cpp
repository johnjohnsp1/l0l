/**
    l0l - Exploit Development Kit
    Authors:roissy, esw0rmer
    Greetz:B3mB4m

    Thanks to : ollend, bomch4nte, MrSw7G3R
*/

do{
    string scmd;
    char *str2, *str3, *str4, *p;

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

    getline( cin, scmd );
    //char *usecmd = &scmd[0u];
    //char *usecmd2 = &scmd[0u];
    //char *usecmd3 = &scmd[0u];

    char* usecmd = strdup(scmd.c_str());
    char* usecmd2 = strdup(scmd.c_str());
    char* usecmd3 = strdup(scmd.c_str());


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

        rlutil::setColor(2);
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
        else if(modulen == "windows/download&execute")
        {
            cout <<
                    "\t\tlink\t" <<  "\tSource to download exe\t" << args1 << "\n\n";
        }
        else if(modulen == "windows/reverse_tcp")
        {
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
        }
        else if(modulen == "windows/tcp_bind")
        {
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
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
                cout << "\nmessage-> " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/download&execute")
        {

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nlink -> " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/reverse_tcp"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){

                str4 = shorter(str2,5);

                if(isValidIpAddress(str4)){
                    args1 = str3;
                    cout << "\nhost -> " << str3 << "\n\n";
                }
                else{
                    printf("\nThe given IP is not a valid IP address..\n\n");
                }

            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args2 = str3;
                        cout << "\nport -> " << str3 << "\n\n";
                    }

                }
                else {
                    cout << "\nYou can't enter more than 5 digit..\n\n" ;
                }


            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

        else if(modulen == "windows/tcp_bind"){

            str2 = shorter(usecmd2,4);
            p = shorter(usecmd3,4);
            str3 = shorter(p,5);

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){

                str3 = shorter(str2,5);

                if(strlen(str3) <= 5){

                    int result, i=0, state;

                    for(i; i < strlen(str3); i++)
                    {
                        if(check_digit(str3[i]))
                        state = 1;
                        else
                        state = 0;
                    }

                    if(state == 0){
                        cout << "\nYou can't use that character..\n\n";
                    }
                    else{
                        args1 = str3;
                        cout << "\nport -> " << str3 << "\n\n";
                    }

                    }
                    else {
                        cout << "\nYou can't enter more than 5 digit..\n\n" ;
                    }

                }
                else{
                    rlutil::setColor(12);
                    cout << "This option is not available.\n";
                }
        }

        // ..

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

        else if(modulen == "windows/download&execute")
        {

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "windows/reverse_tcp")
        {

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't'){
                args1 = "None";
            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't'){
                args2 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        else if(modulen == "windows/tcp_bind")
        {

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't'){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }

        // ..
    }

    else if(strcmp(usecmd, "generate") == 0){

        if(modulen == "windows/exec")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "exec", args1, args2);

            }

        }
        else if(modulen == "windows/messagebox")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "messagebox", args1, args2);

            }
        }
        else if(modulen == "windows/download&execute")
        {
            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(3, "windows", "downloadandexecute", args1, args2);

            }
        }

        else if(modulen == "windows/reverse_tcp")
        {

            if(args1 == "None" || args2 == "None"){
                cout << "\nSet options before generate shellcode.\n\n";
            }
            else{

                genshellcode(2, "windows", "reverse_tcp", args1, args2);

            }
        }

        else if(modulen == "windows/tcp_bind")
        {

            if(args1 == "None"){
                cout << "\nSet option before generate shellcode.\n\n";
            }
            else{

                genshellcode(1, "windows", "tcp_bind", args1, args2);

            }
        }
        // ..
    }
    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
