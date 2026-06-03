add_executable(
    vehicle-service
    src/main.cpp
)

target_include_directories(
    vehicle-service
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
)