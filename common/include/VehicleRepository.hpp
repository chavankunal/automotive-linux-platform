#pragma once

#include <mutex>

#include "VehicleData.hpp"

class VehicleRepository
{
public:

    void update(const VehicleData& data);

    VehicleData get() const;

private:

    mutable std::mutex m_mutex;

    VehicleData m_data;
};