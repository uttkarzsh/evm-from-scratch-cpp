#include "evm.hpp"
#include "utils.hpp"
#include <iostream>
#include <vector>

int main() {
    EVM evm;

    std::string bytecode = "0x7f1234567890abcdef1234567890abcdef1234567890abcdef1234567890abcdef00";
    std::vector<uint8_t> bytecodeArray = utils::stringToArray(bytecode);

    evm.execute(bytecodeArray);
    std::cout << evm.stackTop();
}