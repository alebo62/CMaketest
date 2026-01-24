cmake_minimum_required(VERSION 3.11)

project(HelloWorldPrj
        VERSION 0.0.1
        DESCRIPTION "Project from LearnQtGuide"
        LANGUAGES CXX)

add_executable(HelloWorldPrjBinary main.cpp src/dog.cpp src/operations.cpp)

target_compile_features(HelloWorldPrjBinary PRIVATE cxx_std_20)

target_include_directories(HelloWorldPrjBinary PRIVATE ${CMAKE_SOURCE_DIR}/include)