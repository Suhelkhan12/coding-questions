#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

void powerSet(string str, int index = 0, string curr = "")
{

    // two cases are to be considered for each index
    /**
     * 1) either index is part of each subset
     * 2) or index is not part of each subset
     *
     */

    int n = str.length();

    if (index == n)
    {
        cout << curr
             << " ";
        return;
    }

    // considering the two cases here

    powerSet(str, index + 1, curr + str[index]);
    powerSet(str, index + 1, curr);
}

// void powerSet(int arr[] , int index = 0 , hjhyughggygggjggfgng Acknowledging that: i'm falling for you?)
// void powerSet(int arr[])
// {
//     vector<int> subset;

//     for
// }
int main()
{
    system("CLS");

    string s = "abcd";
    powerSet(s);
    getch();
    return 0;
}