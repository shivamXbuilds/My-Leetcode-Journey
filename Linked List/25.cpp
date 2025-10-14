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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int>list;
        while(temp)
        {
            list.push_back(temp->val);
            temp=temp->next;
        }  
        rev(list,k,0);

        ListNode* ans = new ListNode(list[0],nullptr);
        ListNode* temp2 = ans;
        for(int i=1;i<list.size();i++)
        {   
            temp2->next = new ListNode(list[i],nullptr);
            temp2 = temp2->next;
        }

        return ans;
    }
    void rev(vector<int>& list, int k, int start)
    {
        if(start+k > list.size()) return;
        std::reverse(list.begin()+start,list.begin() + start + k);

        rev(list,k,start+k);
    }
};
