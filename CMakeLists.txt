cmake_minimum_required(VERSION 3.10)
project(practice12)

set(CMAKE_CXX_STANDARD 17)

add_library(utils src/m_utils.cpp)
target_include_directories(utils PUBLIC src)

add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE utils)

enable_testing()
add_executable(tests tests/test_main.cpp)
target_link_libraries(tests PRIVATE utils)
add_test(NAME utils_tests COMMAND tests)
