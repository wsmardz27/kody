#include <iostream>

using namespace std;

int euklides(int a, int b) {
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    
    }

int main(int argc, char **argv)
{
    
    cout << "Podaj liczbę: ";
    cin >> a;
    cout << "Podaj liczbę: ";
    cin >> b;
    
    cout << "Największy wspólny dzielnik  =  " << a << endl;
   

    return 0;
}

