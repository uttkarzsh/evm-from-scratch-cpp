#include "storage.hpp"
#include "types.hpp"
using namespace evm_types;

void Storage::writeStorage(uint256_t key, uint256_t value){
    storage[key] = value;
}

uint256_t Storage::readStorage(uint256_t key){
    return storage[key];
}