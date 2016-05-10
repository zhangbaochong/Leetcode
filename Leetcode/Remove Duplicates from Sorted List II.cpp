/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head)
			return head;
		if (head && !head->next)
			return head;
		ListNode *newHead = new ListNode(head->val - 1);
		newHead->next = head;
		ListNode *pre = newHead;
		ListNode *ptr = newHead;
		while (head)
		{
			if (pre->val != head->val && (!head->next || head->val != head->next->val))
			{
				ptr->next = head;
				ptr = ptr->next;
			}
			pre = head;
			head = head->next;
		}
		ptr->next = NULL;

		return newHead->next;
	}
};