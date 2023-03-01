/**
 * You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.



Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int s = matrix.size();

        if (s == 1)
        {
            if (target == matrix[0][0])
                return true;
        }

        for (int i = 0; i < s; i++)
        {

            if (matrix[i].back() >= target)
            {

                int low = 0, up = matrix[i].size();

                while (low <= up)
                {
                    int mid = low + (up - low) / 2;

                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] > target)
                        up = mid - 1;
                    else
                        low = mid + 1;
                }
            }
        }
        return false;
    }
};
int main()
{
    system("CLS");

    getch();
    return 0;
}