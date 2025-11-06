#include "handlers/op_stack.hpp"
#include "opcodes.hpp"
#include <stdexcept>

void op_stack::handler(uint8_t opcode, Stack& stack, const std::vector<uint8_t>& bytecode, size_t& pc){
    switch(opcode){
        case Opcode::PUSH1: {    //0x60
            if (pc >= bytecode.size()) throw std::runtime_error("Invalid PUSH1");
            uint8_t val = bytecode[pc++];
            stack.push(val);
            break;
        }
    }
}