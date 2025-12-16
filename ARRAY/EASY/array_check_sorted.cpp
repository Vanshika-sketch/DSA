#include <iostream>
#include <vector>
using namespace std;

// Function to check if array is sorted
bool isArraySorted(vector<int> &arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(isArraySorted(arr, n))
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}
