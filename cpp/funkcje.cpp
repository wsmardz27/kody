/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void dodaj (int a, int b) //  void nie zwraca wyniku (deklaracja funkcji)
{
    cout << "Suma: " << a + b << endl;
}

void iloczyn (int a , int b)
{
    cout << "Iloczyn: " << a * b << endl; 
}


int odejmij (int l1, int l2)
{
    return l1 - l2;  // zwraca wynik - return
}

int iloraz (int a, int b)
{
    if (b==0){
    cout << "Nie dziel przez 0!" << endl;
    return 0;
    }
    return a / b; 
}

int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    cout << "Podaj 2 liczby: " << endl;
    cin >> a >> b;
    
    dodaj (a, b); // wywołanie funkcji
    cout << "Różnica: " << odejmij(a, b) << endl;
    
    iloczyn (a, b);
    
   cout << "Iloraz: " << iloraz(a, b) << endl;
    
    
    
    return 0;
}

