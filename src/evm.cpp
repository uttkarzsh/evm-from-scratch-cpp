#include "evm.hpp"
#include "opcodes.hpp"
#include "handlers/opcode_handlers.hpp"
#include <vector>
#include <stdexcept>

void EVM::execute(const std::vector<uint8_t>& bytecode){
    while(running && pc < bytecode.size()){
        uint8_t opcode = bytecode[pc++];

        switch(opcode){
            case Opcode::STOP:{  //0x00
                running = false;
                break;
            }

            //Arithmetic Operations
            case Opcode::ADD:   //0x01
            case Opcode::MUL:   //0x02
            case Opcode::SUB:   //0x03
            case Opcode::DIV:   //0x04
            case Opcode::MOD:   //0x06
                op_arithmetic::handler(opcode, stack);
                break;

            //Stack Manipulations
            case Opcode::PUSH1:   //0x60
                op_stack::handler(opcode, stack, bytecode, pc);
                break;

            default:
                throw std::runtime_error("Unsupported opcode: " + std::to_string(opcode));
        }
    }  
}

uint64_t EVM::stackTop(){
    return stack.top();
}