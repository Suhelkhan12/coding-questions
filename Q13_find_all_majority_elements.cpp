/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.



Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> res;
    int counter, i;

    if (nums.size() == 1)
    {
        res.push_back(1);
        return res;
    }

    for (i = 0; i < nums.size() - 1; i++)
    {
        counter++;
        if (nums[i] != nums[i + 1])
        {
            if (counter > nums.size() / 3)
            {
                break;
            }
            counter = 0;
        }
    }
    res.push_back(nums[i]);
    return res;
}
int main()
{
    system("CLS");
    vector<int> ans, inp = {3, 2, 3};
    ans = majorityElement(inp);

    for (auto num : ans)
        cout << num << " ";
    getch();
    return 0;
}