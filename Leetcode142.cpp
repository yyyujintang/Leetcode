//Leetcode142 Medium
//已知链表中可能存在环，若有环则返回环起始节点，否则返回NULL
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