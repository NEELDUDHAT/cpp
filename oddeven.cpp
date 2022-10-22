#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    // by if else statement

    /*if (num % 2 == 0)
    {
        cout << "number is even" << endl;
    }
    else
    {
        cout << "number is odd" << endl;
    }
*/

    // ternary operator

    num % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
    return 0;
}