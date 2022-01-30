/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode head;
    struct ListNode *lst = &head;

    if (list1 == NULL && list2 == NULL)
        return (NULL);
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            lst->next = list1;
            lst = lst->next;
            list1 = list1->next;
        }
        else
        {
            lst->next = list2;
            lst = lst->next;
            list2 = list2->next;
        }
    }
    if (list1)
        lst->next = list1;
    if (list2)
        lst->next = list2;
    return (head.next);
}
