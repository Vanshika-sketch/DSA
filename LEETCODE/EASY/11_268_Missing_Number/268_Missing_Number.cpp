#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>&nums){

    int ans =0;

    for(int i =0;i<=nums.size();i++){
        ans = ans ^ i;
    }

    for(int i=0;i<nums.size();i++){
        ans = ans^nums[i];
    }
    return ans;
}



int main(){

    vector<int> nums = {3,0,1};

    cout<<"Missing number is : "<<missingNumber(nums);




    return 0;
}