#ifndef CONNECT_H_INCLUDED
#define CONNECT_H_INCLUDED

void connect_fbi(){
    cout << "Connecting to 124.223.152.44 . . .";
    Sleep(500);
    cout << "Done" << endl;
    Sleep(50);
    cout << "Breaking password whit brute-force method...";
    Sleep(5000);
    cout << "Done" << endl << "Password saved" << endl;
    cout << "Connected sucessfully!" << endl;
    Beep(300, 100);
    Beep(800, 500);
    connected = true;
    connected_to="fbi";
}

void connect_google(){
    cout << "Connecting to 172.217.30.228 . . .";
    Sleep(500);
    cout << "Done" << endl;
    Sleep(50);
    cout << "Breaking password whit brute-force method...";
    Sleep(2500);
    cout << "Done" << endl << "Password saved" << endl;
    cout << "Connected sucessfully!" << endl;
    Beep(3000, 100);
    Beep(3800, 500);
    connected = true;
    connected_to="google";
}

void open_secret_file(){
system("start Top_Secret_File/FBI_information.txt");
cout << "Opened." << endl;
}

void secret_file(){
    mkdir("Top_Secret_File");
    ofstream file;
    file.open("Top_Secret_File/FBI_information.txt", ios::out);
    int limit = rand()%16;
    for (int f=0; f < limit; f++){
    string names[20]={"fabian", "julian", "a1z26", "atbash", "clave aguila", "Java Script", "Script kiddie pro hacker full hd 4k no hacks no virus", "Auatoichinchutanmanitu", "Perez","Yuniqua","Hackerman","LMAO LOL XD","ñ"};
    string types[20]={"human", "robot", "martian", "virtual bot", "demon"};
    srand(time(0));
    int chabonId = -4+rand()%(4213-(-4));
    srand(time(0));
    string chabonName = names[rand()%11];
    srand(time(0));
    string chabonType = types[rand()%6];
    file << "Sold*** id:" << chabonId << endl <<"Na*e:" << chabonName << endl << "Typ*:" << chabonType << endl << endl;;
    Sleep(1000);
    }
    file.close();
    system("start Top_Secret_File/FBI_information.txt");
}

void download(){
    for (unsigned int i=0; i <=100; i++){
        cout << "\033[1A\033[0KDownloading data: ";
        cout << i << "%" << endl;
        Sleep(i);
    }
    secret_file();
    cout << "Done!\nThe top secret file is in the program root folder in a folder called \"Top_Secret_Files\"" << endl;
}

void disconnect(){
    cout << "Deleting traces of the connection to the server... ";
    Sleep(2500);
    cout << "Done" << endl <<"Disconnecting to server... ";
    Sleep(1000);
    cout << "Done" << endl;
    connected = false;
}
#endif // CONNECT_H_INCLUDED
