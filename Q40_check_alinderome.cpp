#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

bool isPalindrome(string s, int left, int right)
{

    if (left <= right)
        return true;
    return (s[left] == s[right]) && isPalindrome(s, left + 1, right - 1);
}
int main()
{
    system("CLS");
    string s = "abba";

    cout << isPalindrome(s, 0, s.length() - 1);
    getch();
    return 0;
}