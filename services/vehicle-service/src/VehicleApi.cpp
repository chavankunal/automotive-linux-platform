#include "VehicleApi.hpp"

#include "crow_all.h"

VehicleApi::VehicleApi(
    VehicleRepository& repository)
    :
    m_repository(repository)
{
}

void VehicleApi::run()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/vehicle/state")
    ([this]()
    {
        auto data =
            m_repository.get();

        crow::json::wvalue result;

        result["speed"] = data.speed;
        result["rpm"] = data.rpm;
        result["fuel"] = data.fuel;

        return result;
    });

    app.port(8080)
       .multithreaded()
       .run();
}