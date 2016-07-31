/**
    l0l - Exploit Development Kit
    Author:roissy
    Greetz:B3mb4m

    File : use.c


        char command[100] = "", *str;

        mainConsole:
        // Set Blue Color
        rlutil::setColor(9);
        cout << "l0l >";
        // Set White Color
        rlutil::setColor(15);
        cout << twopoint;
        // Set Red Color
        rlutil::setColor(12);
        cout << usetxt;
        rlutil::setColor(9);

        printf(" >");

        // Set White Color
        rlutil::setColor(15);

        gets(command);



                else if(strcmp(command, "back") == 0){
            twopoint="";
            usetxt ="";
        }












*/



                string twopoint = "", usetxt = "";

                str =  shorter(command,4);

                if(command[4] == '\0'){
                        rlutil::setColor(2);
                         cout <<
                                "\nuse Command\n"
                                "=============\n"
                                "\tDescription: Execute the specified module.\n"
                                "\tUsage: use (Module)\n"
                                "\tExp: use teat\n\n"
                                "To see the modules, use the show command.\n\n";
                }

                else{


                        if(strcmp(str, "test") == 0){
                            // Set Green Color
                            rlutil::setColor(2);
                            cout << "\nIs a Test Module (:\n\n";

                            twopoint = ":";
                            usetxt=str;
                        }

                        else{
                            // Set Red Color
                            rlutil::setColor(12);
                            printf("[-] Unknown module: %s\n", str);
                        }

                }

