/*
 * sumuj2.cpp
 *
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int suma = 0;  
    int liczba = 0;  // liczba wprowadzana
    
    for (;;) // pętla nieskończona
    {
        cout  << "Podaj liczbe" << endl;
        cin >> liczba; 
        //suma =  suma + liczba;
        suma += liczba;
        if (suma > 100) break; // break - przerywa
    }   
    cout << "Suma: " << suma << endl;
    return 0;
}
