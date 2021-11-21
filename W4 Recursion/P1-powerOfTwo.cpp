/*
PROBLEM 1: Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.

Example:

Input: n = 1
Output: true
Explanation: 20 = 1
*/

#include<iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n <= 0) 
            return false;
        if(n % 2 != 0) 
            return false;
        if(n == 1) 
            return true;
        
        return isPowerOfTwo(n/2);
    }
};

int main ()
{
    int n;
    Solution s;

    cin >> n;

    bool ans = s.isPowerOfTwo(n);
    if (n == 0)
        cout << "False";
    else
        cout << "True";

    return 0;
}