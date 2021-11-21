/*
PROBLEM 6: The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.

Example:

Input:
N = 2
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3
Explanation: For N=2 , steps will be
as follows in the example and total
3 steps will be taken.

Your Task:
You don't need to read input or print anything. You only need to complete the function toh() that takes following parameters: N (number of discs), from (The rod number from which we move the disc), to (The rod number to which we move the disc), aux (The rod that is used as an auxiliary rod) and prints the required moves inside function body (See the example for the format of the output) as well as return the count of total moves made. The total number of moves are printed by the driver code.
Please take care of the case of the letters.
*/

#include <iostream>

using namespace std;

class Solution
{
    public:
    long long toh(int N, int from, int to, int aux) 
    {
        if (N == 0)
            return 0;
            
        int steps1 = toh (N-1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        int steps2 = toh (N-1, aux, to, from);
        
        return (1 + steps1 + steps2);
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
        cout << ob.toh(N, 1, 3, 2) << endl;
    }

    return 0;
}