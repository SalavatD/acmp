#include <iostream>

using namespace std;

int main()
{
    int a;
    int sum = 0;
    cin >> a;
    if (a > 0)
    {
        for (int i = 1; i <= a; i++)
        {
            sum += i;
        }
    }
    else if (a < 0)
    {
        for (int i = 1; i >= a; i--)
        {
            sum += i;
        }
    }
    else
    {
        sum = 1;
    }
    cout << sum;
    return 0;
}
