class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode *cur = head;
		ListNode *pnext = head->next;
		while (cur != NULL && pnext != NULL)
		{
			if (cur->val == pnext->val)
			{
				cur->next = pnext->next;
				pnext = cur->next;
			}
			else
			{
				cur = pnext;
				pnext = pnext->next;
			}
		}
		return head;
	}
};