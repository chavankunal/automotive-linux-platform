#include "VehicleApi.hpp"
#include "VehicleRepository.hpp"

int main()
{
    VehicleRepository repository;

    VehicleApi api(repository);

    api.run();

    return 0;
}