/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);


Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {

        if (numRows == 1)
            return s;

        string res = "";

        for (int r = 0; r < numRows; r++)
        {

            int increament = 2 * (numRows - 1);

            for (int i = r; i < s.length(); i += increament)
            {
                res += s[i];

                if (r > 0 && r < numRows - 1 && i + increament - 2 * r < s.length())
                {
                    res += s[i + increament - 2 * r];
                }
            }
        }
        return res;
    }
};

int main()
{
    system("CLS");

    getch();
    return 0;
}