#include<iostream>
//Leetcode92 难度Medium
//已知链表头结点指针Head,将链表从位置m到n逆序（不申请额外空间)

struct ListNode
{
	int val;//数据域
	ListNode* next;//指针域
	ListNode(int x) : val(x), next(NULL) { }
};

class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		int change_len = n - m + 1;//计算需要逆置的节点个数
		ListNode *pre_head = NULL;//初始化开始逆置的节点的前缀
		ListNode *result = head;
		while (head && --m) {
			pre_head = head;
			head = head->next;
		}
	//将modify_list_tail指向当前的head,即逆置后的链表尾
		ListNode *modify_list_tail = head;
		ListNode *new_head = NULL;
		while (head && change_len) {//逆置change_len个节点
			ListNode *next =head->next;
			head->next = new_head;
			new_head=head;
			head = next;
			change_len--;//每完成一个节点逆置，change_len--
		}

		modify_list_tail->next = head;//连接逆置后的链表尾与逆置段的后一个节点
		if (pre_head)//如果pre_head不空，说明不是从第一个节点开始逆置的 m>1
		{
			pre_head->next = new_head;
		}
		else {
			result = new_head;
		}
		return result;
	} 
};
