#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minVal = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }

    cout << "Minimum element = "<< minVal;
    return 0;
}
