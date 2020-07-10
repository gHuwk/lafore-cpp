#include <iostream>

using namespace std;

struct phone
{
    int town;
    int station;
    int abonent;
};

int main()
{
    phone my_phone = {212, 767, 8900};
    phone your_phone;

    cout << "Enter town code, station number and abonent nuber: ";
    cin >> your_phone.town >> your_phone.station >> your_phone.abonent;

    cout << "My number: " << "(" << my_phone.town << ") "
    << my_phone.station << "-" << my_phone.abonent << endl
    << "Your number: " << "(" << your_phone.town << ") "
    << your_phone.station << "-" << your_phone.abonent << endl;
    return 0;
}