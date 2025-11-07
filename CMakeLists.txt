cmake_minimum_required(VERSION 3.10)
project(EVM_FROM_SCRATCH)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
include_directories(/opt/homebrew/Cellar/boost/1.89.0/include)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(evm main.cpp ${SOURCES})