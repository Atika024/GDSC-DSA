/*
PROBLEM 9: Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

Example:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 as it is greater than all the elements to its right.  Similarly, the next leader is 5. The right most element is always a leader so it is also included.
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> ans;
        int i, j;
        
        for (i=0; i<n; i++)
        {
            int max = 0;
            for (j=n-1; j>i; j--)
            {
                if (a[j] > max)
                    max = a[j];
            }
            
            if (a[i] >= max)
                ans.push_back(a[i]);
        }

        return ans;
    }
};

int main ()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int a[n];

        for (long long i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        Solution s;
        vector<int> v = s.leaders(a, n);

        for (auto it=v.begin(); it!=v.end(); it++)
            cout << *it << " ";
    
        cout << endl;
    }

    return 0;
}