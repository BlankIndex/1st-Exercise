#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()

{
    int density;
    int mass;
    
    cout << "please enter the mass"<< endl;
    cin >> mass;
    
    cout << "please enter the mass"<< endl;
    cin >> density;
    
    double volume;
    volume  = mass/ 4*(density);
   
    cout <<"the volume is " <<setprecision(2) << volume <<" cubic grams "<<endl;
    
    
    return 0;
   
}
