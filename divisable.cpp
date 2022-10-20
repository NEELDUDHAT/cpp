#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter num:" << endl;
    cin >> num;
    /*if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "num is even and divisable by three." << endl;
    }*/

    if (num % 3 == 0 || num % 5 == 0)
    {
        cout << "num is divisable by three and five." << endl;
    }

    return 0;
}