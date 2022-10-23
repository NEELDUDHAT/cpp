#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter number:" << endl;
    cin >> n;

    // sum of n natural number by using while loop
    /*
    int sum = 0, i = 1;
    while (i <= n)
    {
        sum = sum + i;
         i++;
    }
    cout << "sum is " << sum << endl;
*/

    // sum of n natural number by using for loop

    /*int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum is " << sum << endl;
    */

    // sum of n natural number by using do while loop
    /*int i = 1, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "sum is " << sum << endl;*/
    return 0;
}