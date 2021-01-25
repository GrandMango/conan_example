cmake_minimum_required(VERSION 3.10)
project(example)
set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
#find_package(interface)

add_executable(main main.cc)
message("@@@@@@@@@@@@@@@@")
message(${CONAN_LIBS})
message("@@@@@@@@@@@@@@@@")
target_link_libraries(main  InterfaceA InterfaceB)
