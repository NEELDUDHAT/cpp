#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else if (n < 0)
    {
        n = -n;
        cout << n;
    }
    else if (n == 0)
    {
        cout << n;
    }
    return 0;
}