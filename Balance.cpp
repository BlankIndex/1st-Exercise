#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()

{
    int d1;
    int d2;
    cout<< "please enter the number of days in your billing cycle" << endl ;
    cin >> d1 ;
    
    cout<< "please enter the number of days payment is made before billing cycle" << endl ;
    cin >> d2  ;
    
    int netbalance;
    int payment;
    netbalance = 800;
    payment=10;
    
    int averageDailyBalance;
    
    averageDailyBalance = (netbalance*d1 - payment*d2)/d1;
    
    float interest;
    interest = (averageDailyBalance*0.0152);
   
   cout << "the interest is "<< setprecision(2) << interest << endl;
    
    return 0;
   
}
