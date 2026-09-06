/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==0)
        return nullptr;
        if(head->next==0)
        return nullptr;
        ListNode *temp1 = head;
        ListNode *temp2 = head;
        while(temp1!=0&&temp2!=0&&temp2->next!=0){
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if(temp1==temp2){
                 break;
            }
        }
        if(temp1!=temp2)
        return nullptr;
        temp1=head;
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};