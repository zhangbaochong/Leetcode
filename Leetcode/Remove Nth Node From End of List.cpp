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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *preHead = new ListNode(0);
		ListNode *fast = preHead, *slow = preHead;
		slow->next = head;
		for (int i = 0; i <= n; ++i)
			fast = fast->next;
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;
		return preHead->next;
	}
};