#include <iostream>
using namespace std;

int odd(int a)
{
    cout << "enter a: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}

int main()
{
    odd(9);
    return 0;
}