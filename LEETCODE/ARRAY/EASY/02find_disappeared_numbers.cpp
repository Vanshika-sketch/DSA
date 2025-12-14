#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements (1 to n): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> mp;
    vector<int> arr;

    // Store existing numbers
    for (int i = 0; i < n; i++) {
        mp[nums[i]] = 1;
    }

    // Check missing numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (mp.find(i) == mp.end()) {
            arr.push_back(i);
        }
    }

    // Output result
    cout << "Disappeared numbers: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
