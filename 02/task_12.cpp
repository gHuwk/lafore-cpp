#include <iostream>

using namespace std;

int main()
{
    
    float decpounds; // dec sum
    int pounds;      // old pounds
    float decfrac;
    
    cout << "Input dec pounds: ";
    cin >> decpounds;

    pounds = static_cast<int>(decpounds); // get int
    decfrac = decpounds - pounds;         // add 0.xxx
    
    // holy shit it works
    cout << "Equal summ in old: J" << pounds << '.' << decfrac * 20;
    return 0;
}