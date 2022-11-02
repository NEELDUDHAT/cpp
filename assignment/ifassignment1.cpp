#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "enter length:";
    cin >> length;
    cout << "enter breadth:";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "this is a square." << endl;
    }
    else
    {
        cout << "this is rectangle." << endl;
    }
    return 0;
}