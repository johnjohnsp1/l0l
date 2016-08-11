string usetxt, type;

                str =  shorter(command,4);

                if(command[4] == '\0'){
                    useCommand();
                }

                else{
                        // Injector Test Module
                        if(strcmp(str, "patpat") == 0){
                            usetxt=str;
                            type = "injector";
                        }

                        // Encoder Test Module
                        else if(strcmp(str, "kaka") == 0){
                            usetxt=str;
                            type = "encoder";
                        }

                        // Shellcode Test Module
                        else if(strcmp(str, "taktak") == 0){
                            usetxt=str;
                            type = "shellcode";
                        }

                        // Backdoor Test Module
                        else if(strcmp(str, "hoppidi") == 0){
                            usetxt=str;
                            type = "backdoor";
                        }


                        else{
                            // Set Red Color
                            rlutil::setColor(12);
                            printf("[-] Unknown module: %s\n", str);
                            goto mainConsole;
                        }

                        do{

                            char usecmd[100] = "", *str2;

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

                            strtok(usecmd, " ");

                            if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');

                            // Use Commands

                            else if(strcmp(usecmd, "back") == 0){
                                goto mainConsole;
                            }
                            else if(strcmp(usecmd, "help") == 0){
                                    if(type == "injector"){
                                        injectorHelp();
                                    }
                                    else if(type == "encoder"){
                                        encoderHelp();
                                    }
                                    else if(type == "shellcode"){
                                        shellcodeHelp();
                                    }
                                    else if(type == "backdoor"){
                                        backdoorHelp();
                                    }
                            }
                            else if (strcmp(usecmd,"exit") == 0){
                                closeApp();
                            }
                            else if(strcmp(usecmd,"os") == 0){

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
                            else{
                                // Set Red Color
                                rlutil::setColor(12);
                                printf("[-] Unknown command: %s\n", usecmd);
                            }
                        }while(1);
                }
