#include <iostream>
using namespace std;
int p = 5;
void print(int p)
{
    cout << p << endl;
}
int main()
{
    print(p);
    int p = 7;

    cout << p << endl;

    p++;
    cout << p << endl;
}
