/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode *lst;
    int lstSize = 0;

    lst = head;

    while (lst != NULL)
    {
        lst = lst->next;
        lstSize++;
    }
    lstSize = lstSize / 2;
    for (int i = 0; i < lstSize; i++)
        head = head->next;
    return (head);
}
