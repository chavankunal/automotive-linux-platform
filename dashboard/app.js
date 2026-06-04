async function updateDashboard()
{
    const response =
        await fetch(
            "http://localhost:8080/vehicle/state");

    const data =
        await response.json();

    document.getElementById("speed")
        .innerText = data.speed;

    document.getElementById("rpm")
        .innerText = data.rpm;

    document.getElementById("fuel")
        .innerText = data.fuel;
}

setInterval(
    updateDashboard,
    1000);