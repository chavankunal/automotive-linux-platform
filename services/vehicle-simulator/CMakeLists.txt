add_executable(
    vehicle-simulator
    src/main.cpp
)

target_include_directories(
    vehicle-simulator
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
)