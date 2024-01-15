// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

//https://leetcode.com/problems/add-two-numbers/description/

//  Definition for singly-linked list.
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {

private:
    void insertAtTail(ListNode* &head, ListNode* &tail, int val){
        ListNode* temp = new ListNode(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* l1, ListNode* l2){
        int carry = 0;

        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;

        while(l1 != NULL || l2 != NULL || carry != 0){

            int val1 = 0;
            if(l1 != NULL){
                val1 = l1 -> val;
            }

            int val2 = 0;
            if(l2 != NULL){
                val2 = l2 -> val;
            }

            int sum = carry + val1 + val2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;

            if(l1 != NULL){
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                l2 = l2 -> next;
            }
        }
        return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = add(l1,l2);
        return ans;
    }
};