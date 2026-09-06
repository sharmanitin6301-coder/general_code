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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int countA = 0;
        int countB = 0;

        ListNode* temp = headA;

        while(temp != nullptr) {
            countA++;
            temp = temp->next;
        }

        temp = headB;

        while(temp != nullptr) {
            countB++;
            temp = temp->next;
        }

        ListNode* a = headA;
        ListNode* b = headB;


        if(countA > countB) {
            for(int i = 0; i < countA - countB; i++) {
                a = a->next;
            }
        }
        else {
            for(int i = 0; i < countB - countA; i++) {
                b = b->next;
            }
        }


        while(a != b) {
            a = a->next;
            b = b->next;
        }

        return a;
    }
};
