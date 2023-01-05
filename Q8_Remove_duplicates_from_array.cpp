#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i, counter = 0;
    for (i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[counter++] = nums[i];
        }
    }

    nums[counter++] = nums[nums.size() - 1];

    return counter;
}
int main()
{
    system("CLS");
    
    vector<int> v = {0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(v);
    getch();
    return 0;
} 