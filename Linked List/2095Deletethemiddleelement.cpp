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
    ListNode* deleteMiddle(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            length++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = 0;
        int count = 0;
        if(length == 1) return NULL;
        while(count != length/2)
        {
            count++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = prev->next->next;
        delete temp;
        return head;
    }
};
