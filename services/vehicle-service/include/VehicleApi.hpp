#pragma once

#include "VehicleRepository.hpp"

class VehicleApi
{
public:

    explicit VehicleApi(
        VehicleRepository& repository);

    void run();

private:

    VehicleRepository& m_repository;
};