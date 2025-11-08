#pragma once 
#include "types.hpp"
#include <vector>
#include <stdexcept>
#include <cstdint>


class Stack {
    std::vector <evm_types::uint256_t> stack;
    static constexpr size_t MAX_STACK_SIZE = 1024;

    public:
    void push(evm_types::uint256_t val);
    evm_types::uint256_t top()  const;
    evm_types::uint256_t pop();
    evm_types::uint256_t at(size_t index);
    size_t size() const;

};