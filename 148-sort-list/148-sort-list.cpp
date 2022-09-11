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
        ListNode* mergesort(ListNode*head1,ListNode* head2){
    if(!head1) return head2;
    if(!head2) return head1;
    ListNode* result;
    if(head1->val<head2->val){
        result=head1;
        result->next=mergesort(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergesort(head1,head2->next);
    }
    return result;
}
ListNode* sortList(ListNode* head) {
    
    ListNode* slow =head, * fast=head,*temp;
    
    if(!head || !head->next) return head;
    
    while(fast!=NULL and fast->next!=NULL){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    
    temp->next=NULL;
    
    ListNode* l1=sortList(head);
    ListNode* l2=sortList(slow);
    
   return mergesort(l1,l2);

}
    
};