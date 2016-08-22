// Shellcodes

//Windows
else if(strcmp(str, "windows/exec") == 0){
    usetxt=str;
    type = "shellcode";
}

else if(strcmp(str, "windows/messagebox") == 0){
    usetxt=str;
    type = "shellcode";
}

else if(strcmp(str, "windows/download&execute") == 0){
    usetxt=str;
    type = "shellcode";
}

else if(strcmp(str, "windows/reverse_tcp") == 0){
    usetxt=str;
    type = "shellcode";
}

else if(strcmp(str, "windows/tcp_bind") == 0){
    usetxt=str;
    type = "shellcode";
}
