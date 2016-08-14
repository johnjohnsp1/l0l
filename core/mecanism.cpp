string usetxt, type;

                str =  shorter(command,4);

                if(command[4] == '\0'){
                    useCommand();
                }
                else{
                        // Injector Modules
                        if(strcmp(str, "patpat") == 0){
                            usetxt=str;
                            type = "injector";
                        }

                        // Encoder Modules
                        else if(strcmp(str, "kaka") == 0){
                            usetxt=str;
                            type = "encoder";
                        }

                        // Shellcode Modules
                        else if(strcmp(str, "taktak") == 0){
                            usetxt=str;
                            type = "shellcode";
                        }

                        // Backdoor Modules
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

                        //  By type of Console launch.

                        if(type == "injectors"){
                            // is under construction.
                            // #include "injectors/i_console.cpp"
                        }
                        if(type == "encoder"){
                            // is under construction.
                            // #include "encoders/e_console.cpp"
                        }
                        if(type == "shellcode"){
                            // is under construction.
                            // #include "shellcodes/s_console.cpp"
                        }
                        else if(type == "backdoor"){
                            #include "backdoors/b_console.cpp"
                        }


                }
