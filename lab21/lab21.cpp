//Noah Denhalter
//9/20/17
//Windchill calculator

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    
    double temperature;
    double velocity;
    double old_style_wind_chill;
    double new_style_wind_chill;
    
    cout<< "What is the temperature in Fahrenheit?"<<endl;
    cin>>temperature;
    cout<<"What is the windspeed?"<<endl;
    cin>>velocity;
    
    old_style_wind_chill = (0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (temperature - 91.4) + 91.4);
    
    new_style_wind_chill = (35.74 + 0.6215 * temperature - 35.75 * ("velocity ^ 0.16 = %f/n", pow(velocity, 0.16)) + 0.4275 * temperature * ("velocity ^ 0.16 = %f/n", pow(velocity, 0.16)));

    cout<<"Wind Speed"<<"          "<<"Old Formula"<<"          "<<"New Formula"<<"          "<<"Difference"<<endl;
    cout<<"   "<<velocity<<"            "<<"    "<<old_style_wind_chill<<"   "<<"            "<<new_style_wind_chill<<"    "<<"         "<<old_style_wind_chill - new_style_wind_chill<<"   "<<endl;
}