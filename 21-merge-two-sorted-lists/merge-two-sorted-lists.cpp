class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        vector<int> arr1;
        vector<int> arr2;


        while (list1 != NULL) {
            arr1.push_back(list1->val);
            list1 = list1->next;
        }


        while (list2 != NULL) {
            arr2.push_back(list2->val);
            list2 = list2->next;
        }


        vector<int> ans;
        int i = 0, j = 0;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] <= arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            }
            else {
                ans.push_back(arr2[j]);
                j++;
            }
        }


        while (i < arr1.size()) {
            ans.push_back(arr1[i]);
            i++;
        }


        while (j < arr2.size()) {
            ans.push_back(arr2[j]);
            j++;
        }


        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for (int x : ans) {
            temp->next = new ListNode(x);
            temp = temp->next;
        }

        return dummy->next;
    }
};