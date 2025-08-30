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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            length++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = 0;
        if(length == n)
        {
            ListNode* newhead = head->next;
            delete head;
            return newhead; 
        }
        for(int i=0;i<length - n ; i++)
        {   
            prev = temp;
            temp = temp->next;
        }
        prev->next = prev->next->next;
        delete temp;
        return head;
    }
};
