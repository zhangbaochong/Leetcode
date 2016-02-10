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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		//方法一
		/*ListNode *p = headA; 
		ListNode *q = headB;
		if(!p || !q) return NULL;
		while(p && q && p != q)
		{
		p = p->next;
		q = q->next;
		if(p == q)
		return p;
		if(!p)
		p = headB;
		if(!q)
		q = headA;
		}
		return p;*/

		//方法二
		if (headA == NULL || headB == NULL) return NULL;
		ListNode *p = headA;
		ListNode *q = headB;
		int countA = 1, countB = 1;
		while (p->next)
		{
			p = p->next;
			++countA;
		}
		while (q->next)
		{
			q = q->next;
			++countB;
		}
		if (p != q) return NULL;
		if (countA > countB)
		{
			for (int i = 0; i < countA - countB; ++i)
				headA = headA->next;
		}
		else if (countB > countA)
		{
			for (int i = 0; i < countB - countA; ++i)
				headB = headB->next;
		}
		while (headA != headB)
		{
			headA = headA->next;
			headB = headB->next;
		}
		return headA;

	}
};