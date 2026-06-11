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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }

        ListNode* temp=head;
        int cnt=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            cnt++;
        }

        temp=head;

        if(n==cnt){
            ListNode* newHead=head->next;
            delete head;
            return newHead; 
        }

        for(int i=1; i<cnt-n; i++){
            temp=temp->next;
        }

        ListNode* nodeDel=temp->next;

        temp->next=temp->next->next;
        delete nodeDel;
        return head;

    }
};
