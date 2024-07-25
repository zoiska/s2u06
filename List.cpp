#include <list>
#include <stack>

template <class T> std::list<T> kehrt(std::list<T> list) {
    std::stack<T> stack;
    for(auto i : list) {
        stack.push(i);
    }
    std::list<T> list2;
    while (!stack.empty()) {
        list2.push_back(stack.top());
        stack.pop();
    }
    return list2;
}