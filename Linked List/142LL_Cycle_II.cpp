#METHODONE

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, int> mp;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            if(mp.count(temp)!=0 ) return temp;
            else 
            {
                mp[temp] = 1;
                temp = temp->next;
            }
        }
        return nullptr;
    }
};

# METHODTWO

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> container;
        ListNode* temp = head;
        while(temp!=nullptr)
        {
            if(container.count(temp)) return temp;
            else
            {
                container.insert(temp);
                temp = temp->next;
            }
        }
        return nullptr;
    }
};
