/**
 *You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.



Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

// ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
// {
//     ListNode *l3 = new ListNode(0);
//     ListNode *head = l3;

//     while (list1 && list2)
//     {
//         if (list1->val <= list2->val)
//         {
//             l3->next = new ListNode(list1->val);
//             l3 = l3->next;
//             list1 = list1->next;
//         }
//         else
//         {
//             l3->next = new ListNode(list2->val);
//             l3 = l3->next;
//             list2 = list2->next;
//         }
//     }
//     while (list1)
//     {
//         l3->next = new ListNode(list1->val);
//         l3 = l3->next;
//         list1 = list1->next;
//     }
//     while (list2)
//     {
//         l3->next = new ListNode(list2->val);
//         l3 = l3->next;
//         list2 = list2->next;
//     }
//     return head->next;
// }
int main()
{
    system("CLS");

    getch();
    return 0;
}