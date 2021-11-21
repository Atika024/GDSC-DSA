/*
PROBLEM 5: Given an array arr[] of size N containing positive integers and an integer X, find the element in the array which is smaller than X and closest to it.
 
Example:
Input:
N = 5
arr[] = {4 67 13 12 15}
X = 16
Output: 15
Explanation: For a given value 16, there are four values which are smaller than it. But 15 is the number which is smaller and closest to it with minimum difference of 1.

Your Task: You don't need to read input or print anything. You need to complete the given function immediateSmaller() which takes arr, N and X as input parameters and returns the closest element that is smaller than X. If no such element exists, return -1.
*/

#include<iostream>

using namespace std;

int immediateSmaller(int arr[], int n, int x)
    {
        int closest = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < closest)
            {
                closest = arr[i];
            }
        }

        for (int i=0; i<n; i++)
        {
            if (arr[i] < x)
            {
                if (x - arr[i] <= x - closest)
                    closest = arr[i];
            }
        }
        
        if (closest < x)
            return closest;
        else
            return -1;
    }

int main ()
{
    int N, X;

    cout << "Size: ";
    cin >> N;

    int arr[N];
    cout << "Array elements:\n";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    cout << "X = ";
    cin >> X;

    cout << "\nImmediate smaller element than " << X << ": " << immediateSmaller (arr, N, X);
    if (immediateSmaller (arr, N, X) == -1)
        cout << "\nNo value is smaller than 1 !!!";

    return 0;
}