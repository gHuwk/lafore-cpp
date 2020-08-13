#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    string name;
    long number;
public:
    void getdata();
    void putdata() const;
};

void employee::getdata()
{
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter number: ";
    cin >> number;
}

void employee::putdata() const
{
    cout << "Name is: " << name << endl;
    cout << "Number is: " << number << endl;
}

int main()
{
    employee company[100];

    char temp = 'y';
    int i = 0;
    while ((i < 100) && (temp == 'y'))
    {
        company[i++].getdata();
        cout << "Continue? (y/n): ";
        cin >> temp;
    }

    for(int j = 0; j < i; j++)
    {
        company[j].putdata();
    }
    return 0;
}

