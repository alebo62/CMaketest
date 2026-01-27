cmake_minimum_required(VERSION 3.11)

project(Rooster)

# libmath
add_library(libmath STATIC src/maths/supermath.cpp)
#target_compile_features(libmath PRIVATE cxx_std_20)
target_include_directories(libmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/maths/include)

# libstats
add_library(libstats STATIC src/stats/stats.cpp)
#target_compile_features(libstats PUBLIC cxx_std_20)
target_include_directories(libstats PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)
target_link_libraries(libstats PUBLIC libmath)


# execute target
add_executable(rooster main.cpp )

#target_compile_features(rooster PRIVATE cxx_std_20)
#target_include_directories(rooster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(rooster PUBLIC libstats)

