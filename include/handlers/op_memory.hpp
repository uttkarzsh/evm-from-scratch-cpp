#pragma once 
#include "memory.hpp"
#include "stack.hpp"
#include "types.hpp"

namespace op_memory{
    void writeMemory(Memory& memory, Stack& stack);
    uint8_t readMemory(Memory& memory, Stack& stack);
}