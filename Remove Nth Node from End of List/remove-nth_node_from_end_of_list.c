/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode *tmplst = head;
    struct ListNode *lst = head;
    int counter = 0;

    while (tmplst != NULL)
    {
        counter++;
        tmplst = tmplst->next;
    }
    if (counter - n == 0)
        return (head->next);
    for (int i = 1; i < counter - n; i++)
        lst = lst->next;
    lst->next = lst->next->next;
    return (head);
}
