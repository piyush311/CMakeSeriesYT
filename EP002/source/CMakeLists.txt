cmake_minimum_required(VERSION 3.5)

Project(HelloApp 
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App"
        LANGUAGES CXX)

add_executable(HelloApp main.cpp)
target_compile_features(HelloApp PRIVATE cxx_std_20)
