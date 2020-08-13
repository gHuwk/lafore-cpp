#include <iostream>

using namespace std;

class BasicCounter
{
private:
    int number;
    static int counter;
public:
    BasicCounter(): number(++counter)
    {}

    void put() const
    {
        cout << "Number is: " << number << endl;
        cout << "Count is: " << counter << endl;
    }
};

int BasicCounter::counter = 0;

int main()
{
    BasicCounter first;
    first.put();
    BasicCounter second;
    second.put();

    return 0;
}

