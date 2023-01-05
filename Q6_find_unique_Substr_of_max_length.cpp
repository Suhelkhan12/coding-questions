/*
Given a string s, find the length of the longest
substring
 without repeating characters.



Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <set>
#include <string>
#include <string.h>
using namespace std;

int maxLenght(string s)
{

    set<char> st;
    int max = 0, start = 0, end = 0;

    while (start < s.length())
    {
        auto it = st.find(s[start]);

        if (it == st.end())
        {
            if (start - end + 1 > max)
                max = start - end + 1;
            st.insert(s[start]);
            start++;
        }
        else
        {
            st.erase(s[end]);
            end++;
        }
    }
    return max;
}
int main()
{
    system("CLS");
    cout<<maxLenght("bbb");
    getch();
    return 0;
}