#include <iostream>

using namespace std;
int main()
{
    int var = 0;
    cout << "Press 1 to convert Celsius to Fahrenheit. \
    \n2 to convert Fahrenheit to Celsius: ";
    cin >> var;
    float temperature = 0;
    switch(var)
    {
        case 1:
            cout << "Enter the temperature in Celsius: ";
            cin >> temperature;
            cout << "Fahrenheit value: " << temperature * 9 / 5 + 32;
            break;
        case 2:
            cout << "Enter Fahrenheit temperature: ";
            cin >> temperature;
            cout << "Celsius value: " << (temperature - 32) * 5 / 9;
            break;
        default:
            cout << "Unknown";
            break;
    }
    return 0;
}