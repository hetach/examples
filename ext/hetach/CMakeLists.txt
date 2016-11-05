cmake_minimum_required(VERSION 2.8)
project(hetach_builder CXX)
include(ExternalProject)

if(DEV AND HETACH_DIR)
    ExternalProject_Add(hetach
        URL ${HETACH_DIR}
        CMAKE_ARGS -DDEV=${DEV}
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}
        INSTALL_COMMAND ""
    )
else(DEV AND HETACH_DIR)
    ExternalProject_Add(hetach
        GIT_REPOSITORY https://github.com/hetach/hetach.git
        GIT_TAG develop
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}
        INSTALL_COMMAND ""
    )
endif(DEV AND HETACH_DIR)

ExternalProject_Get_Property(hetach source_dir)
set(HETACH_INCLUDE_DIRS ${source_dir}/include PARENT_SCOPE)

ExternalProject_Get_Property(hetach binary_dir)
set(HETACH_LIBS_DIR ${binary_dir} PARENT_SCOPE)
