cmake_minimum_required(VERSION 3.10)
project(example)
set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME}_test gtest_example.cc)
find_package(GTest REQUIRED)
target_link_libraries(${PROJECT_NAME}_test  GTest::GTest)
