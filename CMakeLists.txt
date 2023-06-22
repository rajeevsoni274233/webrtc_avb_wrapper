#specify themminimum cmake version to use
cmake_minimum_required(VERSION 3.2)

#Specify your project name
project(
  WebRtcWrapper
  VERSION 1.0
  DESCRIPTION "WebRtcWrapper project"
  LANGUAGES CXX)

#install thelibrary in the specific path
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_PATH ${CMAKE_LIBRARY_PATH})

set(HEADERS
    include/dataTransferBase.hpp
    include/webrtc_dataTransfer.hpp
    include/avb_dataTransfer.hpp
    include/Utils.hpp
    include/connection.hpp
)
# Add your source files
set(SOURCES
    src/webrtc_dataTransfer.cpp
    src/avb_dataTransfer.cpp
    src/connection.cpp
)

#Building the library out of source code
add_library(WebRtcWrapper SHARED ${SOURCES})

#include Headers files
target_include_directories(WebRtcWrapper PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

#install the headers and lib into specific folder
install(FILES ${HEADERS} PUBLIC_HEADER DESTINATION ${CMAKE_SOURCE_DIR}/inc)

add_subdirectory("${CMAKE_SOURCE_DIR}/test")