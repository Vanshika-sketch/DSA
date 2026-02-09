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

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        ans[i] = nums[nums[i]];
    }

    cout << "Result array: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
