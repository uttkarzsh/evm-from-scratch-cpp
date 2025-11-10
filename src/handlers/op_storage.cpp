#include "handlers/op_storage.hpp"
#include "types.hpp"
#include "stack.hpp"
#include <stdexcept>

using namespace evm_types;

uint256_t op_storage::handleRead(Storage& storage, Stack& stack){
    uint256_t key = stack.pop();
    return storage.readStorage(key);
}

void op_storage::handleWrite(Storage& storage, Stack& stack){
    uint256_t key = stack.pop();
    uint256_t value = stack.pop();
    storage.writeStorage(key, value);
}