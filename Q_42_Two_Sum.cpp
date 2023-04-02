/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

// IMP brute force is just use two loop and check for every pair
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> twoSum(vector<int> &v, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < v.size(); i++)
    {

        // IMP if we dont find the difference of target and a[i] we'll map that value to the particular index
        if (mp.find(target - v[i]) == mp.end())
            mp[v[i]] = i;
        else
            return {mp[target - v[i]], i};
    }
    return {-1, -1};
}

int main()
{
    system("CLS");
    vector<int> v = {3, 2, 4};
    vector<int> ans = twoSum(v, 6);

    for (auto n : ans)
        cout << n << " ";
    getch();
    return 0;
}