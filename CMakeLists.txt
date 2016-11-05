cmake_minimum_required(VERSION 2.8)

project(examples CXX)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    message(STATUS "Using GNU compiler")
    set(CMAKE_CXX_FLAGS "-std=c++11")
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    message(STATUS "Using Clang compiler")
    set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")
endif()

add_subdirectory(ext/hetach)

add_subdirectory(simple)
add_subdirectory(api-rest)
