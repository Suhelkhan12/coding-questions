#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

int maxSum_of_k_elements_using_sliding_window(vector<int> &arr, int k)
{
    // k denote number of elements jinks sum nikalna through the array and vo bhi max
    // sliding window tech is used here to understand refer to GEEKS FOR GEEKS

    int i, max_sum = 0, window_sum;
    // max sum will store the final sum
    // window_sum will store that sum over which the window is present to viualise this go to GEEKS FOR GEEKS

    // finding sum for first window
    for (i = 0; i < k; i++)
        max_sum += arr[i];

    // this is also the sum of element present in the first window
    window_sum = max_sum;

    // now finding the sum of all other windows by sub the first elment of prev window and add last element of curr window
    for (i = k; i < arr.size(); i++)
    {
        window_sum = window_sum + arr[i] - arr[i - k];  // in order to under stand this line refer to MOTI NOTEBOOK or GFG
        max_sum = max(max_sum , window_sum);
    }
    return max_sum;
}
int main()
{
    system("CLS");
    vector<int> v = {100,200,300,400};
    int k = 2;
    cout<<maxSum_of_k_elements_using_sliding_window(v , k);
    getch();
    return 0;
}