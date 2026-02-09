#include <iostream>
using namespace std;

int maxoftwonum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    int max = maxoftwonum(7, 9);
    cout << "max is: " << max;

    return 0;
}
