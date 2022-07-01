//leetcode: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
        ListNode* cur=head;
        int count=0;
        while(cur!=NULL){
            cur=cur->next;
            count++;
        }
        int pos=(count-n);
        if(pos==0){
            head=head->next;
            return head;
        }
        ListNode* prev=head;
        for(int i=0;i<pos-1;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};