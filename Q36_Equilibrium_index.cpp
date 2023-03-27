#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <vector>
#include <string.h>
using namespace std;

int sum(vector<int> &v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    return sum;
}

int equillibriumIndex(vector<int> &v)
{
    int sumT = sum(v);
    int i, left_sum = 0;
    for (i = 0; i < v.size(); i++)
    {
        sumT -= v[i];

        if (left_sum == sumT)
            return i;
        left_sum += v[i];
    }
    return -1;
}
int main()
{
    system("CLS");
    vector<int> v = {-7, 1, 5, 2, -4, 3, 0};
    cout << equillibriumIndex(v);
    getch();
    return 0;
}