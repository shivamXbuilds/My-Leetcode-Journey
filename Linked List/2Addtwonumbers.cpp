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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummynode = new ListNode(0,nullptr);
        // how is normal summation take place -> digit%10 is passed and digit/10 is carry
        int count = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* current = dummynode;
        int carry = 0;
        while(temp1 != 0 || temp2 !=0)
        {
            int sum = carry;
            if(temp1) sum = sum+ temp1->val%10;
            if(temp2) sum = sum + temp2->val%10;
            ListNode* newnode = new ListNode(sum%10,nullptr);
            current->next = newnode;
            current = current->next;
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
            carry = sum / 10;
        }
        if(carry)
        {
            ListNode* newnode = new ListNode(carry);
            current->next = newnode;
        }
        return dummynode->next;
    }
};
