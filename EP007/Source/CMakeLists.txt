cmake_minimum_required(VERSION 3.5)

#set the standard compiler at project level instead of target level
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

Project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App"
        LANGUAGES CXX)

#Compile Static Library
add_library(Operation STATIC src/Operation.cpp)
target_include_directories(Operation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#set the standard compiler at target level
#target_compile_features(Operation PUBLIC cxx_std_20)

#Compile Static Library from different folder source files
add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
#target_compile_features(logger PUBLIC cxx_std_20)

add_executable(HelloApp main.cpp
                        src/dog.cpp)
#target_compile_features(HelloApp PUBLIC cxx_std_20)
#include the all header file path here
target_include_directories(HelloApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#link the library create above to tge HelloApp Executable
target_link_libraries(HelloApp PUBLIC Operation logger)