/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution{
  public:
  ListNode* middleNode(ListNode* head){
    if(head == nullptr || head->next == nullptr) return head;

    //define pointer:
      ListNode* slow = head;
      ListNode* fast = head;
    if(fast != nullptr && fast->next != nullptr){
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }
};

/*
  Intuition

Well, this was my first time undertanding how pointers can move inside a linked list, I watched the solution video on the Learn course.. i undertood some of it..
Approach
I wrote my code with some help from other solutions posted and i wrote some notes on how the conditions work in order to stop the pointer and getting the middle node.. there might be some errors in my undertanding and my notes, but I am trying and wanted to provide my notes.
Complexity

    Time complexity: O(n)

    Space complexity: O(1)

Code

*/

