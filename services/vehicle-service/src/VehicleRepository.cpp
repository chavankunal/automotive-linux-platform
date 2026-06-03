#include "VehicleRepository.hpp"

void VehicleRepository::update(
    const VehicleData& data)
{
    std::lock_guard<std::mutex> lock(
        m_mutex);

    m_data = data;
}

VehicleData VehicleRepository::get() const
{
    std::lock_guard<std::mutex> lock(
        m_mutex);

    return m_data;
}