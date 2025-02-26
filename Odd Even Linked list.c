/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head)
{
    struct ListNode* currentodd=head;
        if(head==NULL)
        return head;
        struct ListNode* currenteven=head->next;
        struct ListNode* evenhead=head->next;
        while(currenteven!=NULL&&currenteven->next!=NULL)
        {
            currentodd->next=currentodd->next->next;
            currenteven->next=currenteven->next->next;
            currentodd=currentodd->next;
            currenteven=currenteven->next;
        }
        currentodd->next=evenhead;
        return head;
}            

            
