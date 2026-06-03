#include <chrono>
#include <thread>

#include "Logger.hpp"
#include "VehicleData.hpp"

int main()
{
    VehicleData data;

    data.speed = 0;
    data.rpm = 800;
    data.fuel = 100;

    Logger::info("Vehicle Simulator Started");

    while(true)
    {
        data.speed++;

        data.rpm += 50;

        if(data.speed > 120)
        {
            data.speed = 0;
        }

        if(data.rpm > 5000)
        {
            data.rpm = 800;
        }

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

    return 0;
}