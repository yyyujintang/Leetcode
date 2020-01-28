//Leetcode21 Easy
//已知两个已排序的链表头节点指针l1与l2,将这两个链表合并，合并后认为有序的，返回合并后的头节点
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode temp_head(0);
        ListNode *pre = &temp_head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                pre->next = l1;
                l1 = l1->next;
            }
            else {
                pre->next = l2;
                l2 = l2->next;
            }
            pre = pre->next;
        }
        if (l1) {
            pre->next = l1;
        }
        if (l2) {
            pre->next = l1;
        }
        return temp_head.next;
    }
};