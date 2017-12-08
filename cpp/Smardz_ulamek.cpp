/*
 * Smardz_ulamek.cpp 
 */


#include <iostream>

using namespace std;

int nwd(int a, int b) {
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
    }
    

int main(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    
    cout << "Podaj licznik: " << endl;
    cin >> a;
    cout << "Podaj mianownik: " << endl; 
    cin >> b;
    
    a = a / nwd(a, b);
    b = b / nwd(a,b);
    cout << a << "/" << b << endl;
	
	return 0;
}

