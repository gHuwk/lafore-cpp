#include <iostream>

using namespace std;

class date
{
private:
    int month, day, year;
public:
    void addDate()
    {
        char temp;
        cout << "Enter date: ";
        cin >> month >> temp >> day >> temp >> year;
    }
    void showDate() const
    {
        cout << "Date: ";
        if (month < 10)
            cout << '0';
        cout << month << '/';
        if (day < 10)
            cout << '0';
        cout << day << '/';
        if (year < 10)
            cout << '0';
        cout << year;
        cout << endl;
    }
};

class employee
{
private:
    enum etype { laborer, secretary, manager, accountant, executive, researcher };
    int number;
    float salary;
    date info;
    etype type;
    void getEtype()
    {
        char temp;
        cout << "Enter type: ";
        cin >> temp;
        switch (temp) {
        case 'l': type = laborer; break;
        case 's': type = secretary; break;
        case 'm': type = manager; break;
        case 'a': type = accountant; break;
        case 'e': type = executive; break;
        case 'r': type = researcher; break;
        default: break;
        }
    }
    void putEtype() const
    {
        cout << "Type: ";
        switch (type) {
        case laborer: cout << "laborer"; break;
        case secretary: cout << "secreatary"; break;
        case manager: cout << "manager"; break;
        case accountant: cout << "accountant"; break;
        case executive: cout << "executive"; break;
        case researcher: cout << "researcher"; break;
        default:
            break;
        }
        cout << endl;
    }

public:
    void getEmploy()
    {
        cout << "Enter number: ";
        cin >> number;
        getEtype();
        cout << "Enter salary: ";
        cin >> salary;
        info.addDate();
    }
    void putEmploy() const
    {
        cout << "Number: ";
        cout << number << endl;
        putEtype();
        cout << "Salary: ";
        cout << salary << endl;
        info.showDate();
    }
};

int main()
{
    employee w1, w2, w3;
    w1.getEmploy();
    w2.getEmploy();
    w3.getEmploy();
    cout << endl;
    w1.putEmploy();
    w2.putEmploy();
    w3.putEmploy();
    return 0;
}

