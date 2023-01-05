/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.



Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int m = s.length(), n = t.length();

    if (m != n)
        return false;

    bool visited[256];
    int mapped[256];

    for (int i = 0; i < 256; i++)
    {
        visited[i] = false;
        mapped[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (mapped[s[i]] == -1)
        {
            if (visited[t[i]] == true)
                return false;

            visited[t[i]] = true;
            mapped[s[i]] = t[i];
        }
        else if (mapped[s[i]] != t[i])
            return false;
    }
    return true;
}
int main()
{
    system("CLS");

    getch();
    return 0;
}