#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(vector<int> &nums)
{

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
        
    }return maxCount;
}

int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "maximum consecutive number is : " << maxConsecutiveOnes(nums);

    return 0;
}
