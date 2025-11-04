#pragma once 
#include <vector>
#include <stdexcept>
#include <cstdint>

class Stack {
    std::vector <uint64_t> stack;
    static constexpr size_t MAX_STACK_SIZE = 1024;

    public:
    void push(uint64_t val);
    uint64_t top()  const;
    uint64_t pop();
    size_t size() const;
};