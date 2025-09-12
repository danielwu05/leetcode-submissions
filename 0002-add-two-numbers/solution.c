/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = (struct ListNode*) malloc (sizeof(struct ListNode));
    struct ListNode* current = dummy;
    int carry=0,val1,val2;

    while (l1 != NULL || l2 != NULL || carry) {

        int val1 = (l1 != NULL) ? l1->val : 0;
        int val2 = (l2 != NULL) ? l2->val : 0;

        struct ListNode* newNode = (struct ListNode*) malloc (sizeof(struct ListNode));

        int sum = val1 + val2 + carry;
        carry = sum /10;
        newNode -> val = sum % 10;
        newNode -> next = NULL;

        current -> next = newNode;

        current = current->next;

        if(l1 != NULL)l1 = l1 -> next;
        if(l2 != NULL)l2 = l2 -> next;
    }

    struct ListNode* result = (struct ListNode*) malloc (sizeof(struct ListNode));

    result = dummy->next;

    free(dummy);

    return result;
}
