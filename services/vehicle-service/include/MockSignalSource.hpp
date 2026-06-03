#pragma once

#include "ISignalSource.hpp"

class MockSignalSource : public ISignalSource
{
public:

    VehicleData getData() override;
};