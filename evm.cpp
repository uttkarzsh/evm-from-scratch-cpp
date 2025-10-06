#include <iostream>
#include <vector>

class EVM{
    std::vector<uint64_t> stack;
     
    void push(uint64_t value){
        stack.push_back(value);
    }

    
};

int main(){

    return 0;
}