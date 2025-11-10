#pragma once
#include <cstdint>

namespace Opcode {
    //Stop
    constexpr uint8_t STOP  = 0x00;

    //Arithmetic Operations
    constexpr uint8_t ADD = 0x01;
    constexpr uint8_t MUL = 0x02;
    constexpr uint8_t SUB = 0x03;
    constexpr uint8_t DIV = 0x04;
    constexpr uint8_t SDIV = 0x05;
    constexpr uint8_t MOD = 0x06;
    constexpr uint8_t SMOD = 0x07;
    constexpr uint8_t ADDMOD = 0x08;
    constexpr uint8_t MULMOD = 0x09;
    constexpr uint8_t EXP = 0x0a;

    //Comparators
    constexpr uint8_t LT = 0x10;
    constexpr uint8_t GT = 0x11;
    constexpr uint8_t SLT = 0x12;
    constexpr uint8_t SGT = 0x13;
    constexpr uint8_t EQ = 0x14;
    constexpr uint8_t ISZERO = 0x15;

    //Bitwise Operators
    constexpr uint8_t AND = 0x16;
    constexpr uint8_t OR = 0x17;
    constexpr uint8_t XOR = 0x18;
    constexpr uint8_t NOT = 0x18;

    //Storage Operations
    constexpr uint8_t SLOAD = 0x54;
    constexpr uint8_t SSTORE = 0x55;

    //Stack Manipulation
    constexpr uint8_t POP = 0x50;
    constexpr uint8_t PUSH0 = 0x5f;
    constexpr uint8_t PUSH1 = 0x60;
    constexpr uint8_t PUSH2 = 0x61;
    constexpr uint8_t PUSH3 = 0x62;
    constexpr uint8_t PUSH4 = 0x63;
    constexpr uint8_t PUSH5 = 0x64;
    constexpr uint8_t PUSH6 = 0x65;
    constexpr uint8_t PUSH7 = 0x66;
    constexpr uint8_t PUSH8 = 0x67;
    constexpr uint8_t PUSH9 = 0x68;
    constexpr uint8_t PUSH10 = 0x69;
    constexpr uint8_t PUSH11 = 0x6a;
    constexpr uint8_t PUSH12 = 0x6b;
    constexpr uint8_t PUSH13 = 0x6c;
    constexpr uint8_t PUSH14 = 0x6d;
    constexpr uint8_t PUSH15 = 0x6e;
    constexpr uint8_t PUSH16 = 0x6f;
    constexpr uint8_t PUSH17 = 0x70;
    constexpr uint8_t PUSH18 = 0x71;
    constexpr uint8_t PUSH19 = 0x72;
    constexpr uint8_t PUSH20 = 0x73;
    constexpr uint8_t PUSH21 = 0x74;
    constexpr uint8_t PUSH22 = 0x75;
    constexpr uint8_t PUSH23 = 0x76;
    constexpr uint8_t PUSH24 = 0x77;
    constexpr uint8_t PUSH25 = 0x78;
    constexpr uint8_t PUSH26 = 0x79;
    constexpr uint8_t PUSH27 = 0x7a;
    constexpr uint8_t PUSH28 = 0x7b;
    constexpr uint8_t PUSH29 = 0x7c;
    constexpr uint8_t PUSH30 = 0x7d;
    constexpr uint8_t PUSH31 = 0x7e;
    constexpr uint8_t PUSH32 = 0x7f;

    constexpr uint8_t DUP1 = 0x80;
    constexpr uint8_t DUP2 = 0x81;
    constexpr uint8_t DUP3 = 0x82;
    constexpr uint8_t DUP4 = 0x83;
    constexpr uint8_t DUP5 = 0x84;
    constexpr uint8_t DUP6 = 0x85;
    constexpr uint8_t DUP7 = 0x86;
    constexpr uint8_t DUP8 = 0x87;
    constexpr uint8_t DUP9 = 0x88;
    constexpr uint8_t DUP10 = 0x89;
    constexpr uint8_t DUP11 = 0x8a;
    constexpr uint8_t DUP12 = 0x8b;
    constexpr uint8_t DUP13 = 0x8c;
    constexpr uint8_t DUP14 = 0x8d;
    constexpr uint8_t DUP15 = 0x8e;
    constexpr uint8_t DUP16 = 0x8f;

    constexpr uint8_t SWAP1 = 0x90;
    constexpr uint8_t SWAP2 = 0x91;
    constexpr uint8_t SWAP3 = 0x92;
    constexpr uint8_t SWAP4 = 0x93;
    constexpr uint8_t SWAP5 = 0x94;
    constexpr uint8_t SWAP6 = 0x95;
    constexpr uint8_t SWAP7 = 0x96;
    constexpr uint8_t SWAP8 = 0x97;
    constexpr uint8_t SWAP9 = 0x98;
    constexpr uint8_t SWAP10 = 0x99;
    constexpr uint8_t SWAP11 = 0x9a;
    constexpr uint8_t SWAP12 = 0x9b;
    constexpr uint8_t SWAP13 = 0x9c;
    constexpr uint8_t SWAP14 = 0x9d;
    constexpr uint8_t SWAP15 = 0x9e;
    constexpr uint8_t SWAP16 = 0x9f;
}