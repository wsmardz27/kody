/*
 * petle_parzyste.cpp
 * Program wypisuje wszystkie dwucyfrowe liczby parzyste podzielne przez 3 w zakresie <m,n> podanym przez  uzytkownika
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
    int m;
    int n;
    
    cout << "Podaj m (10-99): ";
    cin >> m;
    cout << "Podaj n (10-99): ";
    cin >> n;
    while (m > n || m < 10 || m > 99 || n < 10 || n > 99)
    {
        cout << "Podaj m (10-99)" ;
        cin >> m;
        cout << "Podaj n (10-99): ";
        cin >> n;
    }
     while (m <= n)
    {
     if (m % 3 == 0)
     {
         cout << m << endl;
     }
     else if ((m+1) % 3 == 0)
     {
         cout << m+1 << endl;
     }
     else if ((m+2) % 3 ==0)
     {
         cout << m+2 << endl;
     }
     m = m+3;
    }
    
    
    return 0;
}

