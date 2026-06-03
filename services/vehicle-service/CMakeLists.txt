add_executable(
    vehicle-service

    src/main.cpp
    src/VehicleService.cpp
    src/MockSignalSource.cpp
    src/VehicleRepository.cpp
)

target_include_directories(
    vehicle-service
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)