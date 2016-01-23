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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) return head;
		ListNode *root = new ListNode(0);
		root->next = head;
		ListNode *pre = root;
		while (head && head->next)
		{
			ListNode* tmp = head->next->next;
			pre->next = head->next;
			pre->next->next = head;
			head->next = tmp;
			pre = head;
			head = head->next;
		}
		return root->next;
	}
};