#include <iostream>
#include <cstring>

using namespace std;
class String
{
private:
    enum { SIZE = 20 };
    char str[SIZE];
    int lence;
public:
    String(){ str[0] = '\0'; lence = 0;}
    String( const char *s ) {strcpy( str, s ); lence = strlen(str);}
    void display() { cout << str;}
    void concat(String second)
    {
        if ((strlen(str) + strlen(second.str)) < SIZE)
            strcat( str, second.str ), lence = strlen(str);
        else
            cout << "Segmentation fault";
    }

    String operator+ (String source) const
    {
        String temp;
        if ((lence + strlen(source.str)) < SIZE)
        {
            strcpy(temp.str, str);
            strcat(temp.str, source.str);
        }
        else
        {
            cout << "Segmentation fault";
            exit(1);
        }
        return temp;
    }

    bool operator==(String source) const
    {
        return (strcmp(str, source.str) == 0) ? true : false;
    }

    void clear()
    {
        str[0] = '\0', lence = 0;
    }

    void repeat(int count)
    {
        int i = lence;
        for(;(i < SIZE) && (i < count * lence); i++)
        {
            str[i] = str[i % lence];
        }
        str[i] = '\0';
        lence = strlen(str);
    }

    int getlence() { return lence;}
};

int main()
{
    cout << "Hello World!" << endl;
    String first("Hello");
    String second = ", world!";
    String third;
    cout << "\nfirst= "; first.display();
    cout << "\nsecond= "; second.display();
    cout << "\nthird= "; third.display();

    third = first;
    cout << "\nthird= "; third.display();

    third.concat(second);
    cout << endl;
    cout << "\nfirst= "; first.display();
    cout << "\nsecond= "; second.display();
    cout << "\nthird= "; third.display();

    first = third;
    cout << endl;
    cout << "\nfirst= "; first.display();
    cout << "\nsecond= "; second.display();
    cout << "\nthird= "; third.display();

    first.clear();
    second.clear();

    cout << endl;
    cout << "\nfirst= "; first.display();
    cout << "\nsecond= "; second.display();
    cout << "\nthird= "; third.display();

    String Mem = "Memes";
    Mem.repeat(2);

    cout << endl;
    cout << "\nMem= "; Mem.display();
    cout << "\nlence= " << Mem.getlence();

    String Daria = "Daria";
    String Mark = "Mark";
    String End;
    End = Daria + Mark;
    cout << endl;
    cout << "\nEnd= "; End.display();

    if (!(Daria == Mark))
        cout << "\ntrue";
    return 0;
}

