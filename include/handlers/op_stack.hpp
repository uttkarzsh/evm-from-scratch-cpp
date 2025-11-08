#pragma once
#include "handlers/op_stack.hpp"
#include "stack.hpp"
#include <vector>

namespace op_stack {
    void handlePush(uint8_t opcode, Stack& stack, const std::vector<uint8_t>& bytecode, size_t& pc);
    void handleDup(uint8_t opcode, Stack& stack, size_t& pc);
}