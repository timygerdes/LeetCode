/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *lst = head;
    struct ListNode *tmplst;

    while (lst != NULL)
    {
        if (lst->next == NULL)
            break ;
        if (lst->val != lst->next->val)
            lst = lst->next;
        if (lst->next != NULL && lst->val == lst->next->val)
        {
            tmplst = lst->next;
            lst->next = tmplst->next;
            free(tmplst);
        }
    }
    return (head);
}
