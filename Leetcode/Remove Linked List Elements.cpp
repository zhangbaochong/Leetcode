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
	ListNode* removeElements(ListNode* head, int val) {
		ListNode *preHead = new ListNode(0);
		preHead->next = head;
		ListNode *cur = head, *pre = preHead;
		while (cur)
		{
			if (cur->val == val)
				pre->next = cur->next;
			else
				pre = pre->next;
			cur = cur->next;
		}
		return preHead->next;
	}
};