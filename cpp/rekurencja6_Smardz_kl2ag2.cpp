/*
 * rekurencja6_Smardz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int euklides_rek(int a, int b){
    if (b == 0)
        return a;
    else
        return euklides_rek(b, a % b);
}

int main(int argc, char **argv)
{   int a = 0;
    int b = 0;
    cout << "Podaj liczbę: " << endl;
    cin >> a;
    cout << "Podaj liczbę: " << endl;
    cin >> b;
    
    cout << "Wynik: " << euklides_rek(a, b) << endl;
    
    
    
	
	return 0;
}

