#include <iostream>
using namespace std;
int main()
{
    char sign;
    float a, b;
    cout << "enter a and b:";
    cin >> a >> b;
    cout << "enter the sign: " << endl;
    cout << "sign + \n sign - \n sign * \n sign / \n sign %" << endl;
    cin >> sign;
    switch (sign)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << (int(a) % int(b));
        break;
    }
    return 0;
}