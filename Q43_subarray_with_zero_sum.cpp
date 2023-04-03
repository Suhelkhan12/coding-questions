#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <unordered_set>
using namespace std;

bool subarrWithGivenSum(vector<int> &v, int sum)
{

    unordered_set<int> hs;
    int prefix_sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        if (prefix_sum == sum)
            return true;
        // IMP if find do not returns interator to end  return true
        // IMP this condition is the catch here
        if (hs.find(prefix_sum - sum) != hs.end())
            return true;
        else
            hs.insert(prefix_sum);
    }
    return false;
}

int main()
{
    system("CLS");

    vector<int> v = {5, 6, 7, 13, 14};
    // cout << subarrWithGivenSum(v, 22);

    int low = upper_bound(v.begin(), v.end(), 14) - v.begin();
    cout << low << " upper bound";
    getch();
    return 0;
}