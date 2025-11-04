#pragma once
#include <vector>
#include <cstdint>
#include "stack.hpp"

class EVM {
    Stack stack;
    size_t pc = 0;      //program counter
    bool running = true;

    public:
    void execute(const std::vector<uint8_t>& bytecode);
};