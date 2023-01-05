/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.



Example 1:

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
Example 2:

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
Example 3:

Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{

    int i, j, comp_sum = 0;
    int left_sum = 0, right_sum = 0;
    int ans;

    for (i = 0; i < nums.size(); i++)
        comp_sum += nums[i];

    for (i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            left_sum = 0;
            right_sum = comp_sum - nums[0];
            // if(left_sum == right_sum)
            //    break;
        }
        else if (i == nums.size() - 1)
        {
            right_sum = 0;
            left_sum = comp_sum - nums[nums.size() - 1];
            // if(left_sum == right_sum)
            //    break;
        }
        else
        {
            left_sum = left_sum + nums[i - 1];
            right_sum = comp_sum - left_sum - nums[i];
        }
        if (left_sum == right_sum)
            break;
    }

    if (i == nums.size())
        return -1;
    return i;
}
int main()
{
    system("CLS");

    getch();
    return 0;
}