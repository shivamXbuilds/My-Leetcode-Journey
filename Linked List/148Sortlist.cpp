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
    ListNode* sortList(ListNode* head) {
        vector<int> answer;
        ListNode* temp = head;
        int length = 0;
        while(temp!=nullptr)
        {
            length++;
            temp = temp->next;
        }
        temp = head;

        for(int i=0;i<length;i++)
        {
            answer.push_back(temp->val);
            temp = temp->next;
        }
        sort(answer.begin(),answer.end());
        temp = head;

        while(temp!=nullptr)
        {
            for(int i = 0;i<length;i++)
            {
                temp->val = answer[i];
                temp = temp->next;
            }
        }
        return head;
    }
};
