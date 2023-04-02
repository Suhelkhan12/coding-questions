#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

int binarySearch(vector<vector<int>> &mat, int row, int low, int high, int requiredIndex)
{

    // IMP doing BS with recurrsssion
    if (high > low)
    {
        int mid = low + (high - low) / 2, elm_greater_and_equal_to_mid = 0;
        for (int i = 0; i < row; i++)
        {
            // IMP this will count all the elements in the matrix which are less or equal to our mid
            elm_greater_and_equal_to_mid += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
        }

        if (elm_greater_and_equal_to_mid < requiredIndex)
            return binarySearch(mat, row, mid + 1, high, requiredIndex);
        else
            return binarySearch(mat, row, low, mid, requiredIndex);
    }

    return low;
}
int calculateMedian(vector<vector<int>> &mat)
{
    int minVal = INT_MAX, maxVal = INT_MIN;

    int rows = mat.size(), cols = mat[0].size();

    // IMP if we take a sorted array in which there are only odd number of elements present then at the index mentioned below the median will be present
    int requiredIndex = ((rows * cols) + 1) / 2;

    for (int i = 0; i < rows; i++)
    {
        minVal = min(mat[i][0], minVal);
        maxVal = max(mat[i][cols - 1], maxVal);
    }

    return binarySearch(mat, rows, minVal, maxVal, requiredIndex);
}
int main()
{
    system("CLS");
    vector<vector<int>> arr = {{1, 3, 8},
                               {2, 3, 4},
                               {1, 2, 5}};
    cout << calculateMedian(arr);
    getch();
    return 0;
}