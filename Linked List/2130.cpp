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
    int pairSum(ListNode* head) {
        int sum = INT_MIN;
        vector<int>extra;
        ListNode* temp = head;

        while(temp)
        {
            extra.push_back(temp->val);
            temp = temp->next;
        }

        for(int i = 0;i<extra.size();i++)
        {
            sum = max(sum, extra[i] + extra[extra.size() - 1 - i]);
        }

        return sum;
    }
};
