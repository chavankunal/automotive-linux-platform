#include <thread>

#include "MockSignalSource.hpp"
#include "VehicleApi.hpp"
#include "VehicleRepository.hpp"
#include "VehicleService.hpp"

int main()
{
    MockSignalSource source;

    VehicleRepository repository;

    VehicleService service(
        source,
        repository);

    VehicleApi api(
        repository);

    std::thread serviceThread(
        [&]()
        {
            service.run();
        });

    std::thread apiThread(
        [&]()
        {
            api.run();
        });

    serviceThread.join();

    apiThread.join();

    return 0;
}