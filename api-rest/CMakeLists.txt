cmake_minimum_required(VERSION 2.8)

include_directories(
    ${PROJECT_BINARY_DIR}
)

set(
    sources

    indexcontroller.cpp
    companiesresource.cpp
    employeesresource.cpp
    companyentity.cpp
    employeeentity.cpp

    indexcontroller.h
    companiesresource.h
    employeesresource.h
    companyentity.h
    employeeentity.h
)

set(main main.cpp)

add_executable(api-rest ${main} ${sources})

include_directories(${HETACH_INCLUDE_DIRS})

add_dependencies(api-rest hetach)

target_link_libraries(api-rest -L${HETACH_LIBS_DIR} hetach${CMAKE_SHARED_LIBRARY_SUFFIX})
