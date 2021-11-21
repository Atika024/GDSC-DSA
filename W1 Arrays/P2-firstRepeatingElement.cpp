/*
PROBLEM 2: Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

EXAMPLE:
Input: n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 5 is appearing twice and its first appearence is at index 2 which is less than 3 whose first occuring index is 3.

Your Task:
You don't need to read input or print anything. Complete the function firstRepeated() which takes arr and n as input parameters and return the position of the first repeating element. If there is no such element, return -1.
The position you return should be according to 1-based indexing. 
*/

#include<iostream>

using namespace std;

int firstRepeated(int arr[], int n) 
{
    int pos, i, j, count = 0;

    for (i=0; i<n; i++)
    {
        pos = i;

        for (j=i+1; j<n; j++)
        {
            if ( arr[j] == arr[i])
                return pos + 1;
        }
    }

    return -1;
}

int main ()
{
    int n, i;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:\n";
    for (i = 0; i < n; i++)
    {
       cin>>arr[i];
    }

    cout << "\nIndex of 1st repeated element is " << firstRepeated (arr, n);

    return 0;
}