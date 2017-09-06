//Noah Denhalter
//8/30/2017
//Future population machine

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    //Population variables
    double current_population = 325758706;
    double birth_rate = 8;
    double death_rate = 12;
    double migration_rate = 33;
    double current_year;
    
    cout<<"What year is it?"<<endl;
    cin>>current_year;
    
    //Population growth rate per minute equation
    birth_rate = 60/birth_rate;
    death_rate = 60/death_rate;
    migration_rate = 60/migration_rate;

    //population per year equation
    double population_growth_rate = birth_rate + migration_rate - death_rate;
    
    double population_per_year = ((population_growth_rate * 60) * 24) * 365;

    //Determining future population
    int years_passed;
    cout<<"How many years in the future would you like to check?"<<endl;
    cin>>years_passed;
    
    int future_population = round((years_passed * population_per_year) + current_population);
    
    //declaring future population
    cout<<"In the year "<<current_year + years_passed<<", the population will be "<<future_population<<" in the United States."<<endl;
}