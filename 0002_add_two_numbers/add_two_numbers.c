/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stddef.h>
#include <stdlib.h>

struct ListNode* addRec(struct ListNode *l1, struct ListNode *l2, int carry)
{
    if (!l1 && !l2 && !carry)
    {
        return NULL;
    }
    struct ListNode *new_list = malloc(sizeof(struct ListNode));
    if (l1 && l2)
    {
        new_list->val = (l1->val + l2->val + carry) % 10;
        new_list->next = addRec(l1->next, l2->next, (l1->val + l2->val + carry) >= 10);
        return new_list;
    }
    if (l1)
    {
        new_list->val = (l1->val + carry) % 10;
        new_list->next = addRec(l1->next, NULL, (l1->val + carry) >= 10);
        return new_list;
    }
    if (l2)
    {
        new_list->val = (l2->val + carry) % 10;
        new_list->next = addRec(NULL, l2->next, (l2->val + carry) >= 10);
        return new_list;
    }
    new_list->val = 1;
    new_list->next = NULL;
    return new_list;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    return addRec(l1, l2, 0);
}
