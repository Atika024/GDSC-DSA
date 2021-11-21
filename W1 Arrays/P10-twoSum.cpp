/*
PROBLEM 10: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i, j, val;
        vector<int> pos;
        
        for (i=0; i<nums.size(); i++)
        {
            val = target - nums[i] ;
            
            for (j=i+1; j<nums.size(); j++)
            {
                if (nums[j] == val)
                {
                    pos.push_back(i);
                    pos.push_back(j);
                    break;
                }
            }
            
            if (pos.size() == 2)
                break;
        }
        
        return pos;
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

    cout << "Target element: ";
    cin >> target;

    vector <int> ans = s.twoSum(nums, target);

    cout << "{ ";
    for (auto element : ans) 
    {
        cout << element << " ";
    }
    cout << "}";

    return 0;
}