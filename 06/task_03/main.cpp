#include <iostream>

using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time(): hours(0), minutes(0), seconds(0)
    {}
    time(int h, int m, int s): hours(h), minutes(m), seconds(s)
    {}

    void display() const
    {
        if (hours < 10)
            cout << '0';
        cout << hours << ':';
        if (minutes < 10)
            cout << '0';
        cout << minutes << ':';
        if (seconds < 10)
            cout << '0';
        cout << seconds;
    }
    void add(time first, time second)
    {
        seconds += first.seconds + second.seconds;
        if (seconds > 59)
        {
            seconds-= 60; minutes++;
        }
        minutes += first.minutes + second.minutes;
        if (minutes > 59)
        {
            minutes-= 60; hours++;
        }
        hours += first.hours + second.hours;
        if (hours > 11)
        {
            hours-=12;
        }
    }
};

int main()
{
    const time t1(9, 55, 0);
    const time t2(6, 50, 0);
    time t3;

    t3.add(t1, t2);
    t3.display();
    return 0;
}

