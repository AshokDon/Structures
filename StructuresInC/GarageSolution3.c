#include <stdio.h>
#include <string.h>

// Define a structure for Car
struct {
    char engine[20];
    char fuelType[20];
    int fuelTankCap;
    int seatingCap;
    int cityMileage;
} car1, car2;

int main() {
    // Assign values to car1
    strcpy(car1.engine, "V8");
    strcpy(car1.fuelType, "Petrol");
    car1.fuelTankCap = 60;
    car1.seatingCap = 5;
    car1.cityMileage = 12;

    // Assign values to car2
    strcpy(car2.engine, "Electric");
    strcpy(car2.fuelType, "Battery");
    car2.fuelTankCap = 0;
    car2.seatingCap = 4;
    car2.cityMileage = 300;

    // Print car details
    printf("Car 1 Details:\n");
    printf("Engine: %s\nFuel Type: %s\nFuel Tank Capacity: %dL\nSeating Capacity: %d\nCity Mileage: %d km/l\n\n",
           car1.engine, car1.fuelType, car1.fuelTankCap, car1.seatingCap, car1.cityMileage);

    printf("Car 2 Details:\n");
    printf("Engine: %s\nFuel Type: %s\nFuel Tank Capacity: %dL\nSeating Capacity: %d\nCity Mileage: %d km/l\n",
           car2.engine, car2.fuelType, car2.fuelTankCap, car2.seatingCap, car2.cityMileage);

    return 0;
}
