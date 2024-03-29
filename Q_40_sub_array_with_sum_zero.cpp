#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> ZeroSumSubarr(vector<int> &v)
{

    // vector<int> ans;

    // int sum, i, j;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     sum = 0;
    //     for (j = i; j < v.size(); j++)
    //     {
    //         sum += v[j];
    //         if (sum == 0)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    // IMP using hashing with paring

    // unordered_map<int, int> mp;
    // int sum = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     sum += v[i];

    //     if (mp.find(sum) == mp.end())
    //         mp[sum] = i;
    //     else
    //         return {mp[sum] + 1, i};
    // }

    // return {};

    // IMP single hash when only boolean has to be returned

    unordered_set<int> hp;
    int prefix_sum;

    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];

        if (hp.find(prefix_sum) != hp.end())
            return {1};
        else if (prefix_sum == 0)
            return {1};
        hp.insert(prefix_sum);
    }
}

int main()
{
    system("CLS");
    vector<int> in = {4, -3, 2, 1};
    vector<int> v = ZeroSumSubarr(in);
    for (auto it : v)
        cout << it << " ";
    getch();
    return 0;
}