#include <chrono>
#include <thread>

#include "Logger.hpp"
#include "VehicleService.hpp"
#include "VehicleData.hpp"

VehicleService::VehicleService(
    ISignalSource& source,
    VehicleRepository& repository)
    :
    m_source(source),
    m_repository(repository)
{
}

void VehicleService::run()
{
    Logger::info(
        "Vehicle Service Running");

    while(true)
    {
        VehicleData data =
            m_source.getData();

        m_repository.update(data);

        Logger::info(
            "Speed="
            + std::to_string(data.speed)
            + " RPM="
            + std::to_string(data.rpm)
            + " Fuel="
            + std::to_string(data.fuel));

        std::this_thread::sleep_for(
            std::chrono::seconds(1));
    }
}