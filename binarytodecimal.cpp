#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0, power = 1;
    cin >> n; // input binary number
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans = ans + (lastdigit * power);
        power *= 2;
        n /= 10;
    }
    cout << ans << endl;

    return 0;
}