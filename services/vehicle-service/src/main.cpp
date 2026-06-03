#include <chrono>
#include <thread>

#include "Logger.hpp"

int main()
{
    Logger::info(
        "Vehicle Service Started");

    while(true)
    {
        std::this_thread::sleep_for(
            std::chrono::seconds(5));

        Logger::info(
            "Waiting for signal source...");
    }

    return 0;
}