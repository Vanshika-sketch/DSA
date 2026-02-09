#include <iostream>
using namespace std;

int countDigits(int n) {
    
    if (n == 0) {
        return 1;
    }

    int count = 0;

    while (n != 0) {
        count++;
        n = n / 10;
    }

    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = countDigits(num);
    cout << "Number of digits: " << digits;

    return 0;
}
