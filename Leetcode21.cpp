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
        ListNode *head,*p,*tp,**curr;
        
        if(l1 == NULL)  return l2;
        else if(l2 == NULL)    return l1; 
        
        if(l1->val <= l2->val)  {head = l1;p = l2;}
        else    {head = l2;p = l1;}
        
        curr = &head;
        while(p != NULL){
            while(*curr != NULL && (*curr)->val <= p->val)  curr = &((*curr)->next);
            //循环结束时，已经遍历完一个链表或者当前链表下一个元素更大，需要插入
            tp = *curr;
            *curr = p;
            p = tp;
        }
        
        return head;
    }
};
