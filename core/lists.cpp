
void noModule(){

    cout << "\n\t There's no module. (:\n\n";

}
void encoderlist(){

    cout <<
            "\n\tName\t\tRank\t\tDescription\n"
            "\t----\t\t----\t\t-----------\n\n"
            "\tkaka\t\t\t\tTest Module\n\n";

}

void injectorList(){

    cout <<
            "\n\tArchitecture\t\t\tVersion\n"
            "\t------------\t\t\t-------\n\n"
            "\tpatpat\t\t\t\tTest Module\n\n";

}

void shellcodeList(){

    cout <<
            "\n\tLinux x86\n"
            "\t===========\n\n"
            "\t\tlinux86/exec\n"
            "\t\tlinux86/download&execute\n"
            "\t\tlinux86/bin_sh\n"
            "\t\tlinux86/read\n"
            "\t\tlinux86/chmod\n"
            "\t\tlinux86/tcp_bind\n"
            "\t\tlinux86/reverse_tcp\n\n";


    cout <<
            "\n\tLinux x64\n"
            "\t===========\n\n"
            "\t\tlinux64/bin_sh\n"
            "\t\tlinux64/read\n"
            "\t\tlinux64/tcp_bind\n"
            "\t\tlinux64/reverse_tcp\n\n";


    cout <<
            "\n\tLinux x86/x64 [Works on both]\n"
            "\t===========\n\n"
            "\t\tlinux/bin_sh\n"
            "\t\tlinux/read\n"
            "\t\tlinux/tcp_bind\n"
            "\t\tlinux/reverse_tcp\n\n";


    cout <<
            "\n\tLinux ARM\n"
            "\t===========\n\n"
            "\t\tlinux_arm/exec\n"
            "\t\tlinux_arm/binsh\n"
            "\t\tlinux_arm/chmod\n"
            "\t\tlinux_arm/reverse_tcp\n\n";


    cout <<
            "\n\tLinux MIPS\n"
            "\t===========\n\n"
            "\t\tlinux_mips/binsh\n"
            "\t\tlinux_mips/chmod\n"
            "\t\tlinux_mips/tcp_bind\n\n";


    cout <<
            "\n\tSolaris x86\n"
            "\t===========\n\n"
            "\t\tsolarisx86/binsh\n"
            "\t\tsolarisx86/read\n"
            "\t\tsolarisx86/reverse_tcp\n"
            "\t\tsolarisx86/tcp_bind\n\n";


    cout <<
            "\n\tWindows\n"
            "\t===========\n\n"
            "\t\twindows/exec\n"
            "\t\twindows/download&execute\n"
            "\t\twindows/messagebox\n"
            "\t\twindows/tcp_bind\n"
            "\t\twindows/reverse_tcp\n\n";


    cout <<
            "\n\tOSX x86\n"
            "\t===========\n\n"
            "\t\tosx86/binsh\n"
            "\t\tosx86/tcp_bind\n"
            "\t\tosx86/reverse_tcp\n\n";


    cout <<
            "\n\tOSX x64\n"
            "\t===========\n\n"
            "\t\tosx64/binsh\n"
            "\t\tosx64/tcp_bind\n"
            "\t\tosx64/reverse_tcp\n\n";





    cout <<
            "\n\tFreeBSD x86\n"
            "\t===========\n\n"
            "\t\tFreeBSDx86/binsh\n"
            "\t\tFreeBSDx86/read\n"
            "\t\tFreeBSDx86/tcp_bind\n"
            "\t\tFreeBSDx86/reverse_tcp\n"
            "\t\tFreeBSDx86/reverse_tcp2 (through /bin/sh)\n"
            "\t\tFreeBSDx86/exec\n\n";


    cout <<
            "\n\tFreeBSD x64\n"
            "\t===========\n\n"
            "\t\tFreeBSDx64/binsh\n"
            "\t\tFreeBSDx64/tcp_bind\n"
            "\t\tFreeBSDx64/reverse_tcp\n"
            "\t\tFreeBSDx64/exec\n\n";


}

void backdoorList(){

    cout <<
            "\n\tBinaries\n"
            "\t==========\n";

    noModule();

    cout <<
            "\n\tScripting Payloads\n"
            "\t===================\n\n"
            "\t backdoors/unix/python/reverse_tcp\n"
            "\t backdoors/unix/perl/reverse_tcp\n"
            "\t backdoors/unix/bash/reverse_tcp\n"
            "\t backdoors/unix/ruby/reverse_tcp\n"
            "\t backdoors/windows/asm/reverse_tcp\n"
            "\t backdoors/windows/ps/reverse_tcp\n\n\n";

}

