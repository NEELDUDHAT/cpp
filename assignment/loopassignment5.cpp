#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == j || i + j == 6)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << "\n";
    }
    return 0;
}