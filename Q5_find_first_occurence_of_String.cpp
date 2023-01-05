/*


Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.



Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.



*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

int strStr(string haystack, string needle)
{

    string sub;
    int i;

    for (i = 0; i < haystack.length(); i++)
    {
        if (haystack[i] == needle[0])
        {
            sub = haystack.substr(i, needle.length());
            if (sub == needle)
                return i;
        }
    }
    return -1;
}
int main()
{
    system("CLS");
    cout<<strStr("leetcode","leeto");
    getch();
    return 0;
}