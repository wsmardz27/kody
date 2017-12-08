/*
 * kl2ag2_Smardz_petle3.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n = 0;
    int m = 0;
    
    cout << "Szerokość: " << endl;
    cin >> n;
    cout << "Wysokość: " << endl;
    cin >> m;
    
    int i = 1;
    
    if(i == n)
    {
        while(i != m + 1){
            cout << "*" << endl;
            i += 1;
        }
    }
	else 
    {
        while(i != m)
        {
            cout << "*";
            i += 1;
        }
        cout << "*" << endl;
        
        int j = 1;
        int k = 1;
        while (j != m - 1)
        {
            int k; 
            cout << "*";
            
        
	return 0;
}

