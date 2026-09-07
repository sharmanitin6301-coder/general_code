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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        if(head==0)
        return true;
        if(head->next==0)
        return true;
        ListNode*temp = head;
        //int count = 0;
        while(temp!=0){
            //count++;
            arr.push_back(temp->val);
            temp= temp->next;
        }
        int k = arr.size()-1;
        int q = 0;
        while(q<=k){
            if(arr[q]==arr[k]){
                q++;
                k--;
            }
            else if(arr[q]!=arr[k]){
                return false;
            }
        }
        return true;
    }
};