/*
    PROBLEM 1: Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 

    EXAMPLE:
    Input:
    N = 5, D = 2
    arr[] = {1,2,3,4,5}
    Output: 3 4 5 1 2
    Explanation: 1 2 3 4 5  when rotated by 2 elements, it becomes 3 4 5 1 2.
*/

#include<iostream>

using namespace std;

void rotateArr(int arr[], int d, int n)
{
    int temp_arr[n], i, j;
    
    for (i=0; i<d; i++)
    {
        temp_arr[i] = arr[i];
    }
        
    for (i=0, j=0; i<n, j<d; i++)
    {
        if (i < (n-d))
            arr[i] = arr[i+d];
            
        else
            arr[i] = temp_arr[j++];
                
    }

    cout << "\nRotated array: ";   
    for (i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main ()
{
    int N, D, i;
    
    cout << "Enter the size of the array: ";
    cin >> N;

    int arr[N];
    cout << "Enter the array elements:\n";
    for (i = 0; i < N; i++)
    {
       cin>>arr[i];
    }

    cout << "Enter the number of elements by which the array should be rotated: ";
    cin >> D;    

    cout << "\nInitial array: ";
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    rotateArr (arr, D, N);
    
    return 0;
}