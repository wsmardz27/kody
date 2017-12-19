/*
 * rekurencja4_Smardz_kl2ag2.cpp
 */


#include <iostream>

using namespace std;

int tablica_rek(int tab[], int i){
    if (i == 0)
        return tab[0];
    else
        return tab[i - 1];
}

int main(int argc, char **argv)
{
    int tab[i];
    int i = 5;
    
    for(i = 1; i <= 5; i++)
    {
   
   cout << "Zawartość tabeli: " << tablica_rek(tab, i) << endl;
}
	
	return 0;
}

