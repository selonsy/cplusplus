cmake_minimum_required(VERSION 3.14)
project(Cplusplus)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Practice)

add_executable(Cplusplus base.cpp)
add_executable(ExamBase exam_base.cpp)

add_executable(Exam exam.cpp)
add_executable(Exam1 exam1.cpp)
add_executable(Exam2 exam2.cpp)
add_executable(Exam3 exam3.cpp)
add_executable(Exam4 exam4.cpp)
#add_executable(Exam2 exam2.cpp)
add_executable(Test test.cpp)
add_executable(STL STL.cpp)
#add_executable(Scratch scratch.cpp)