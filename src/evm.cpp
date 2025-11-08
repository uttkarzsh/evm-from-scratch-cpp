#include "types.hpp"
#include "evm.hpp"
#include "opcodes.hpp"
#include "handlers/opcode_handlers.hpp"
#include <vector>
#include <stdexcept>
using namespace evm_types; 

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
            case Opcode::PUSH0:   //0x5f
            case Opcode::PUSH1:   //0x60
            case Opcode::PUSH2:   //0x61
            case Opcode::PUSH3:   //0x62
            case Opcode::PUSH4:   //0x63
            case Opcode::PUSH5:   //0x64
            case Opcode::PUSH6:   //0x65
            case Opcode::PUSH7:   //0x66
            case Opcode::PUSH8:   //0x67
            case Opcode::PUSH9:   // 0x68
            case Opcode::PUSH10:   // 0x69
            case Opcode::PUSH11:   // 0x6a
            case Opcode::PUSH12:   // 0x6b
            case Opcode::PUSH13:   // 0x6c
            case Opcode::PUSH14:   // 0x6d
            case Opcode::PUSH15:   // 0x6e
            case Opcode::PUSH16:   // 0x6f
            case Opcode::PUSH17:   // 0x70
            case Opcode::PUSH18:   // 0x71
            case Opcode::PUSH19:   // 0x72
            case Opcode::PUSH20:   // 0x73
            case Opcode::PUSH21:   // 0x74
            case Opcode::PUSH22:   // 0x75
            case Opcode::PUSH23:   // 0x76
            case Opcode::PUSH24:   // 0x77
            case Opcode::PUSH25:   // 0x78
            case Opcode::PUSH26:   // 0x79
            case Opcode::PUSH27:   // 0x7a
            case Opcode::PUSH28:   // 0x7b
            case Opcode::PUSH29:   // 0x7c
            case Opcode::PUSH30:   // 0x7d
            case Opcode::PUSH31:   // 0x7e
            case Opcode::PUSH32:   // 0x7f
                op_stack::handlePush(opcode, stack, bytecode, pc);
                break;

            default:
                throw std::runtime_error("Unsupported opcode: " + std::to_string(opcode));
        }
    }  
}

uint256_t EVM::stackTop(){
    return stack.top();
}