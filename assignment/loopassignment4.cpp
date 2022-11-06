#include <iostream>
using namespace std;
int main()
{
    int n, rem, re = 0;
    cout << "enter n:";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        re = re * 10 + rem;
        n /= 10;
    }
    cout << re;
    return 0;
}