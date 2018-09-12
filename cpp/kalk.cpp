/*
 * kalkulator.cpp
 */


#include <iostream>

using namespace std;

float dodaj (float a, float b) 
{ 
     return a + b;
    
}

float iloczyn (float a , float b)
{
    return a * b;
}


float odejmij (float a, float b)
{
    return a - b;  
}

float iloraz (float a, float b)
{
    if (b==0){
    cout << "Nie dziel przez 0!" << endl;
    return 0;
    }
    return a / b; 
}

int main(int argc, char **argv)
{
    char znak; // +, -, *, /
    float a, b;
    a = b = 0;
   
    
    while(znak == '+' || '-' || '*' || '/'){
    cout << "Podaj znak " << endl;
    cin >> znak;
    cout << "Podaj dwie liczby" << endl;
    cin >> a >> b;
    
    
        
    if (znak == '+')
        cout << "Suma: " << dodaj(a, b) << endl;
    else if (znak == '-')
         cout << "Różnica: " << odejmij(a, b) << endl;
    else if (znak == '*')
        cout << "Iloczyn: " << iloczyn(a, b) << endl;   
    else if (znak == '/')
        cout << "Iloraz: " << iloraz(a, b) << endl;}
    
        

    
  


    
    
    
    return 0;
}

