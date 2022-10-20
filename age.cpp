#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age:" << endl;
    cin >> age;
    if (age < 12)
    {
        cout << "you are child" << endl;
    }
    else if (age >= 12 && age < 18)
    {
        cout << "you are teenager" << endl;
    }
    else
    {
        cout << "you are adult" << endl;
    }
    return 0;
}