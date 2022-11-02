#include <iostream>
using namespace std;
int main()
{
    float costprice, sellingprice, n;
    cout << "enter costprice:";
    cin >> costprice;
    cout << "enter sellingprice:";
    cin >> sellingprice;
    n = sellingprice - costprice;
    if (n > 0)
    {
        cout << "profit" << endl;
        cout << "profit=" << n << endl;
    }
    else if (n == 0)
    {
        cout << "no profit or no loss";
    }
    else
    {
        cout << "loss" << endl;
        cout << "loss=" << -n << endl;
    }
    return 0;
}