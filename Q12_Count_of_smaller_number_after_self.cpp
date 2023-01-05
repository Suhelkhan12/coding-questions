/*
Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].

 

Example 1:

Input: nums = [5,2,6,1]
Output: [2,1,1,0]
Explanation:
To the right of 5 there are 2 smaller elements (2 and 1).
To the right of 2 there is only 1 smaller element (1).
To the right of 6 there is 1 smaller element (1).
To the right of 1 there is 0 smaller element.
Example 2:

Input: nums = [-1]
Output: [0]
Example 3:

Input: nums = [-1,-1]
Output: [0,0]

*/


#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

vector<int> countSmaller(vector<int> &nums)
{
    vector<int> res;
    int count;

    if (nums.size() == 1)
    {
        res.push_back(0);
        return res;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        count = 0;
        int left = i + 1, right = nums.size() - 1;

        while (left <= right)
        {
            if (nums[left] < nums[i])
            {
                count++;
                if(left==right)
                  break;
            }
            if (nums[right] < nums[i])
                count++;

            left++;
            right--;
        }
        res.push_back(count);
    }
    return res;
}
int main()
{
    system("CLS");
    vector<int> ans, inp;
    inp = {5,2,6,1};

    ans = countSmaller(inp);

    for (auto num : ans)
        cout << num << " ";
    getch();
    return 0;
}