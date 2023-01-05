/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2



*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = INT_MIN;
    int life = 0;
    int i;

    for (i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate)
            life++;
        else if (life == 0)
        {
            candidate = nums[i];
            life = 1;
        }
        else
            life--;
    }
    return candidate;
}
int main()
{
    system("CLS");
    vector<int> v = {3, 1, 3, 3, 2};
    
    cout << majorityElement(v);
    getch();
    return 0;
}