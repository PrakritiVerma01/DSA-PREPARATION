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
        ListNode*ptr= head;
        
        int size = 0;
        while(ptr){
            size++;
            ptr=ptr->next;
        }
        
        if(size == n)
            return head->next;
        
        ptr = head;
        ListNode* ptr2 = head;
        for(int x = 0; x < size-n; x++){
            ptr = ptr->next;
            
            if(x != 0)
                ptr2=ptr2->next;
        }
        
        ptr =ptr->next;
        ptr2->next = ptr;
        
        return head;
    }
        
    };