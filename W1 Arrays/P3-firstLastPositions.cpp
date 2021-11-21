/*
PROBLEM 3: Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].

Example:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution 
{
    public:
    vector <int> searchRange (vector <int> & nums, int target) 
    {
        vector <int> pos;
        int i = 0, first = -1, last = -1;
        int j = nums.size() - 1;
        
        while (i <= j)
        {
            int mid = (i+j)/2;
            
            if (nums[mid] == target)
            {
               int temp = mid;
                
                while ((mid > 0) && (nums[mid-1] == target)) 
                    mid--;
                
                first = mid;
                
                while ((temp < nums.size() - 1 && nums[temp+1] == target))
                    temp++;
                
                last = temp;
                
                pos.push_back (first);
                pos.push_back (last);
                return pos;
            }
            else if (nums[mid] > target)
                j = mid-1;
            else
                i = mid+1;
        }
        
        pos.push_back (-1);
        pos.push_back (-1);

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

    vector <int> ans = s.searchRange (nums, target);

    cout << "{ ";
    for (auto element : ans) 
    {
        cout << element << " ";
    }
    cout << "}";

    return 0;
}