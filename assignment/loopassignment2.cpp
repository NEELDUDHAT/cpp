#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << n << " factorial is =" << fact << endl;

    return 0;
}