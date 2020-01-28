//leetcode86 Medium
//��֪����ͷָ��head����ֵx,������С��x�Ľڵ���ڴ��ڻ����x�Ľڵ�ǰ���ұ�����Щ�ڵ��ԭ�������λ�á�
#include<iostream>
#include<set>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode less_head(0);
        ListNode more_head(0);
        ListNode *less_ptr=&less_head;
        ListNode *more_ptr = &more_head;
        while (head) {
            if (head->val < x) {
                less_ptr->next = head;
                less_ptr = head;
            }
            else {
                more_ptr->next = head;
                more_ptr = head;
            }
            head = head->next;
        }
        less_ptr->next = more_head.next;
        more_ptr->next = NULL;
        return less_head.next;
    }
};