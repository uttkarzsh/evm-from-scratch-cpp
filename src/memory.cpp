#include "memory.hpp"
#include <vector>
#include <stdexcept>

void Memory::writeMemory(evm_types::uint256_t offset, uint8_t value){
    memory.at(offset) = value;
}

uint8_t Memory::readMemory(evm_types::uint256_t offset){
    return memory[offset];
}