#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    system("CLS");
    int row, col;
    cin >> row >> col;
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // there is 4 types of traversal here first row , last col , last row , and first col and so on;

    // spiral traversal
    int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;

    while (row_start <= row_end && col_start <= col_end)
    {

        // for first row
        for (int col = col_start; col <= col_end; col++)
        {
            cout << matrix[row_start][col] << " ";
        }
        row_start++;

        // for last col
        for (int row = row_start; row <= row_end; row++)
        {
            cout << matrix[row][col_end] << " ";
        }
        col_end--;

        // for last row
        for (int col = col_end; col >= col_start; col--)
        {
            cout << matrix[row_end][col] << " ";
        }
        row_end--;

        // for first col
        for (int row = row_end; row >= row_start; row--)
        {
            cout << matrix[row][col_start] << " ";
        }
        col_start++;
    }
    getch();
    return 0;
}

// start hmesha aag ebdhega and end hmesha ghatega