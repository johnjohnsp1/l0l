// Shellcode Functions..

void genshellcode(int argp, string os, string type, string a1, string a2)
{
    string session;

    session="from core.shellcodes.database.generator import *\n";
    session += "input = \"";
    session += a1;
    session += "\"\n";
    session += "os = \"";
    session += os;
    session += "\"\n";
    session += "shelltype = \"";
    session += type;
    session += "\"\n\n";

    if( argp == 1 ){
        session += "shellcode = generator( os, shelltype, input)\n";
    }
    else if( argp == 2 ){

        session += "input2 = \"";
        session += a2;
        session += "\"\n";

        session += "shellcode = generator( os, shelltype, input, input2)\n";

    }
    else if( argp == 3 ){

        session += "input2 = \"";
        session += a2;
        session += "\"\n";
        session += "shellcode = generator( os, shelltype, argv=input, argv2=input2)\n";

    }
    else if( argp == 4 ){

        session += "shellcode = generator( os, shelltype )\n";

    }

    session += "print \"\"\"\nchar shellcode [] = \"%s\";\"\"\"\ % shellcode\n";

    char filename[] = "session.py";
    std::ofstream outfile (filename);
    outfile << session;
    outfile.close();

    system("python2 session.py");

    cout << "\n";
    remove("session.py");


}
