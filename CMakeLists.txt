# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.0)

# Project's name
project(test)
message([cm_msg]PROJECT:${PROJECT_NAME})

# ==================== variables ====================

# cmake top-level dir, i dont use this
message([cm_msg]CMAKE_SOURCE_DIR:${CMAKE_SOURCE_DIR})
# project path
message([cm_msg]PROJECT_SOURCE_DIR:${PROJECT_SOURCE_DIR})
# build path
message([cm_msg]PROJECT_BINARY_DIR:${PROJECT_BINARY_DIR})

# output path
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
message([cm_msg]EXECUTABLE_OUTPUT_PATH:${EXECUTABLE_OUTPUT_PATH})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
message([cm_msg]LIBRARY_OUTPUT_PATH:${LIBRARY_OUTPUT_PATH})

# ==================== example ====================
#[[

add_subdirectory(sub1)
add_subdirectory(sub2)

# header files path
include_directories("${PROJECT_SOURCE_DIR}/include")

# build executable
add_executable(hello ${PROJECT_SOURCE_DIR}/hello.cc)

# wildcard
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src MAIN_SRC_DIR)
add_executable(hello ${MAIN_SRC_DIR})

# build library
add_library(xxx ${PROJECT_SOURCE_DIR}/xxx.cc)

# link library
target_link_libraries(xxx ${PROJECT_SOURCE_DIR}/libs/libxxx.a)
target_link_libraries(xxx sub1)

]]
# ==================== this project ====================

add_subdirectory(cal)


include_directories("${PROJECT_SOURCE_DIR}/include")

# add_executable(hello ${PROJECT_SOURCE_DIR}/src/hello.cc)

AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src MAIN_SRC_DIR)
add_executable(hello ${MAIN_SRC_DIR})

# target_link_libraries(hello ${PROJECT_SOURCE_DIR}/libs/cal.lib)
target_link_libraries(hello cal)
