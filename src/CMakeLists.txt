cmake_minimum_required(VERSION 3.22) # Version of CMake

project(Project1) # Name of our project

add_executable(mainProject1 src/mainProject1.cpp) # Naming our app from file-code

set_target_properties(
    mainProject1 PROPERTIES # Set the additional properties for our project
    CXX_STANDART 20 # Set the C++ 20
    CXX_STANDART_REQUIRED ON # Set the condition required
    CXX_EXTENSIONS ON # Set the extension is on
)