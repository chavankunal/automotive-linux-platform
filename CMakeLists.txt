cmake_minimum_required(VERSION 3.16)

project(
    AutomotiveLinuxPlatform
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(common)
add_subdirectory(services/vehicle-simulator)
add_subdirectory(services/vehicle-service)
