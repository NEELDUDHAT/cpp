#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, x = 0;
    int y;
    for (n = 1; n < 501; n++)
    {
        y = n;
        a = y % 10;
        y = y / 10;
        b = y % 10;
        y = y / 10;
        c = y % 10;

        x = (a * a * a) + (b * b * b) + (c * c * c);

        if (x == n)
        {
            cout << n << " ";
        }
    }
    return 0;
}