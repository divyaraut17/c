/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *root = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *home = root;

    int carry = 0;

    while (l1 != NULL || l2 != NULL)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        { 
            sum += l2->val;
            l2 = l2->next; 
        }

        sum += carry;
        carry = sum > 9 ? 1 : 0;

        sum %= 10;
        root->val = sum;
        if (l1 != NULL || l2 != NULL)
        {
            root->next = (struct ListNode *) malloc(sizeof(struct ListNode));
            root = root->next; 
        }
    }

    if (carry == 1)
    {
        root->next = (struct ListNode *) malloc(sizeof(struct ListNode));
        root->next->val = carry;
        root = root->next;
    }

    root->next = NULL;
    return home;
}
