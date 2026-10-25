cmake_minimum_required(VERSION 3.14)
project(quant_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

include(FetchContent)

# Основная библиотека и приложение
add_library(core src/mathlib.cpp)
target_include_directories(core PUBLIC src)

add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE core)

# unit-тесты (GoogleTest)
enable_testing()
FetchContent_Declare(googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests tests/test_mathlib.cpp)
target_link_libraries(unit_tests PRIVATE core GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(unit_tests)

# бенчмарк (Google Benchmark)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(BENCHMARK_ENABLE_GTEST_TESTS OFF CACHE BOOL "" FORCE)
FetchContent_Declare(benchmark
    URL https://github.com/google/benchmark/archive/refs/tags/v1.8.3.tar.gz)
FetchContent_MakeAvailable(benchmark)

add_executable(bench_mathlib bench/bench_mathlib.cpp)
target_link_libraries(bench_mathlib PRIVATE core benchmark::benchmark_main)