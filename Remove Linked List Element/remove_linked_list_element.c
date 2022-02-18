/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *newHead = malloc(sizeof(struct ListNode));
    newHead->next = head;

    struct ListNode *lst = head;
    struct ListNode *prev = newHead;

    while (lst != NULL)
    {
        if (lst->val == val)
        {
            prev->next = lst->next;
            lst = lst->next;
        }
        else
        {
            prev = lst;
            lst = lst->next;
        }
    }
    return (newHead->next);
}
