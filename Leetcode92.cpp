#include<iostream>
//Leetcode92 �Ѷ�Medium
//��֪����ͷ���ָ��Head,�������λ��m��n���򣨲��������ռ�)

struct ListNode
{
	int val;//������
	ListNode* next;//ָ����
	ListNode(int x) : val(x), next(NULL) { }
};

class Solution {
public:
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		int change_len = n - m + 1;//������Ҫ���õĽڵ����
		ListNode *pre_head = NULL;//��ʼ����ʼ���õĽڵ��ǰ׺
		ListNode *result = head;
		while (head && --m) {
			pre_head = head;
			head = head->next;
		}
	//��modify_list_tailָ��ǰ��head,�����ú������β
		ListNode *modify_list_tail = head;
		ListNode *new_head = NULL;
		while (head && change_len) {//����change_len���ڵ�
			ListNode *next =head->next;
			head->next = new_head;
			new_head=head;
			head = next;
			change_len--;//ÿ���һ���ڵ����ã�change_len--
		}

		modify_list_tail->next = head;//�������ú������β�����öεĺ�һ���ڵ�
		if (pre_head)//���pre_head���գ�˵�����Ǵӵ�һ���ڵ㿪ʼ���õ� m>1
		{
			pre_head->next = new_head;
		}
		else {
			result = new_head;
		}
		return result;
	} 
};
