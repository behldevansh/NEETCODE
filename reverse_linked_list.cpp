//Given the head of a singly linked list, reverse the list, and return the reversed list.


//https://leetcode.com/problems/reverse-linked-list/description/

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head ==NULL || head->next==NULL){ //case when it is empty or single element only respectively
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
};