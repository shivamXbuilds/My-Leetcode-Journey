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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int>shit;
        while(temp!=nullptr)
        {
            shit.push_back(temp->val);
            temp = temp->next;
        }

        std::reverse(shit.begin() + left - 1 , shit.begin() + right);

        ListNode* newnode = new ListNode(shit[0], nullptr);
        ListNode* traverse = newnode;
        for(int i=1;i<shit.size();i++)
        {
            ListNode* addnode = new ListNode(shit[i],nullptr);

            traverse->next = addnode;
            traverse = traverse->next;
        }

        return newnode;
    }
};
