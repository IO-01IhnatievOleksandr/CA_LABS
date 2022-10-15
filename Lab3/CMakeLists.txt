cmake_minimum_required(VERSION 2.8)

project(ValueTester)

set(SE main.c)

set(SL test.c)

add_library(test STATIC ${SL})

add_executable(ValueTester ${SE})

target_link_libraries(ValueTester test)
