#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void rearrangeArr(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        while (left <= right && nums[left] < 0)
            left++;

        while (left <= right && nums[right] > 0)
            right--;

        if (left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

// void rearrangeArr(int nums[], int size)
// {
//     int i = 0, j = 0;

//     for (i = 0; i < size; i++)
//     {
//         if (nums[i] < 0)
//         {
//             if (i != j)
//                 swap(&nums[i], &nums[j]);
//         j++;
//         }
//     }
// }
int main()
{

    vector<int> v = {1, -2, 3, 4, 5, 6, -7, 8, 9};

    rearrangeArr(v);

    for (int num : v)
        cout << num << " ";
    // int arr[] = {1, -2, 3, 4, 5, 6, -7, 8, -9};
    // int s = sizeof(arr) / sizeof(arr[0]);
    // rearrangeArr(arr, s);

    // for (int i = 0; i < s; i++)
    //     cout << arr[i] << " ";

    return 0;
}