#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
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
    
    cout << setprecision(2);

    cout <<"the volume is " << volume <<" cubic grams "<<endl;
    
    
    return 0;
   
}