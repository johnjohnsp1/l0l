// Shellcode Functions..

void genshellcode(int argp, string os, string type, string args1, string args2)
{
    string session;

    if( argp == 1 ){

        session="from core.shellcodes.database.generator import *\n";
        session += "input = \"";
        session += args1;
        session += "\"\n";
        session += "os = \"";
        session += os;
        session += "\"\n";
        session += "shelltype = \"";
        session += type;
        session += "\"\n\n";
        session += "input = generator( os, shelltype, input)\n";
        session += "print \"\"\"\nchar shellcode [] = \"%s\";\"\"\"\ % input\n";

    }
    else if( argp == 2 ){

        session="from core.shellcodes.database.generator import *\n";
        session += "input = \"";
        session += args1;
        session += "\"\n";
        session += "input2 = \"";
        session += args2;
        session += "\"\n";
        session += "os = \"";
        session += os;
        session +="\"\n";
        session += "shelltype = \"";
        session += type;
        session += "\"\n\n";
        session += "input = generator( os, shelltype, input, input2)\n";
        session += "print \"\"\"\nchar shellcode [] = \"%s\";\"\"\"\ % input\n";

    }

    std::ofstream outfile ("__session__.py");
    outfile << session;
    outfile.close();

    char py [] = "python ";  strcpy(py,"__session__.py");

    system(py);

    cout << "\n";
    remove("__session__.py");


}
