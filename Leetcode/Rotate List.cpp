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
	ListNode* rotateRight(ListNode* head, int k) {
		if (!head)
			return head;
		int length = 1;
		ListNode *newHead, *tail;
		newHead = tail = head;
		//得到结点数
		while (tail->next)
		{
			tail = tail->next;
			length++;
		}
		//构造一个换
		tail->next = head;

		if (k %= length)
		{
			for (int i = 0; i < length - k; ++i)
				tail = tail->next;
		}
		newHead = tail->next;
		tail->next = NULL;
		return newHead;
	}
};