#pragma once
#include "types.hpp"
#include "storage.hpp"
#include "stack.hpp"

namespace op_storage {
    evm_types::uint256_t handleRead(Storage& storage, Stack& stack);
    void handleWrite(Storage& storage, Stack& stack);
}