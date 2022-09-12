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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        
        while(curr){
            int el=curr->val;
            int count=0;
            while(curr && curr->next && curr->next->val==el){
                curr=curr->next;
                count++;
            }
            if(count>0){
                prev->next=curr->next;
                curr=curr->next;
            }else{
                prev=curr;
                curr=curr->next;
            }
            
        }
        return dummy->next;
        
    }
};