/*
 * petle.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    
    for (i = 0; i < 101; i ++) // i++ wartość zwiększona o 1, i-- wartość zmniejszona o 1, +=, -=
    {
        if (i % 10 == 0) // != różne od 
        {
        cout << i << endl;
        //cout << '*' << endl;
        ;
        }
        
     }   
    return 0;
}

