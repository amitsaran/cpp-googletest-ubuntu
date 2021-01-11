cmake_minimum_required(VERSION 3.10)
project(cpp-googletest-ubuntu)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ADDITIONAL_CFLAGS} -g")

include_directories(src)
include_directories(ext/googletest/googletest/include)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(ext/googletest/googletest)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/.travis/cmake)
if (CMAKE_BUILD_TYPE STREQUAL "Coverage")
  include(CodeCoverage)
  setup_target_for_coverage(${PROJECT_NAME}_coverage cpp-googletest-ubuntu_test coverage)

  SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
  SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
endif() #CMAKE_BUILD_TYPE STREQUAL "Coverage"
