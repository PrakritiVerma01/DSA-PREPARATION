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
    
        ListNode *create_new_node(int val)
    {
        ListNode *ptr = new ListNode ;
        ptr->val = val  ;
        ptr->next = NULL;
        return ptr;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode * result = new ListNode ;
        ListNode * ans = result ;
        
        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                ListNode *ptr = create_new_node(list1->val);
                result->next = ptr ;
                result = result->next ;
                list1 = list1->next ;
            }
            else
            {
                ListNode *ptr = create_new_node(list2->val);
                result->next = ptr ;
                result = result->next ;
                list2 = list2->next ;
            }
        }
        
        while(list1)
        {
                ListNode *ptr = create_new_node(list1->val);
                result->next = ptr ;
                result = result->next ;
                list1 = list1->next ;
        }
        
        while(list2)
        {
                ListNode *ptr = create_new_node(list2->val);
                result->next = ptr ;
                result = result->next ;
                list2 = list2->next ;
        }
        
        return ans->next ;
    }
    
};
        
   