/*
 * bmi.cpp

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    float m, w, c;
    m=w=c=0;
    
    cout << "Podaj masę: " << endl;
    cin >> m;
    cout << "Podaj wzrost w metrach: " << endl;
    cin >> w;
    c = m/(w*w);    
    
    cout << "BMI: " << c << endl;
    
    if (c < 18.5){
        cout << "niedowaga" << endl;}
    else if (c <= 24.9){
        cout << "norma" << endl;}
    else if (c >= 25){
        cout << "nadwaga" << endl;}
    else if (c >= 30){
        cout << "otyłość" << endl;}
        
    
    
    
    
	
	
	return 0;
}

