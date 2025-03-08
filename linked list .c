/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* fptr=head;
    struct ListNode* sptr=head;
    while(fptr!=NULL && fptr->next!=NULL){
        sptr=sptr->next;
        fptr=fptr->next->next;
        if(sptr==fptr){
            return true;
        }
        
    }return false;
}
