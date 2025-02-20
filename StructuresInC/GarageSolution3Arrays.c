#include <stdio.h>

// Defining a structure for Car
struct Car {
    char engine[20];
    char fuelType[10];
    int fuelTankCapacity;
    int seatingCapacity;
    float cityMileage;
};

int main() {
    // Creating an array of 3 cars
    struct Car cars[3] = {
        {"V8", "Petrol", 60, 5, 12.5},
        {"Electric", "Battery", 0, 4, 300.0},
        {"Hybrid", "Petrol/Electric", 45, 5, 25.5}
    };

    // Printing car details
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Engine", "Fuel Type", "Tank Cap", "Seats", "Mileage");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-10s %-10s %-10d %-10d %-10.1f\n",
               cars[i].engine, cars[i].fuelType, cars[i].fuelTankCapacity,
               cars[i].seatingCapacity, cars[i].cityMileage);
    }

    return 0;
}
