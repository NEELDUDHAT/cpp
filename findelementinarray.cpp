#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n, b[100];
    cout << "enter range:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] == b[i])
        {
            cout << a[i];
        }
        else
        {
            cout << " -1";
        }
    }
    return 0;
}