#include<iostream>

//Leetcode206,�Ѷ�Easy
//��֪����ͷ���ָ��head,���������򣨲����������ռ�)
struct ListNode
{
	int val;//������
	ListNode *next;//ָ����
	ListNode(int x): val(x),next(NULL) { }
};
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* new_head = NULL;//ָ��������ͷ����ָ��
		while (head) {
			ListNode* next = head->next;//����head->next
			head->next = new_head;//����head_next;
			new_head = head;//�ƶ�new_head
			head = next;//��������
		}
		return new_head;//����������ͷ�ڵ�
	}
};
