/*
 * sumuj.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i; // zmienna iteracyjna
    int suma = 0;  
    int liczba = 0;  // liczba wprowadzana
    int ile_razy;
    
    cout << "Ile liczb podasz?";
    cin >> ile_razy;
    
    for (i = 0; i < ile_razy; i ++) // i++ wartość zwiększona o 1, i-- wartość zmniejszona o 1, +=, -=
    {
        cout  << "Podaj liczbe" << endl;
        cin >> liczba; 
        //suma =  suma + liczba;
        suma += liczba;
    }   
    cout << "Suma: " << suma << endl;
    return 0;
}

