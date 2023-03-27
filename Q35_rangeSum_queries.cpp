#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

vector<int> sum(vector<int> &v)
{
    vector<int> A;
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        A.push_back(sum);
    }
    return A;
}
void rangeSumQuery(vector<int> &vec, vector<vector<int>> &query)
{
    vector<int> prefix_arr = sum(vec);
    int i;
    int querySum = 0;
    for (int i = 0; i < query.size(); i++)
    {
        if (query[i][0] == 0)
        {
            querySum = prefix_arr[query[i][1]];
            cout << querySum << " ";
        }
        else
            cout << prefix_arr[query[i][1]] - prefix_arr[query[i][0] - 1] << " ";
    }
}

int main()
{
    // system("CLS");

    vector<int> arr = {4, 5, 3, 2, 5};
    vector<vector<int>> query = {
        {0, 3},
        {2, 4},
        {1, 3}};

    rangeSumQuery(arr, query);
    // vector<int> s = sum(arr);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    getch();
    return 0;
}