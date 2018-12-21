//include libs
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <direct.h>
//using namespace std;
using namespace std;

//declaring vars
string com;
bool connected=false;

string connected_to;

//include headers whit functions
#include "list.h"
#include "virus.h"
#include "web.h"
#include "connect.h"
#include "commands.h"



int main(){
    system("color 0a");
    cout << "Fake Hacker Terminal version 1.0" << endl << "Type \"list\" to show a list of commands. Type \"info\" to show the program\'s info. Type \"exit\" to close this program." << endl;
    commands();
    return 0;
}
