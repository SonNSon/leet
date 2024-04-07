#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
https://leetcode.com/problems/palindrome-number/
*/
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int n = x;
        long int rvs = 0;
        while (n > 0)
        {
            int p = n % 10;
            rvs = rvs * 10 + p;
            n = n / 10;
        }
        if (rvs == x)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // Get input from the user
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create an instance of the Solution class
    Solution obj;

    // Call the isPalindrome function and store the result
    bool is_palindrome = obj.isPalindrome(num);

    // Print the result
    if (is_palindrome)
    {
        cout << num << " is a palindrome." << endl;
    }
    else
    {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}