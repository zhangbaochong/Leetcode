#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		ListNode *p(head), *q(head);
		while (p != nullptr && p->next != nullptr)
		{
			p = p->next;
			q = q->next->next;
		}

		ListNode *pre = nullptr;
		while (p!=nullptr)
		{
			ListNode *next = p->next;
			p->next = pre;
			pre = p;
			p = next;
		}
		q = head;
		while (pre)
		{
			if (pre->val != q->val)
				return false;
			pre = pre->next;
			q = q->next;
		}
		return true;
	}
};
