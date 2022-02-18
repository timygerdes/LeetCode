/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head)
{
    if (head == NULL)
        return (false);
    struct ListNode *lst1 = head;
    struct ListNode *lst2 = head->next;

    while (lst1 != lst2)
    {
        if (lst2 == NULL || lst2->next == NULL)
            return (false);
        lst1 = lst1->next;
        lst2 = lst2->next->next;
    }
    return (true);
}
