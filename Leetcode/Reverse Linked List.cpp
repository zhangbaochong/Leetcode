
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		/*ListNode *newNode = new ListNode(0);
		ListNode *tmp;
		newNode->next = head;
		ListNode *cur = head;
		while(cur && cur->next)
		{
		tmp = newNode->next;
		newNode->next = cur->next;
		cur->next = cur->next->next;
		newNode->next->next = tmp;
		}
		return newNode->next;*/
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
};