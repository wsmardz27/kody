/*
 * trojkat.cpp
 * Program pobiera trzy boki trójkąta,
 * sprawda, czy da się z nich zbudować trójkat,
 * oblicza obwód i pole (ze wzoru Herona)
 *  i drukuje na ekranie odpowiedni komunikat.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{ 
    int a, b, c;
    int obwod = 0;
    float p = 0;
    a = b = c = 0;
    cout << "Podaj 3 boki: " << endl;
    cin >> a >> b >> c;
    
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Trójkąt można zbudować " << endl;
        obwod = a + b + c;
        cout << "Obwód trójkąta = " << obwod << endl;
        p = 0.5 * obwod;
        cout << "p = " << p << endl;
        cout <<"Pole trójkąta = " << sqrt (p * (p-a)*(p-b)*(p-c)) << endl;

}
  
	return 0;
}

