cmake_minimum_required (VERSION 3.8)
project(q_04_library)

add_library(q_04_library "question4.cpp" "question4.h")
add_executable(q_04_exe "main.cpp" "question4.cpp")




