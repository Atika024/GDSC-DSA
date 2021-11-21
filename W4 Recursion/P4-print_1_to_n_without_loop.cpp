/*
PROBLEM 4: You are given an integer N. Print numbers from 1 to N without the help of loops.

Example:
Input:
N = 5
Output:
1 2 3 4 5
Explanation: We have to print numbers from 1 to 5.
*/

#include<iostream>

using namespace std;

class Solution
{
public:
    void printTillN(int N)
    {
        if (N>0)
        {
            printTillN(N-1);
            cout << N << " ";
        }
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
        ob.printTillN(N);
        cout << endl;
    }

    return 0;
}