//Leetcode225 Easy
//设计一个栈，支持基本的栈操作，这个栈的内部存储数据的结构为队列，队列的方法只能包括push,front,pop,size,empty等标准的队列方法
#include<iostream>
#include<queue>

using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        std::queue<int>temp_queue;
        temp_queue.push(x);
        while (!_data.empty()) {
            temp_queue.push(_data.front());
            _data.pop();
        }
        while (!temp_queue.empty()) {
            _data.push(temp_queue.front());
            temp_queue.pop();

        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = _data.front();
        _data.pop();
        return x;

    }

    /** Get the top element. */
    int top() {
        return _data.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return _data.empty();

    }
private:
    std::queue<int>_data;//_data数据队列存储元素的顺序
};
