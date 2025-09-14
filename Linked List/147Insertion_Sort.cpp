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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = head;
        vector<int>list;
        while(temp!=nullptr)
        {
            list.push_back(temp->val);
            temp = temp->next;
        }

        for(int j=1;j<list.size();j++)
        {
            int i = j-1;
            int key = list[j];
            while(i>=0 && list[i] > key)
            {
                list[i+1] = list[i];
                i--; 
            }
            list[i+1] = key;
        }

        ListNode* newnode = new ListNode(list[0], nullptr);
        ListNode* temp2 = newnode;
        for(int i=1;i<list.size();i++)
        {
            ListNode* extend = new ListNode(list[i], nullptr);
            temp2->next = extend;
            temp2 = temp2->next;
        }

        return newnode;
    }
};
