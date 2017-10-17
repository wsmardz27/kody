/*
 * petle_switch.cpp
 * Program pobiera znak zn typu char do momentu, gdy jest on literą 't' 'T' 'n' 'N'
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    char zn='t'; // deklaracja
    
     while (zn=='t' || zn=='T' || zn=='n' || zn=='N') {
        cout << "Podaj znak: " << endl;
        cin >>  zn;
        //if (zn=='t' || zn=='T' || zn=='n' || zn=='N')
        // cout << zn << endl;
        // else
    
    };
    
    
    return 0;
}

