cmake_minimum_required(VERSION 3.10)
project(mpfr_test C)

add_executable(mpfr_test main.c)

target_link_libraries(mpfr_test PRIVATE mpfr gmp)
