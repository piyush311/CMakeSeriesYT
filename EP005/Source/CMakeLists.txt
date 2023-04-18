cmake_minimum_required(VERSION 3.5)

Project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App"
        LANGUAGES CXX)

#1 way to add source file
#add_executable(HelloApp main.cpp src/dog.cpp src/Operation.cpp)

#2 way to add source file using GLOBING feature
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloApp main.cpp ${SOURCE_FILES})

target_compile_features(HelloApp PRIVATE cxx_std_20)

#include the all header file path here
target_include_directories(HelloApp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)