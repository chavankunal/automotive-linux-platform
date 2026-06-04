#include "VehicleApi.hpp"

#include <iostream>
#include <chrono>
#include <thread>

VehicleApi::VehicleApi(
    VehicleRepository& repository)
    :
    m_repository(repository)
{
}

void VehicleApi::run()
{
    std::cout
        << "[INFO] API Started"
        << std::endl;

    while(true)
    {
        auto data =
            m_repository.get();

        std::cout
            << "[API] "
            << "Speed="
            << data.speed
            << " RPM="
            << data.rpm
            << " Fuel="
            << data.fuel
            << std::endl;

        std::this_thread::sleep_for(
            std::chrono::seconds(5));
    }
}