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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp = head;
        if(head==0)
        return nullptr;
        int count = 0;
        while(temp!=0){
            temp = temp->next;
            count++;
        }
        int k = count/2;
        temp = head;
        for(int i =0;i<k;i++){
            temp = temp->next;
        }
        head = temp;
        return head;
    }
};