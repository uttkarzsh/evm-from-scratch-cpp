#pragma once 
#include "types.hpp"
#include <unordered_map>

class Storage{
    std::unordered_map<evm_types::uint256_t, evm_types::uint256_t> storage;

    public:
    void writeStorage(evm_types::uint256_t key, evm_types::uint256_t value);
    evm_types::uint256_t readStorage(evm_types::uint256_t key);
};