/*
 * dziady.cpp
 */

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

int liczZnaki(char plik[]) {
    ifstream wejscie(plik);
    if (!wejscie) { cout << "Błąd otwarcia pliku!"; return 0; }
    char plik2[15];
    strcpy(plik2, plik);
    char *wsk;
    wsk = strstr(plik2, ".txt");
    strncpy(wsk, ".bak", 4);
    ofstream wyjscie(plik2);
    if (!wyjscie) { cout << "Błąd otwarcia pliku!"; return 0; }
    
    char z; // pojedynczy odczytany znak
    int ilea, ileo, ileu, ilee, iley, ilei, ile;
    ile = ilea = ileo = ileu = ilee = iley = ilei = 0;
    
    while(!wejscie.eof()) {
        wejscie.get(z);  // odczytanie pojedynczego znaku
        if (wejscie) {
            ile++;
            if ((int)z == 97 or (int)z == 65)  ilea++;
            if ((int)z == 111 or (int)z == 79)  ileo++;
            if ((int)z == 117 or (int)z == 85)  ileu++;
            if ((int)z == 101 or (int)z == 69)  ilee++;
            if ((int)z == 121 or (int)z == 89)  iley++;
            if ((int)z == 105 or (int)z == 73)  ilei++;
        }
    }
    
    wejscie.close(); wyjscie.close();
    cout << setw(10) << "Samogłoska A :" << ilea << endl;
    cout << setw(10) << "Samogłoska O: " << ileo << endl;
    cout << setw(10) << "Samogłoska U: " << ileu << endl;
    cout << setw(10) << "Samogłoska E:" << ilee << endl;
    cout << setw(10) << "Samogłoska Y: " << iley << endl;
    cout << setw(10) << "Samogłoska I: " << ilei << endl;
    return ile;
}


int main(int argc, char **argv)
{
    char nazwa[15];
    cout << "Podaj nazwę pliku: ";
    cin >> nazwa;
    liczZnaki(nazwa);
	
	return 0;
}

