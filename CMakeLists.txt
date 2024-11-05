cmake_minimum_required(VERSION 3.16)
project(Sandbox LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Build flatbuffers schema compiler
add_subdirectory(flatbuffers-sandbox-schema)

# Compile vulkan samples
add_subdirectory(Vulkan-Samples)

# Build client executable
add_executable(SchemaTest main.cpp)
target_link_libraries(SchemaTest PRIVATE sbx_schema)
