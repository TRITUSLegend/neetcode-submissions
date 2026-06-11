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

class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;

        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* second=slow->next; 

        slow->next=nullptr;

        ListNode* newHead=reverseLL(second);

        ListNode* temp1=head;
        ListNode* temp2=newHead;

        while(temp1 && temp2){
            ListNode* nxt1=temp1->next;
            ListNode* nxt2=temp2->next;

            temp1->next=temp2;
            temp2->next=nxt1;

            temp1=nxt1;
            temp2=nxt2;
        }
        
    }
};
