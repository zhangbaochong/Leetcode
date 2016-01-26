#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* partition(ListNode *&head, int x) {
	ListNode *beforeStart = NULL;
	ListNode *beforeEnd = NULL;
	ListNode *afterStart = NULL;
	ListNode *afterEnd = NULL;
	if (head == NULL)
		return NULL;
	ListNode *cur = head->next;
	while (cur)
	{
		ListNode *nextNode = cur->next;
		cur->next = NULL;
		//将结点插入before链表
		if (cur->val < x)
		{
			if (beforeStart == NULL)
			{
				beforeStart = cur;
				beforeEnd = beforeStart;
			}
			else
			{
				beforeEnd->next = cur;
				beforeEnd = cur;
			}
		}
		else//将结点插入after链表
		{
			if (afterStart == NULL)
			{
				afterStart = cur;
				afterEnd = afterStart;
			}
			else
			{
				afterEnd->next = cur;
				afterEnd = cur;
			}
		}
		cur = nextNode;
	}

	if (beforeStart == NULL)
	{
		return afterStart;
	}

	//将两个链表连起来
	beforeEnd->next = afterStart;
	return beforeStart;
}

void Create(ListNode *head)
 {
    int n;
	ListNode *p(head), *q;
    cout << "请输入元素个数及相应数据:";
    cin >> n;
	while (n--)
	{
		int value;
		cin >> value;
		q = new ListNode(value);
		q->next = nullptr;
		p->next = q;
		p = q;
	}
 }

void Print(ListNode *head)
 {
	ListNode *p = head->next;
    while (p)
    {
        cout << p->val << ' ';
        p = p->next;
    }
 }

int main()
{
	ListNode *head = new ListNode(0);
	Create(head);
	Print(head); 
	cout << "分割后：" << endl;
	ListNode *p = partition(head, 4);
	while (p)
	{
		cout << p->val << ' ';
		p = p->next;
	}
}