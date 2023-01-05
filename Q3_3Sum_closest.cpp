
/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.


*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
#include <cmath>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    // can be done using two pointer

    sort(nums.begin(), nums.end());
    int i, result, diff = INT_MAX, ans = 0;

    for (i = 0; i < nums.size(); i++)
    {
        int left = i + 1, right = nums.size() - 1;

        while (left < right)
        {
            // if we found all elements whose sum== target
            if (nums[i] + nums[left] + nums[right] == target)
                return target;

            // if diff between 3 val and target is less than diff which contain max value possible in initail interation
            else if (abs(nums[i] + nums[left] + nums[right] - target) < diff)
            {
                diff = abs(nums[i] + nums[left] + nums[right] - target);  // WE ARE doing this to keep target of diff whenever it is minimum that is the answer
                ans = nums[i] + nums[left] + nums[right];
            }

            if (nums[i] + nums[left] + nums[right] > target)
                right--;
            else
                left++;
        }
    }
    return ans;

}
int main()
{
    system("CLS");
    vector<int> v = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(v, target);
    getch();
    return 0;
}