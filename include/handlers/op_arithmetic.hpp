#pragma once
#include "handlers/op_arithmetic.hpp"
#include "stack.hpp"

namespace op_arithmetic {
    void handler(uint8_t opcode, Stack& stack);
}