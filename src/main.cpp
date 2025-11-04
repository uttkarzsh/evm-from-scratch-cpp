#include "evm.hpp"
#include "utils.hpp"
#include <iostream>
#include <vector>

int main() {
    EVM evm;
    Utils utils;

    std::string bytecode = "0x600160020160aa01";
    std::vector<uint8_t> code = utils.stringToArray(bytecode);

    evm.execute(code);
    std::cout << "Execution Complete. Stack Top: " << evm.stackTop();
}