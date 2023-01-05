
/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.


*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    // Your code goes here

    std ::sort(array.begin(), array.end());

    int i;

    for (i = 0; i < array.size(); i++)
    {
        if (array[i] != i + 1)
            break;
    }
    if (i == n)
        return n;
    return i + 1;
}
int main()
{
    system("CLS");

    vector<int> v = { 1, 2};
    cout << MissingNumber(v,v.size());

    getch();
    return 0;
}