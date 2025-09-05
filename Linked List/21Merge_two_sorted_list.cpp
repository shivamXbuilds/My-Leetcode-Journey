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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>one;
        ListNode* temp1 = list1;
        vector<int>two;
        ListNode* temp2 = list2;
        while(temp1!=nullptr)
        {
            one.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while(temp2!=nullptr)
        {
            two.push_back(temp2->val);
            temp2 = temp2->next;
        }
        for(int i=0;i<two.size();i++)
        {
            one.push_back(two[i]);
        }
        sort(one.begin(),one.end());
        if(one.empty()) return nullptr;
        ListNode* ans = new ListNode(one[0],nullptr);
        ListNode* temp = ans;
        for(int i=1;i<one.size();i++)
        {
            temp->next = new ListNode (one[i],nullptr);
            temp = temp->next;
        }
        return ans;
    }
};
