#include "utils.hpp"

std::vector<uint8_t> utils::stringToArray(std::string input){
    std::vector<uint8_t> bytecode;
    for(int i = 2; i < input.length(); i = i +2){
        std::string hexPrefix = "0x";
        std::string byteString = input.substr(i, 2);
        std::string command = hexPrefix.append(byteString);
        uint8_t byteHex = static_cast<uint8_t>(std::stoi(command, nullptr, 16));
        bytecode.push_back(byteHex);
    }
    return bytecode;
}