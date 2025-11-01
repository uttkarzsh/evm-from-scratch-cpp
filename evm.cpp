#include <iostream>
#include <vector>

class EVM{
    std::vector<uint64_t> stack;
    size_t pc = 0; //program counter
    bool running = true;
    
    void push(uint64_t value){
        stack.push_back(value); 
    }

    uint64_t pop(){
        if(stack.empty()){
            throw std::runtime_error("stack is empty");
        }
        uint64_t val = stack.back();
        stack.pop_back();
        return val;
    }

    size_t size(){
        return stack.size();
    }

    void execute(std::vector<uint8_t> bytecode){
        while(running && pc < bytecode.size()){
            uint8_t opcode = bytecode[pc++];

            switch(opcode){
                case 0x00: {    //STOP
                    running = false;
                    break;
                }

                case 0x01: {    //ADD
                    if(size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = pop();
                    uint64_t b = pop();
                    push(a+b);
                    break;
                }

                case 0x02: {    //MUL
                    if(size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = pop();
                    uint64_t b = pop();
                    push(a*b);
                    break;
                }

                case 0x03: {    //SUB
                    if(size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = pop();
                    uint64_t b = pop();
                    push(a-b);
                    break;
                }

                case 0x04: {    //DIV
                    if(size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = pop();
                    uint64_t b = pop();
                    if(b==0) push(0);  
                    push(a/b);
                    break;
                }

                case 0x05: {    //MOD
                    if(size() < 2) throw std::runtime_error("Not enough values on the stack.");
                    uint64_t a = pop();
                    uint64_t b = pop(); 
                    push(a%b);
                    break;
                }

                case 0x60: {    //PUSH1
                    if (pc >= bytecode.size()) throw std::runtime_error("Invalid PUSH1");
                    uint8_t val = bytecode[pc++];
                    push(val);
                    break;
                }


                default:
                    throw std::runtime_error("Unsupported opcode: " + std::to_string(opcode));
            }
        }
    }


};

int main(){

    return 0;
}