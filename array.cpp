#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4};
    cout << sizeof(array) << endl; // size of array
    cout << sizeof(array) / sizeof(array[0]) << endl
         << endl; // length of array

    // for loop
    for (int idx = 0; idx < 4; idx++)
    {
        cout << array[idx] << endl;
    }
    cout << endl;

    // for each loop
    for (int ele : array)
    {
        // cout << ele << endl;
    }
    cout << endl;

    // while loop
    int a = 0;
    while (a < 4)
    {
        cout << array[a] << endl;
        a++;
    }

    return 0;
}