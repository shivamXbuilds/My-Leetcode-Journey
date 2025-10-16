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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        int length = 1;
        ListNode* temp = head;
        while(temp->next)
        {
            temp = temp->next;
            length++;
        }
        temp->next=head; //now we have circular LL

        k = k%length;
        int steps = length-k-1;
        ListNode* temp2 = head;
        for(int i = 0;i<steps;i++)
        {
            temp2 = temp2->next;
        }
        ListNode* newhead = temp2->next;
        temp2->next = nullptr;

        return newhead;
    }
};
