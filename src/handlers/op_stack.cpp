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