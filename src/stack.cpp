#include "stack.hpp"

void Stack::push(uint64_t val){
    if(size() == MAX_STACK_SIZE) throw std::runtime_error("Stack Overflow.");
    stack.push_back(val);
}

uint64_t Stack::pop(){
    if(stack.empty()){
            throw std::runtime_error("stack is empty");
        }
        uint64_t val = stack.back();
        stack.pop_back();
        return val;
}

size_t Stack::size() const {
    return stack.size();
}

uint64_t Stack::top() const {
    if (stack.empty()) throw std::runtime_error("stack empty");
    return stack.back();
}