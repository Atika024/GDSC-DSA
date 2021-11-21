/*
PROBLEM 5: Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    void reverseString (vector<char>& s) 
        {
            int  i = 0, j = s.size()-1;
        
            swap(s, i, j);
        }

        void swap (vector<char>& s, int i, int j)
        {
            if (i < j)
            {  
                char temp = s[i]; 
                s[i] = s[j];
                s[j] = temp;
                swap(s, i+1, j-1);
            }
        }
};

int main ()
{
    vector<char> s;
    string str;

    cout << "Input string: ";
    cin >> str;

    int n = str.length();

    for (int i=0; i<n; i++)
    {
        s.push_back(str[i]);
    }

    Solution obj;
    obj.reverseString(s);

    for (int i = 0; i<n; i++)
    {
        cout << s[i];
    }

    return 0;
}