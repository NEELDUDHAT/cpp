#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    if (n >= 0)
    {
        cout << "this number " << n << " is positive" << endl;
    }
    else
    {
        cout << " The number is negative and skipped" << endl;
    }
    return 0;
}