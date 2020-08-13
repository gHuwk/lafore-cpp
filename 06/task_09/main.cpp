#include <iostream>
#include <conio.h>
using namespace std;
const char ESC = 27; //  код клавиши ESC
class fraction
{
protected:
    int top;
    int bottom;
public:
    fraction(): top(0), bottom(1)
    {}
    fraction(int t, int b): top(t), bottom(b)
    {}

    void set()
    {
        char temp;
        cin >> top >> temp >> bottom;
        cout << endl;
    }

    void add(fraction first, fraction second);

    void display() const
    {
        cout << top << '/' << bottom << endl;
    }
};

void fraction::add(fraction first, fraction second)
{
    bottom *= first.bottom;
    bottom *= second.bottom;

    top += first.top * second.bottom;
    top += second.top * first.bottom;
}

int main()
{
    fraction first;
    fraction second;
    fraction third;
    char ch = 'Y';
    while (ch != ESC)
    {
        cout << "Enter first: ";
        first.set();
        cout << "Enter second: ";
        second.set();
        third.add(first, second);
        third.display();
        cout << "Continue? ESC - exit";
        cout << endl;
        ch = getche();
    }
    return 0;
}

