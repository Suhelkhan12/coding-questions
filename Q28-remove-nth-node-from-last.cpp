/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.



Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
// #include <bits/stdc++.h>
#include <string.h>
using namespace std;

/**

    int count(ListNode* head){  // this is to count the nodes in the list
        ListNode * t = head;
        int ct = 0;
        while(t){
            ct++;
            t=t->next;
        }
        return ct;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode * t = head;
        int node_from_start = count(head) - n;  // is node connection bnana hai is se aage vali node hi remove hogi hmari

        ListNode * prev = nullptr;
        ListNode * curr = head;

        // checking if ther is one node or no nodes at all in the list
        // if(count(head)==0 || count(head)==1){
        //     return nullptr;
        // }

        if(head==nullptr) return nullptr;

        if(count(head) ==  n) return head -> next;

        while(node_from_start){
              prev = curr;
              curr = curr->next;

              node_from_start--;
        }

        prev->next = prev -> next -> next;
        return head;


    }
};
*/
int main()
{
    system("CLS");

    getch();
    return 0;
}