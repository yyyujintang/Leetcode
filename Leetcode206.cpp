#include<iostream>

//Leetcode206,难度Easy
//已知链表头结点指针head,将链表逆序（不可申请额外空间)
struct ListNode
{
	int val;//数据域
	ListNode *next;//指针域
	ListNode(int x): val(x),next(NULL) { }
};
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* new_head = NULL;//指向新链表头结点的指针
		while (head) {
			ListNode* next = head->next;//备份head->next
			head->next = new_head;//更新head_next;
			new_head = head;//移动new_head
			head = next;//遍历链表
		}
		return new_head;//返回新链表头节点
	}
};
