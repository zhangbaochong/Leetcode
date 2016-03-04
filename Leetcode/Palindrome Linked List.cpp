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

	ListNode* reverseList(ListNode* head) {
		ListNode *cur = head;
		ListNode *tmp, *prev = NULL;
		while (cur)
		{
			tmp = cur->next;
			cur->next = prev;
			prev = cur;
			cur = tmp;
		}
		return prev;
	}

	bool isPalindrome(ListNode* head) {
		if (!head || !head->next)
			return true;
		//快慢指针法 寻找中点
		ListNode *slow, *fast;
		slow = fast = head;
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		if (fast)//链表元素奇数个
		{
			slow->next = reverseList(slow->next);
			slow = slow->next;
		}
		else//链表偶数个
		{
			slow = reverseList(slow);
		}
		while (slow)
		{
			if (head->val != slow->val)
			{
				return false;
			}
			slow = slow->next;
			head = head->next;
		}
		return true;
	}
};