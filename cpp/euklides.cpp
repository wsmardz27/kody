#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a;
    int b;
    
    cout << "Podaj liczbę: ";
    cin >> a;
    cout << "Podaj liczbę: ";
    cin >> b;
    
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    
    cout << "Największy wspólny dzielnik  =  " << a << endl;
   

    return 0;
}

