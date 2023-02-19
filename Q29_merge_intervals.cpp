/**
 * @file Q29_merge_intervals.cppGiven an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.



Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-16
 *
 * @copyright Copyright (c) 2023
 *
 */

// =================>>>>>>>>>>>>>>>>>>>>> CODE HERE
/**
 * @brief
 *
 */

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {

        if (ans.empty())
        { // agar hmare ans vector me ek bhi interval nahi hai
            // mtlb sbse phle interval k liye to hme ise krna hi padega push hmare ans me
            ans.push_back(intervals[i]);
        }
        else
        {
            vector<int> &v = ans.back(); // back hme ref return krta sbse last element ka
            int y = v[1];

            // here we comparing our end point and last point
            if (intervals[i][0] <= y)
            {
                v[1] = max(y, intervals[i][1]);
            }
            else
            { // if not overlapping
                ans.push_back(intervals[i]);
            }
        }
    }
    return ans;
}
using namespace std;

int main()
{
    system("CLS");

    getch();
    return 0;
}