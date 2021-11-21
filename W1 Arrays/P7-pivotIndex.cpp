/*
PROBLEM 7: Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

Example:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation: The pivot index is 3.
             Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
             Right sum = nums[4] + nums[5] = 5 + 6 = 11
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int i, sum1 = 0, sum2=0;
        
        for(i=0; i<nums.size(); i++)
            sum1 += nums[i];
                
        for(i=0; i<nums.size() ; i++ )
        {                 
            sum1 -= nums[i];   
          
            if(sum1 == sum2)
                return i;
            
            sum2 += nums[i];
        }
        
        return -1;
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

    cout << s.pivotIndex(nums);

    return 0;
}