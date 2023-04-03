#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

int factorial(int n)
{
    int k = 1;
    while (n > 0)
    {
        k = k * n;
        n--;
    }
    return k;
}

int combination(int n, int r)
{
    return (factorial(n) / factorial(n - r) / factorial(r));
}

void printPascal(int rows)
{
    int k;
    // first doing it just for 4 rows
    for (int i = 1; i <= rows; i++)
    {
        k = 1;
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            if (j >= rows + 1 - i && j <= rows - 1 + i && k)
            {
                cout << "*";
                k = 0;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
}
int main()
{
    system("CLS");
    printPascal(10);
    getch();
    return 0;
}