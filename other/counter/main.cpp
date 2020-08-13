#include <iostream>

using namespace std;

class Box
{
private:
    static int count;
    int numeration;
public:
    Box() { count++, numeration = 0;}
    Box(int number): numeration(number) { count++; }

    void getnumeration();
    void getcount();
};

int Box::count = 0;

void Box::getcount()
{
    cout << "There are " << count << " boxes" << endl;
}

void Box::getnumeration()
{
    cout << "N: " << numeration << endl;
}

int main()
{
    cout << "Hello World!" << endl;
    Box first;
    first.getcount();
    first.getnumeration();

    Box second;
    first.getcount();
    second.getcount();
    second.getnumeration();

    Box thirtythree( 33 );
    thirtythree.getcount();
    first.getcount();
    thirtythree.getnumeration();

    return 0;
}

