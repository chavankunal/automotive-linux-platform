#pragma once

#include "ISignalSource.hpp"
#include "VehicleRepository.hpp"

class VehicleService
{
public:

    VehicleService(
        ISignalSource& source,
        VehicleRepository& repository);

    void run();

private:

    ISignalSource& m_source;

    VehicleRepository& m_repository;
};