cmake_minimum_required(VERSION 3.10)
project(example)
set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


add_library(InterfaceA interfaceA.cc)
