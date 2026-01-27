#[[   All in single target
      Setting up static libraries
      .embedded
      .separated
      .Building individual targets
      .C++ standarts at different gradularaties  
]]

cmake_minimum_required(VERSION 3.11)


add_library(libmath STATIC src/maths/supermath.cpp)
target_compile_features(libmath PRIVATE cxx_std_20)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/maths/include)

add_library(libstats STATIC src/stats/stats.cpp)
target_compile_features(libstats PUBLIC cxx_std_20)
target_include_directories(libstats PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}src/stats/include)
target_link_libraries(libstats PRIVATE libmath)

add_executable(roster src/main.cpp )

target_compile_features(rooster PRIVATE cxx_std_20)
target_include_directories(rooster PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(rooster PRIVATE libstats)

