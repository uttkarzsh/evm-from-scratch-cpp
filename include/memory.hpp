#pragma once
#include "types.hpp"
#include <vector>

class Memory{
    std::vector<uint8_t> memory;

    public:
    void writeMemory(evm_types::uint256_t offset, uint8_t value);
    uint8_t readMemory(evm_types::uint256_t offset);
};