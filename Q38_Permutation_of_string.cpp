#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;

void swap(string &a, string &b)
{
    string temp;
    temp = a;
    a = b;
    b = temp;
}
void permute(string s, int left, int right)
{
    // terminatig condition for our recurrsion
    if (left == right)
        cout << s << " ";

    for (int i = left; i <= right; i++)
    {
        swap(s[i], s[left]);
        permute(s, left + 1, right);
        swap(s[i], s[left]);
    }
}
int main()
{
    system("CLS");

    string s = "abc";
    permute(s, 0, s.length() - 1);
    getch();
    return 0;
}