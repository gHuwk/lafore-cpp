#include <iostream>

using namespace std;

class employee
{
private:
    int number;
    float salary;
public:
    void addInfo()
    {
        cout << "Enter number: ";
        cin >> number;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() const
    {
        cout << "Number: ";
        cout << number << endl;
        cout << "Salary: ";
        cout << salary << endl;
    }
};

int main()
{
    employee w1, w2, w3;
    w1.addInfo();
    w2.addInfo();
    w3.addInfo();
    cout << endl;
    w1.display();
    w2.display();
    w3.display();
    return 0;
}

