#include "MockSignalSource.hpp"
#include "VehicleRepository.hpp"
#include "VehicleService.hpp"

int main()
{
    MockSignalSource source;

    VehicleRepository repository;

    VehicleService service(
        source,
        repository);

    service.run();

    return 0;
}