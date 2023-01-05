/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.



Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    int i;
    vector<int> ans;
    int sum = 0;

    for (i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans.push_back(sum);
    }
    return ans;
}
int main()
{
    system("CLS");

    getch();
    return 0;
}