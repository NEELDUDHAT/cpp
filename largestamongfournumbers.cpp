#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, max;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;

    cout << "enter the value of c:" << endl;
    cin >> c;

    cout << "enter the value of d:" << endl;
    cin >> d;

    max = (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
    cout << "largest number among a,b,c and d is " << max << endl;

    return 0;
}