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
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		ListNode *prevHead = new ListNode(0);
		prevHead->next = head;
		ListNode *p = prevHead;
		for (int i = 0; i < m - 1; ++i)
			p = p->next;
		ListNode *cur = p->next;
		for (int i = 0; i < n - m; ++i)
		{
			ListNode *tmp = cur->next;
			cur->next = tmp->next;
			tmp->next = p->next;
			p->next = tmp;
		}
		return prevHead->next;
	}
};