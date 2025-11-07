#include "types.hpp"
#include "handlers/op_arithmetic.hpp"
#include "opcodes.hpp"
#include <stdexcept>
using namespace evm_types;


void op_arithmetic::handler(uint8_t opcode, Stack& stack){
    switch(opcode){
        case Opcode::ADD: {    //0x01
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            uint256_t a = stack.pop();
            uint256_t b = stack.pop();
            stack.push(a + b);
            break;
        }

        case Opcode::MUL: {    //0x02
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            uint256_t a = stack.pop();
            uint256_t b = stack.pop();
            stack.push(a * b);
            break;
        }

        case Opcode::SUB: {    //0x03
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            uint256_t a = stack.pop();
            uint256_t b = stack.pop();
            stack.push(a - b);
            break;
        }

        case Opcode::DIV: {    //0x04
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            uint256_t a = stack.pop();
            uint256_t b = stack.pop();
            stack.push(b == 0 ? 0 : a / b);
            break;
        }

        case Opcode::SDIV: {     //0x05
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            break;
        }

        case Opcode::MOD: {    //0x06
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            uint256_t a = stack.pop();
            uint256_t b = stack.pop(); 
            stack.push(b == 0 ? 0 : a % b);
            break;
        }

        case Opcode::SMOD: {    //0x07
            if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
            break;
        }
    }
}