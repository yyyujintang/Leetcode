#include<iostream>
#include<set>
using namespace std;
//Leetcode160 Easy
//��֪����A��ͷ�ڵ�ָ��headA,����B��ͷ�ڵ�ָ��headB,���������ཻ�������������Ӧ�Ľڵ�
struct ListNode {
    int val;//������
    ListNode* next;//ָ����
    ListNode(int x) : val(x), next(NULL) {}//���캯��
};
class Solution {
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::set<ListNode*>node_set;//���ò��Ҽ���node_set
        while (headA) {
            node_set.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (node_set.find(headB) != node_set.end()) {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};