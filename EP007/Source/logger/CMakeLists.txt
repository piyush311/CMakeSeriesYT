cmake_minimum_required(VERSION 3.5)

#set the standard compiler at project level instead of target level
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

#Compile Static Library from different folder source files
add_library(logger STATIC src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)