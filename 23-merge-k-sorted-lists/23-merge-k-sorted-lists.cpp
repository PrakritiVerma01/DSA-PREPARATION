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
    struct comp{
        bool operator() (ListNode* l , ListNode* r){
            return l->val > r->val;
        }
    };
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size() == 0)
            return NULL;
        priority_queue<ListNode* , vector<ListNode*> , comp> pq;
        
        for(int i = 0 ; i<lists.size(); i++){
            
            ListNode* head = lists[i];
            
            while(head != NULL){
                //cout<<head->val<<endl;
                pq.push(head);
                //cout<<pq.size()<<endl;
                head = head->next;
            }
        }
        
        if(pq.size() == 0) return NULL;
        
        ListNode* ans = pq.top();
        pq.pop();
        ListNode* save;
        save = ans;
        
        while(!pq.empty()){
            ListNode* pop = pq.top();
            ans->next = pop;
            ans = ans->next;
            pq.pop();
        }
        ans->next = NULL;
        
        return save;
    }
};
