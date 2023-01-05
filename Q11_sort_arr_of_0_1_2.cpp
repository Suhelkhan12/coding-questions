#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void sort012(int arr[], int n)
{
    // code here
    int low = 0;
    int mid = 0;
    int high = n - 1;
    int i;

    while(mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}
int main()
{
    system("CLS");
    int arr[] = {0, 2, 1, 2, 0};
    sort012(arr, 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    getch();
    return 0;
}