#include <iostream>
using namespace std;

int main() {
    int arr[300];

    for(int i = 0; i < 300; i++) {
        arr[i] = 24;
    }

    cout << arr[45];   // will print 24
    return 0;
}