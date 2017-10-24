/*
 * tablice.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    //const int ROZMIAR = 5;
    int rozmiar;
    cout << "Ile ocen: " << endl;
    cin >> rozmiar;
    
    int liczby[rozmiar];
    int i;
    int suma = 0;
    
    
    cout << "Podaj 5 ocen (0-6): " << endl;
    for(i = 0; i < rozmiar; i++) {
        cin >> liczby [i];
   }
    
    cout << "Podane oceny: " << endl;
    for(i = 0; i < rozmiar; i++) {
        suma += liczby[i];
        cout << liczby[i] << " " << endl;

    }
    
    cout << "Suma ocen: " << suma << endl;
    cout << "Średnia ocen: " << float(suma) / float(rozmiar) << endl;
    
    
   
   
    
    return 0;
}

