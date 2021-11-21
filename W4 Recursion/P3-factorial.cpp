/*
PROBLEM 3: Given a positive integer, N. Find the factorial of N.

Example:
Input:
N = 5
Output:
120
Explanation: 5*4*3*2*1 = 120
*/

#include<iostream>

using namespace std;

class Solution
{
    public:
    long long int factorial(int N)
    {
        if (N == 0)
            return 1;
        
        else
            return N * factorial(N-1);
    }
};

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.factorial(N) << endl;
    }

    return 0;
}