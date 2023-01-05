#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

// void Sort_Arr(int arr[], int n)
// {
//     int i, total_zero = 0, total_ones = 0;

//     for (i = 0; i < n; i++)
//     {                                             ======>>>>>>>>>>>>>>  complexity O(2n) =~ O(n)
//         if (arr[i] == 0)
//             total_zero++;
//     }

//     total_ones = n - total_zero;

//     for (i = 0; i < n; i++)
//     {
//         if (i < total_zero)
//             arr[i] = 0;
//         else
//             arr[i] = 1;
//     }
// }

//  =>>>>>>>>>>>>>>>>>>>>>>>>>>>  SECOND METHOD USES TWO POINTER TECHNIQues

void Sort_Arr(int arr[], int n)
{
    int i, left = 0, right = n - 1;

    while (left < right)
    {
        while (left < right && arr[left] == 0)
            left++;
        while (left < right && arr[right] == 1)
            right--;

        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}
int main()
{
    system("CLS");
    int arr[] = {0, 1, 0, 1, 0, 0, 1};
    int s = sizeof(arr) / sizeof(arr[0]);

    Sort_Arr(arr, s);

    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    getch();
    return 0;
}