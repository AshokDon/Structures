#include <stdio.h>

int main() {
    // Arrays to store details for 3 cars
    char engine[3][20] = {"V8", "Electric", "Hybrid"};
    char fuelType[3][10] = {"Petrol", "Electric", "Diesel"};
    float fuelTankCap[3] = {60.5, 0.0, 50.0};
    int seatingCap[3] = {5, 4, 7};
    float cityMileage[3] = {12.5, 0.0, 18.2};

    // Printing car details in a formatted way
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Engine", "FuelType", "TankCap", "Seats", "Mileage");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-10s %-10s %-10.1f %-10d %-10.1f\n", 
               engine[i], fuelType[i], fuelTankCap[i], seatingCap[i], cityMileage[i]);
    }

    return 0;
}
