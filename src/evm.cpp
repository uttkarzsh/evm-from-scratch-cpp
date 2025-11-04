#include "evm.hpp"
#include "opcodes.hpp"
#include <stdexcept>

void EVM::execute(const std::vector<uint8_t>& bytecode){
    while(running && pc < bytecode.size()){
            uint8_t opcode = bytecode[pc++];

            switch(opcode){
                case Opcode::STOP: {    //0x00
                    running = false;
                    break;
                }

                case Opcode::ADD: {    //0x01
                    if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = stack.pop();
                    uint64_t b = stack.pop();
                    stack.push(a+b);
                    break;
                }

                case Opcode::MUL: {    //0x02
                    if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = stack.pop();
                    uint64_t b = stack.pop();
                    stack.push(a*b);
                    break;
                }

                case Opcode::SUB: {    //0x03
                    if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = stack.pop();
                    uint64_t b = stack.pop();
                    stack.push(a-b);
                    break;
                }

                case Opcode::DIV: {    //0x04
                    if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = stack.pop();
                    uint64_t b = stack.pop();
                    stack.push(b == 0 ? 0 : a/b);
                    break;
                }

                case Opcode::MOD: {    //0x05
                    if(stack.size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = stack.pop();
                    uint64_t b = stack.pop(); 
                    stack.push(a%b);
                    break;
                }

                case Opcode::PUSH1: {    //0x60
                    if (pc >= bytecode.size()) throw std::runtime_error("Invalid PUSH1");
                    uint8_t val = bytecode[pc++];
                    stack.push(val);
                    break;
                }

                default:
                    throw std::runtime_error("Unsupported opcode: " + std::to_string(opcode));
            }
        }  
}