//include libs
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <direct.h>

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
    system("COLOR 0A"); //Agregado en el 27/2/2024 para reemplazar lo que hice entonces para que funcionen los colores.
    cout << "\033[27;40;1mFake Hacker Terminal version 1.0" << endl << "Type \"list\" to show a list of commands. Type \"info\" to show the program\'s info. Type \"exit\" to close this program.\033[32;40;1m" << endl;
    commands();
    return 0;
}
