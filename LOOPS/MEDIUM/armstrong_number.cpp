#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, original;
    cout << "Enter a number: ";
    cin >> n;

    original = n;
    int sum = 0;

    // Count digits
    int count = 0, temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }

    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not a Armstrong number";
    }

    return 0;
}