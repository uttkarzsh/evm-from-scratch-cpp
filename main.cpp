#include "evm.hpp"
#include "utils.hpp"
#include <iostream>
#include <vector>

int main() {
    EVM evm;

    std::string bytecode = "0x600360006000600060008400";
    std::vector<uint8_t> bytecodeArray = utils::stringToArray(bytecode);

    evm.execute(bytecodeArray);
    std::cout << evm.stackTop();
}