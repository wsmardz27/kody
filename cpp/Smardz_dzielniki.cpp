/*
 * Smardz_dzielniki.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a = 0;
    
    cout << "Dzielniki jakiej liczby wypisać? " << endl;
    cin >> a;
    
    int i = 0;
    int suma = 0;
    
    while(i != (a+1))
    {
        if (a % i == 0)
        suma += 1;
        i += 1;
    }
    cout << "Liczba dzielników: " << suma << endl;
	return 0;
}

