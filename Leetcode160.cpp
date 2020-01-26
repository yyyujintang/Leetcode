#include<iostream>
#include<set>
using namespace std;
//Leetcode160 Easy
//已知链表A的头节点指针headA,链表B的头节点指针headB,两个链表相交，求两链表交点对应的节点
struct ListNode {
    int val;//数据域
    ListNode* next;//指针域
    ListNode(int x) : val(x), next(NULL) {}//构造函数
};
class Solution {
public:
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::set<ListNode*>node_set;//设置查找集合node_set
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