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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;

        while(head && head->next && head->next->val == head->val)
        {
            int Duplicate = head->val;
            while(head && head->val == Duplicate)
            {
                head = head->next;
            }
        }

        ListNode* temp = head;

        while(temp && temp->next)
        {
            if(temp->next->next && temp->next->next->val == temp->next->val)
            {
                int Duplicate = temp->next->val;
                while(temp->next && temp->next->val == Duplicate)
                {
                    temp->next = temp->next->next;
                }
            }
            else
            {
                temp =temp->next;
            }
        }
        return head;
    }
};
