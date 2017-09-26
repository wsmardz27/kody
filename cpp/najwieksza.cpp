/*
 * najwieksza.cpp
 * Pobierz dwie nliczby całkowite od użytkownika i wydrukuj większą
 */
 


#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char **argv)
{  
    int a, b;
    a = b = 0;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    if (a > b) 
    {
    cout << "Większe a=";
    cout << a;
    } else if (b > a) 
    {
    cout << "Większe b=";
    cout << b;
    } else //if (a ==b)
    {
    cout << "Równe, a=" << a << ", b=" << b;
    
    }
    return 0;
    }

