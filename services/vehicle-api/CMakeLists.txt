find_package(Threads REQUIRED)

add_executable(
    vehicle-api
    src/main.cpp
    src/VehicleApi.cpp
)

target_include_directories(
    vehicle-api
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/third_party
)

target_link_libraries(
    vehicle-api
    PRIVATE
    common
    Threads::Threads
)