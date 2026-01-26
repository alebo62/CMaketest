#[[   All in single target
      Setting up static libraries
      .embedded
      .separated
      .Building individual targets
      .C++ standarts at different gradularaties  
]]

cmake_minimum_required(VERSION 3.11)


project(HelloWorldPrj
        VERSION 1.0.0
        DESCRIPTION "Project from LearnQtGuide"
        LANGUAGES CXX)

#set (CMAKE_CXX_COMPILER  "D:/Program Files/LLVM/bin/clang.exe")


#GLOBING
#file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
#add_executable(HelloWorldPrjBinary main.cpp ${SOURCE_FILES})

add_library(operations STATIC src/operations.cpp)
target_compile_features(operations PRIVATE cxx_std_14)
target_include_directories(operations PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(HelloWorldPrjBinary main.cpp 
                src/dog.cpp 
                src/log.cpp
               )

target_compile_features(HelloWorldPrjBinary PRIVATE cxx_std_14)
target_include_directories(HelloWorldPrjBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloWorldPrjBinary PRIVATE operations)

