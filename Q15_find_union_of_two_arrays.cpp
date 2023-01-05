#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

vector<int> find_union(vector<int> nums1, vector<int> nums2)
{
    vector<int> res;

    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size())
    {

        if (nums1[i] < nums2[j])
        {
            res.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            res.push_back(nums2[j]);
            j++;
        }
        else
        {
            res.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    for (; i < nums1.size(); i++)
        res.push_back(nums1[i]);

    for (; j < nums2.size(); j++)
        res.push_back(nums2[j]);

    return res;
}
int main()
{
    system("CLS");
    vector<int> n1, n2, ans;

    n1 = {1, 2, 3, 6, 8 , 10 , 14 , 15};
    n2 = {3, 4, 8, 9, 15};

    ans = find_union(n1, n2);
    for (int num : ans)
        cout << num << " ";
    getch();
    return 0;
}