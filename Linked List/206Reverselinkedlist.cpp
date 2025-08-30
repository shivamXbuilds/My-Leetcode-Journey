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
    ListNode* reverseList(ListNode* head) {
        vector<int> rev;
        ListNode* temp = head;
        int length = 0;
        while(temp!=NULL)
        {
            length ++;
            temp=temp->next;
        }
        temp = head;
        for(int i=0;i<length;i++)
        {
            rev.push_back(temp->val);
            temp = temp->next;
        }
        reverse(rev.begin(),rev.end());
        
        temp = head;
        while(temp!=nullptr)
        {
            for(int i = 0; i<length;i++)
            {
                temp->val = rev[i];
                temp = temp->next;
            }
        }
        return head;
    }
};
