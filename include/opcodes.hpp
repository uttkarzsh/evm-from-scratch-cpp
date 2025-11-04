#pragma once
#include <cstdint>

namespace Opcode {
    constexpr uint8_t STOP  = 0x00;
    constexpr uint8_t ADD   = 0x01;
    constexpr uint8_t MUL   = 0x02;
    constexpr uint8_t SUB   = 0x03;
    constexpr uint8_t DIV   = 0x04;
    constexpr uint8_t MOD   = 0x05;
    constexpr uint8_t PUSH1 = 0x60;
}