/*
PROBLEM 8: An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.
 
Example 1:

Input: nums = [1,2,2,3]
Output: true
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
    bool isMonotonic (vector<int>& nums)
    {
        return isIncreasing(nums) || isDecreasing(nums);
    }

    bool isIncreasing (vector<int>& nums)
    {
        int i,j, flag = 0;
        
        for (i=0, j=1; i<nums.size()-1; i++, j=i+1)
        {
            if (nums[i] <= nums[j])
                continue;
                
            else
                return false;
        }

        return true;
    }

    bool isDecreasing (vector<int>& nums)
    {
        int i,j, flag = 0;
        
        for (i=0, j=1; i<nums.size()-1; i++, j=i+1)
        {
            if (nums[i] >= nums[j])
                continue;
                
            else
                return false;
        }

        return true;
    }
};

int main ()
{
    vector <int> nums;
    int target, i, flag, n;
    Solution s;

    cout << "Number of elements to be entered: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "Element " << i << ": ";
        cin >> flag;
        nums.push_back(flag);
    }

    if (s.isMonotonic(nums) == 1)
        cout << "True";

    else 
        cout << "False";

    return 0;
}