// 描述
// 输入一个单向链表，输出该链表中倒数第k个结点，链表的倒数第1个结点为链表的尾指针。

// 链表结点定义如下：
// struct ListNode
// {
//     int m_nKey;
//     ListNode* m_pNext;
// };
// 正常返回倒数第k个结点指针，异常返回空指针.
// 要求：
// (1)正序构建链表;
// (2)构建后要忘记链表长度。
// 数据范围：链表长度满足 1≤n≤1000  ，  k≤n  ，链表中数据满足 0≤val≤10000

// 本题有多组样例输入。

// 输入描述：
// 输入说明
// 1 输入链表结点个数
// 2 输入链表的值
// 3 输入k的值

// 输出描述：
// 输出一个整数

// 示例1
// 输入：
// 8
// 1 2 3 4 5 6 7 8
// 4
// 复制
// 输出：
// 5
#include <iostream>
using namespace std;

struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
};
int main()
{
	int n;
	cin >> n;
	ListNode* head = new ListNode();
	ListNode* p = head;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		ListNode* b = new ListNode();
		b->m_nKey = a;
		b->m_pNext = NULL;
		p->m_pNext = b;
		p = b;
	}
	int c;
	cin >> c;
	ListNode* abc = head;
	for (int i = 0; i < n - c; i++)
	{
		abc = abc->m_pNext;
	}
	cout << abc->m_nKey;
	return 0;
}