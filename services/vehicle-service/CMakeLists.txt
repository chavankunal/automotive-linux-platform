add_executable(
    vehicle-service

    src/main.cpp
    src/VehicleService.cpp
    src/MockSignalSource.cpp
  
)

target_include_directories(
    vehicle-service
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(
    vehicle-service

    PRIVATE

    common
)