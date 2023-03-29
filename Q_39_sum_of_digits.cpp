#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sum(n / 10));
}
int main()
{
    system("CLS");
    cout << sum(123);
    getch();
    return 0;
}