add_executable(
    vehicle-service

    src/main.cpp
    src/VehicleService.cpp
    src/MockSignalSource.cpp
    src/VehicleApi.cpp
  
)

target_include_directories(
    vehicle-service
    PRIVATE
    ${CMAKE_SOURCE_DIR}/common/include
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/third_party
)

target_link_libraries(
    vehicle-service

    PRIVATE

    common
)