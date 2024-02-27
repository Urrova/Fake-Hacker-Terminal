#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED

void commands(){
    do{
        cout << endl << ">";
        cin >> com;

        if (com=="connect"){
            connect_fbi();
        }
        if (com=="download"){
            if (connected==false){
                cout << "You didn\'t connected. Connect whit the \"connect\" command" << endl;
            }
            else{
                download();
            }
        }
        if (com=="disconnect"){
            disconnect();
        }
        if (com=="hack-google"){
            hack_google();
        }
        if (com=="make-annoying-virus"){
            make_annoying_virus();
        }
        if (com=="make-fakebsod-virus"){
            make_fakebsod_virus();
        }
        if (com=="open-secret-file"){
            open_secret_file();
        }
        if (com=="info"){
            info();
        }
        if (com=="list"){
            show_list();
        }
    }while(com!="exit");
}

#endif // COMMANDS_H_INCLUDED
