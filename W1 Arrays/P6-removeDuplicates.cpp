/*
PROBLEM 6: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

EXAMPLE:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int pos = 1;
        
        if (nums.size() == 0)
            return 0;
        
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i] == nums[pos-1])
                continue;
            else
            { 
                nums[pos] = nums[i];
                pos++;
            }
        }
        
        return pos;
    }
};

int main ()
{
    vector <int> nums;
    int i, flag, n;
    Solution s;

    cout << "Number of elements to be entered: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << "Element " << i << ": ";
        cin >> flag;
        nums.push_back(flag);
    }

    int k = s.removeDuplicates(nums); 

    cout << "[ ";
    for (i = 0; i<k; i++)
        cout << nums[i] << " ";
    cout << "]";
    
    return 0;
}