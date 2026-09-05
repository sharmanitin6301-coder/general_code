class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> arr;
        if(head==NULL)
        return nullptr;

        ListNode* temp = head;

        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }


        int j = 0;

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[j]) {
                j++;
                arr[j] = arr[i];
            }
        }


        temp = head;

        for(int i = 0; i <= j; i++) {
            temp->val = arr[i];

            if(i == j) {
                temp->next = NULL;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};