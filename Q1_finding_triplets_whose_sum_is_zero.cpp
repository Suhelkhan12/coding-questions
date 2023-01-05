/*
given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
*/

/*
 ------------->>>>>>>>>>>>>>    EXPLANATION

. Used two pointer technique look at gfg;



*/

#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &nums)
{
    vector<vector<int>> result;

    sort(nums.begin(), nums.end()); // vector has been sorted

    int i; // counter for first loop

    for (i = 0; i < nums.size() - 2; i++)
    {
        int left = i+1, right = nums.size() - 1;

        // from her two pointer search has begun for two pair
        while (left < right)
        {
            if (nums[i] + nums[left] + nums[right] > 0)
                right--;
            else if (nums[i] + nums[left] + nums[right] < 0)
                left++;
            else
            {
                vector<int> triplet = {nums[i], nums[left], nums[right]};

                result.push_back(triplet);

                // checking duplicacy of left data
                while (left < right && nums[left] == triplet[1])
                    left++;
                // chekcing duplicacy of right data
                while (left < right && nums[right] == triplet[2])
                    right--;
            }

            // removing duplicacy for ith data
            while (i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
    }
    return result;
}
int main()
{
    system("CLS");
    vector<int> num = {-1, 0, 1, 2, -1, 4};
    vector<vector<int>> res = findTriplets(num);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}