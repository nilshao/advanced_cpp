cmake_minimum_required(VERSION 3.1)
project(StudentCard VERSION 0.1.0 LANGUAGES CXX)

include_directories(include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(main src/main.cpp src/Student.cpp src/StudentCard.cpp src/Course.cpp)
target_compile_features(main PUBLIC cxx_std_17)