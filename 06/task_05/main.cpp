#include <iostream>

using namespace std;

class date
{
private:
    int month, day, year;
public:
    void getDate()
    {
        char temp;
        cin >> month >> temp >> day >> temp >> year;
    }
    void showDate() const
    {
        if (month < 10)
            cout << '0';
        cout << month << '/';
        if (day < 10)
            cout << '0';
        cout << day << '/';
        if (year < 10)
            cout << '0';
        cout << year;
    }
};

int main()
{
    date d;
    d.getDate();
    d.showDate();
    return 0;
}

