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
        ListNode* temp = head;

        while(temp)
        {
            ListNode* num = new ListNode(temp->val);
            if(temp->next == nullptr) break;

            if(temp->next->val == num->val)
            {
                temp->next = temp->next->next;
            }

            else temp = temp->next;
        }

        return head;
    }
};
