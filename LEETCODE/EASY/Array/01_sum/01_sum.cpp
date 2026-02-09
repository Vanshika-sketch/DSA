#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> res;
    bool found = false;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                res.push_back(i);
                res.push_back(j);
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "Indices: " << res[0] << " " << res[1];
    } else {
        cout << "No valid pair found";
    }

    return 0;
}
