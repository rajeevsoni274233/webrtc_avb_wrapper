#specify themminimum cmake version to use
cmake_minimum_required(VERSION 3.2)

#Specify your project name
project(
  WebRtcWrapperTest
  VERSION 1.0
  DESCRIPTION "WebRtcWrapperTest project"
  LANGUAGES CXX)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Add your source files
set(SOURCES
    connection_test.cpp
)

# Locate the shared library
find_library(MYLIBRARY WebRtcWrapper HINTS ${CMAKE_SOURCE_DIR}/lib)

# Specify the include directory
include_directories(${CMAKE_SOURCE_DIR}/include)


#Building the library out of source code
add_executable(WebRtcWrapperTest ${SOURCES})
target_link_libraries(WebRtcWrapperTest LINK_PUBLIC WebRtcWrapper)
