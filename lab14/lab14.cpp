//Noah Denhalter
//9/6/17
//Coinstar Machine?


#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    //Getting amount inputed from the user
    int input;
    cout<<"How many coins would you like to enter?"<<endl;
    cin>>input;
    
    //total in monetary form
    double total = input;
    
    //isolating each monetary form
    int non_dollars = input%100;
    int non_quarters = non_dollars%25;
    int non_dimes = non_quarters%10;
    int pennies = non_dimes%5;
    
    int dollars = (input - non_dollars) / 100;
    int quarters = (non_dollars - non_quarters) / 25;
    int dimes = (non_quarters - non_dimes) / 10;
    int nickles = (non_dimes - pennies) / 5;
    
    //doing the math for taxes
    double tax = total * .109;
    double total_after_tax = round(total - tax);
    
    //making totals into integers so I can use modulo on them
    int total_checker = total;
    int total_after_tax_checker = total_after_tax;
    
    //using modulo to determine whether the last number is zero or not 
    if ((total_checker%10 == 0 and total_after_tax_checker) != 0) {
        cout<<"You have entered "<<input<<" cents."<<endl;
        cout<<"That was "<<dollars<<" dollars, "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickles, and "<<pennies<<" pennies."<<endl;
        cout<<"You entered $"<<total / 100<<". After tax your total is $"<<total_after_tax / 100<<"."<<endl;
    
    }
    
    if ((total_after_tax_checker%10 == 0 and total_checker) != 0) {
        cout<<"You have entered "<<input<<" cents."<<endl;
        cout<<"That was "<<dollars<<" dollars, "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickles, and "<<pennies<<" pennies."<<endl;
        cout<<"You entered $"<<total / 100<<". After tax your total is $"<<total_after_tax / 100<<"0."<<endl;
    
    }
    if ((total_checker%10 == 0 and total_after_tax_checker%10) == 0) {
        cout<<"You have entered "<<input<<" cents."<<endl;
        cout<<"That was "<<dollars<<" dollars, "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickles, and "<<pennies<<" pennies."<<endl;
        cout<<"You entered $"<<total / 100<<"0. After tax your total is $"<<total_after_tax / 100<<"0."<<endl;
    
    }
    else {
        cout<<"You have entered "<<input<<" cents."<<endl;
        cout<<"That was "<<dollars<<" dollars, "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickles<<" nickles, and "<<pennies<<" pennies."<<endl;
        cout<<"You entered $"<<total / 100<<". After tax your total is $"<<total_after_tax / 100<<"."<<endl;
    
    }
}