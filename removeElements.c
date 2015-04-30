struct ListNode* removeElements(struct ListNode* head, int val) {
    return head?(head->next = removeElements(head->next, val), (head->val == val)?head->next:head):NULL;
}
