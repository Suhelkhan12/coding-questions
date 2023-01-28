/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.



Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
// #include<bits/stdc++.h>
#include <string.h>
using namespace std;

/*
  ListNode* middleNode(ListNode* head) {
        ListNode * temp = head;
        int  count = 0 , mid = 0;

        while(temp)
        {
         count++;
         temp = temp ->next;
        }

        if(count == 0)
           return head;

        mid = (count/2) + 1;

        while(mid>1){
            head  = head->next;
            mid--;
        }
        return head;

    }
*/
int main()
{
    system("CLS");

    getch();
    return 0;
}