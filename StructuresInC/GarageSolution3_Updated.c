#include <stdio.h>
#include <string.h>

// Define a structure with a tag 'Car'
struct Car {
    char engine[20];
    char fuelType[20];
    int fuelTankCap;
    int seatingCap;
    int cityMileage;
};

int main() {
    // Declare variables of type struct Car
    struct Car car1, car2;

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

    // Print table header
    printf("-------------------------------------------------------------------\n");
    printf("| %-10s | %-10s | %-12s | %-10s | %-12s |\n", 
           "Engine", "Fuel Type", "Fuel Tank (L)", "Seats", "City Mileage");
    printf("-------------------------------------------------------------------\n");

    // Print car1 details
    printf("| %-10s | %-10s | %-12d | %-10d | %-12d |\n", 
           car1.engine, car1.fuelType, car1.fuelTankCap, car1.seatingCap, car1.cityMileage);

    // Print car2 details
    printf("| %-10s | %-10s | %-12d | %-10d | %-12d |\n", 
           car2.engine, car2.fuelType, car2.fuelTankCap, car2.seatingCap, car2.cityMileage);

    printf("-------------------------------------------------------------------\n");

    return 0;
}
