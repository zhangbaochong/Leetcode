/**
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

class Solution {
public:
	ListNode* partition(ListNode *&head, int x) {
		ListNode *list1 = new ListNode(0);
		ListNode *list2 = new ListNode(0);
		ListNode *before = list1, *after = list2;
		while (head)
		{
			if (head->val < x)
			{
				before->next = head;
				before = before->next;
			}
			else
			{
				after->next = head;
				after = after->next;
			}
			head = head->next;
		}
		after->next = NULL;
		before->next = list2->next;
		return list1->next;
	}
};