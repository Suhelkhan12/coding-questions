/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.



Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
// #include<bits/stdc++.h>
#include <string.h>
using namespace std;

// ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
// {
//     ListNode *l3 = new ListNode(0); // this is a new separate node which is created thats why at the end head->next is returned.
//     int carry = 0;

//     ListNode *head = l3;
//     while (l1 && l2)
//     {
//         int value = l1->val + l2->val + carry;

//         carry = value / 10;
//         l3->next = new ListNode(value % 10); // heere we are creating a new node and then storing the remainder of the value

//         l3 = l3->next;
//         l1 = l1->next;
//         l2 = l2->next;
//     }

//     // when some digits are left in any of the list
//     while (l1)
//     {
//         int value = l1->val + carry;

//         carry = value / 10;
//         l3->next = new ListNode(value % 10); // heere we are creating a new node and then storing the remainder of the value

//         l3 = l3->next;
//         l1 = l1->next;
//     }

//     while (l2)
//     {
//         int value = l2->val + carry;

//         carry = value / 10;
//         l3->next = new ListNode(value % 10); // heere we are creating a new node and then storing the remainder of the value

//         l3 = l3->next;
//         l2 = l2->next;
//     }

//     // at last if there is any carry left
//     if (carry)
//     {
//         l3->next = new ListNode(carry);
//     }
//     return head->next;
// } /*

int main()
{
    system("CLS");

    getch();
    return 0;
}