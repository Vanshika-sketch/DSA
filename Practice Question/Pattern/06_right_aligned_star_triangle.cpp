#include <iostream>
using namespace std;

void right_aligned_star_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    right_aligned_star_triangle(5);

    return 0;
}
