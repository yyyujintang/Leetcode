//Leetcode232 E
//使用栈实现队列
#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        std::stack<int>temp_stack;
     
        while (!_data.empty()) {
            temp_stack.push(_data.top());
            _data.pop();
        }
        temp_stack.push(x);
        while (!temp_stack.empty()) {
            _data.push(temp_stack.top());
            temp_stack.pop();

        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = _data.top();
        _data.pop();
        return x;

    }

    /** Get the top element. */
    int peek() {
        return _data.top();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return _data.empty();

    }
private:
    std::stack<int>_data;//_data数据队列存储元素的顺序
};

