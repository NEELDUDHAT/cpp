#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0, power = 1; // input decimal number
    cin >> n;
    while (n > 0)
    {
        int paritydigit = n % 2;
        ans += paritydigit * power;
        power *= 10;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}