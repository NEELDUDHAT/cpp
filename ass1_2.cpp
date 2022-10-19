#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter first number:" << endl;
    cin >> a;
    cout << "enter second number:" << endl;
    cin >> b;
    cout << (a < 50 && a < b) ? 1 : 0;
    return 0;
}