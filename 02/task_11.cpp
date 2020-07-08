#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const short steps = 17;
    cout << setiosflags(ios::left) << setw(steps) << "Surname" << setw(steps) << "Name" << setw(steps) << "Adress" << setw(steps) << "Town" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << setw(steps) << "Petrov" << setw(steps) << "Vasiliy" << setw(steps) << "Klenovaya 16" << setw(steps) << "Saint P." << endl
         << setw(steps) << "Ivanov" << setw(steps) << "Sergei" << setw(steps) << "Osinovaya 3" << setw(steps) << "Nahodka" << endl
         << setw(steps) << "Sidorov" << setw(steps) << "Ivan" << setw(steps) << "Berezovaya 21" << setw(steps) << "Kaliningrad" << endl;
    return 0;
}