/*
 * najwieksza.cpp
 * Pobierz trzy liczby całkowite od użytkownika i wydrukuj największą
 */
 


#include <iostream>


using namespace std;
int main(int argc, char **argv)
{  
    int a, b, c;
    a = b = c = 0;
    cout << "Podaj 3 liczby: " << endl;
    cin >> a >> b >> c;
    if (a > b) 
    {
    if (a > c)
        cout << "Największe a=" << a;
    else if (a==c)
            cout << "Najwieksze a = c = " << c;
    else if (a==b)
            cout << "Najwieksze a = b = " << b;
    else 
        cout << "Największe c=" << c;
    } 
    else if (b > a) 
    {
     if (b > c)
         cout << "Największa liczba b=" << b;
         else if (b==c)
            cout << "Najwieksze liczby to b = c = " << c;
         else if (b==a)
            cout << "Najwieksze liczby to b = a = " << b;
         else
            cout << "Największa liczba to c = " << c;
    } 
    if (a==b)
    {if (a>c)
        cout << "Najwieksza liczba to a: " << a;
     else if (b==c)
        cout << "Wszytskie takie same rowne a = b = c =" << a;
     else if (a<c)
        cout << "Najwieksza liczba to c: " << c;
    }
    
    return 0;
    }


