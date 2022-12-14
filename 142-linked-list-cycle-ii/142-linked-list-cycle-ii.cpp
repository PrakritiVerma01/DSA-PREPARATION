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
     bool detectIfPresent(ListNode *head ,ListNode* &slow , ListNode* &fast){

         
            while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
                
                if(slow == fast){
                    return true;
                }
            }
         
         return false;
         
         
     }
    
    
    
    ListNode *detectCycle(ListNode *head) {
      
        if(head == NULL || head->next==head){
           return head;
       }
       
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        bool ans = detectIfPresent(head , slow , fast);
        
        if(ans){  // it means cycle present
            
            slow = head;
            
            while(fast -> next != slow){
                slow = slow->next;
                fast=fast->next;
            }
            
            return slow;
        }
        
        return NULL;
    }
   
};