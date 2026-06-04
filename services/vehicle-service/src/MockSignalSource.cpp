#include "MockSignalSource.hpp"

VehicleData MockSignalSource::getData()
{
    static int speed = 0;

    VehicleData data;

    data.speed = speed++;
    data.rpm = 800 + (speed * 50);
    data.fuel = 100 - (speed / 10);

    data.ignition = true;

    data.engineRunning =
        (data.speed > 0);

    if(speed > 120)
    {
        speed = 0;
    }

    return data;
}