/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).



Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false

*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool isSubsequence(string s, string t)
{

    int j, i;
    j = 0;

    for (i = 0; i < t.length() && j < s.length(); i++)
    {
        if (t[i] == s[j])
            j++;
    }
    return (j == s.length());
}
int main()
{
    system("CLS");

    getch();
    return 0;
}