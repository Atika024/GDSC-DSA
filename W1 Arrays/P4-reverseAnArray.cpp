/*
PROBLEM 4: Given an array A of size N, print the reverse of it.

Input: First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output: For each testcase, in a new line, print the array in reverse order.

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/

#include<iostream>

using namespace std;

void reverse (int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
 {
	int T, temp, i, j;
    
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        
        int A[N];
        for (i=0; i<N; i++)
            cin >> A[i];
           
        for (i=0, j=N-1; i<j; i++,j--)
            reverse (A[i], A[j]);
        
        for (i=0; i<N; i++)
            cout << A[i] << " ";
    }
    
	return 0;
}