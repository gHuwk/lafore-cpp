#include <iostream>
#include <limits>

using namespace std;

const int MAX = 10;

int maxint(int array[], int n)
{
    int index = 0;
    int max = INT_MIN;
    for( int i = 0; i < n; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int array[MAX];
    cout << "Enter array: ";
    for (int i = 0; i < MAX; i++)
        cin >> array[i];

    int max = maxint(array, MAX);
    cout << "Max = array[" << max << "] = " << array[max] << endl;
    return 0;
}

