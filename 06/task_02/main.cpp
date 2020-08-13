#include <iostream>
#include <conio.h>

using namespace std;

const char ESC = 27; //  код клавиши ESC
const double payment = 0.50;

class tollBooth
{
private:
    unsigned int count;
    double summ;
public:
    tollBooth(): count(0), summ(0) // можно было не писать, так как конструктор сам понимает, что необходимоинициализировать 0
    {}
    void payingCar() { count++; summ += payment;}
    void nopayCar() { count++; }
    void display() const { cout << "Count: " << count << "\nSumm: " << summ; }
};

int main()
{
    cout << "Start" << endl;

    tollBooth booth;
    char ch;
    cout << "Press 0 for nopay, 1 for pay, Esc - exit:" << endl;
    do
    {
        ch = getche();
        if (ch == '0')
            booth.nopayCar();
        else if (ch == '1')
            booth.payingCar();
    }
    while (ch != ESC);
    booth.display();
    return 0;
}

