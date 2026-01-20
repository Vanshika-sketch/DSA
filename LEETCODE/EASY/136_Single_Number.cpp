#include <iostream>
#include <vector>
using namespace std;


    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];
        }

        return result;
    }

int main() {
   
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number is: " << singleNumber(nums) << endl;

    return 0;
}
