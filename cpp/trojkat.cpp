/*
 * trojkat.cpp
 * Program pobiera trzy boki trójkąta,
 * sprawda, czy da się z nich zbudować trójkat,
 * oblicza obwód i pole (ze wzoru Herona)
 *  i drukuje na ekranie odpowiedni komunikat.
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{ 
    int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 boki: ";
    cin >> a >> b >> c;
    
    if (a + b > c && b + c > a && a + c > b)
    {
    cout << "Trójkąt można zbudować " << endl;
    cout << "Obwód trójkąta = " << a + b + c;

}
	return 0;
}

