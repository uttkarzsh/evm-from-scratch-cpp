#include "stack.hpp"
#include "types.hpp"
using namespace evm_types;

void Stack::push(uint256_t val){
    if(size() == MAX_STACK_SIZE){
        throw std::runtime_error("Stack overflow.");
    }
    stack.push_back(val);
}

uint256_t Stack::pop(){
    if(stack.empty()){
        throw std::runtime_error("Stack is empty.");
    }
    uint256_t val = stack.back();
    stack.pop_back();
    return val;
}

size_t Stack::size() const {
    return stack.size();
}

uint256_t Stack::top() const {
    if(stack.empty()){
        throw std::runtime_error("Stack is empty.");
    }
    return stack.back();
}

uint256_t Stack::at(size_t index){
    return stack.at(index);
}