//Leetcode155 Easy
//设计一个栈，支持push/pop/top/getmin,要求这些操作的算法复杂度是常数级

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
    std::stack<int>_data;//_data数据队列存储元素的顺序
    std::stack<int>_min;
};