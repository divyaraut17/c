/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
     if (head == NULL) {
        return NULL;  // If the list is empty, return NULL
    }
    
    struct ListNode* current = head;  // Start from the head
    
    while (current != NULL && current->next != NULL) {

        if (current->val == current->next->val) {
            
            current->next = current->next->next;
        } else {
            
            current = current->next;
        }
    }
    
    return head;
}
