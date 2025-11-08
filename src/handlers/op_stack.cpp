#include "handlers/op_stack.hpp"
#include "opcodes.hpp"
#include "types.hpp"
#include <stdexcept>
using namespace evm_types;

void op_stack::handlePush(uint8_t opcode, Stack& stack, const std::vector<uint8_t>& bytecode, size_t& pc){
    size_t bytesToPush = opcode - 0x5f;
    uint256_t val = 0;

    if(pc + bytesToPush > bytecode.size()){
        throw std::runtime_error("Invalid PUSH: Not enough bytes left in the bytecode");
    }

    if(opcode >= 0x5f && opcode <= 0x7f){    
        for(int i = 0; i < bytesToPush; i++){
            val = (val << 8) | bytecode[pc + i];
        }
    }

    pc += bytesToPush;
    stack.push(val);
}

void op_stack::handleDup(uint8_t opcode, Stack& stack){
    size_t dupIndex = opcode - 0x7f;
    size_t size = stack.size();

    if(size < dupIndex) {
        throw std::runtime_error("Invalid DUP: Not enough values on the stack");
    }
    
    if(opcode >= 0x80 && opcode <= 0x8f){
        uint256_t val = stack.at(size - dupIndex);
        stack.push(val);
    }
}

void op_stack::handleSwap(uint8_t opcode, Stack& stack){
    size_t swapIndex = opcode - 0x8f;
    size_t size = stack.size();

    if(size < swapIndex) {
        throw std::runtime_error("Invalid SWAP: Not enough values on the stack");
    }

    if(opcode >= 0x90 && opcode <= 0x9f){
        stack.swap(size - 1, size - 1 - swapIndex);
    }
}