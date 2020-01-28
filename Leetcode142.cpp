//Leetcode142 Medium
//��֪�����п��ܴ��ڻ������л��򷵻ػ���ʼ�ڵ㣬���򷵻�NULL
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
    ListNode* detectCycle(ListNode* head) {
        std:set<ListNode*>node_set;
        while (head) {
            if (node_set.find(head) != node_set.end()) {
                return head;
            }
            node_set.insert(head);
            head = head->next;

    }
        return NULL;

    }
};