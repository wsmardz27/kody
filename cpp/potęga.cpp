#include <iostream>
# include  <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int podstawa = 0;
    int wykladnik = 0;
    int wynik = 1;

    cout << "Podaj podstawe : ";
    cin >> podstawa;
    cout <<"Podaj wyk³adnik: " ;
    cin >> wykladnik;

    for (int i = 0; i < wykladnik; i++)
        wynik*=podstawa;

    if (wykladnik == 0)
        cout << "1" << endl;

    else
        cout << wynik << endl;

    return 0;
}
