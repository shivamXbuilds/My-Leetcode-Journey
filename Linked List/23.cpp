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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        vector<int>ans;

        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp = lists[i];
            while(temp)
            {
                ans.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(ans.empty()) return nullptr;
        sort(ans.begin(),ans.end());

        ListNode* result = new ListNode(ans[0],nullptr);
        ListNode* temp = result;
        for(int i=1;i<ans.size();i++)
        {
            temp->next = new ListNode(ans[i],nullptr);
            temp = temp->next;
        }

        return result;
    }
};
