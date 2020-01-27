//Leetcode155 Easy
//���һ��ջ��֧��push/pop/top/getmin,Ҫ����Щ�������㷨���Ӷ��ǳ�����

#include<iostream>
#include<stack>

using namespace std;

class MinStack {
public:
    /** Initialize your data structure here. */
    MinStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        _data.push(x);
        if (_min.empty()) {
            _min.push(x);
        }
        else {
            if (x > _min.top()) {
                x = _min.top();
            }
            _min.push(x);
        }
 
        
    }

    /** Removes the element on top of the stack and returns that element. */
    void pop() {
    
        _data.pop();
        _min.pop();
     
    }

    /** Get the top element. */
    int top() {
        return _data.top();
    }

    /** Returns whether the stack is empty. */
    int getMin() {
        return _min.top();

    }
private:
    std::stack<int>_data;//_data���ݶ��д洢Ԫ�ص�˳��
    std::stack<int>_min;
};