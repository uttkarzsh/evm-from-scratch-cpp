#include <iostream>
#include <vector>

class EVM{
    std::vector<uint64_t> stack;
    size_t pc = 0; //program counter
    bool running = false;
    
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

    void execute(std::vector<uint8_t> bytecode){
        while(running && pc < bytecode.size()){
            uint8_t opcode = bytecode[pc++];

            switch(opcode){

                
                default:
                    throw std::runtime_error("Unsupported opcode: " + std::to_string(opcode));
            }
        }
    }


};

int main(){

    return 0;
}