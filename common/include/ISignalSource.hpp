#pragma once

#include "VehicleData.hpp"

class ISignalSource
{
public:
    virtual ~ISignalSource() = default;

    virtual VehicleData getData() = 0;
};