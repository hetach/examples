cmake_minimum_required(VERSION 2.8)

include_directories(
    ${PROJECT_BINARY_DIR}
)

set(main main.cpp)

add_executable(simple ${main})

include_directories(${HETACH_INCLUDE_DIRS})

add_dependencies(simple hetach)

target_link_libraries(simple -L${HETACH_LIBS_DIR} hetach${CMAKE_SHARED_LIBRARY_SUFFIX})
