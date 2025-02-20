#include <stdio.h>

int main() {
    // Car 1 Details
    char engine1[20] = "V8";
    char fuelType1[10] = "Petrol";
    float fuelTankCap1 = 60.5;
    int seatingCap1 = 5;
    float cityMileage1 = 12.5;

    // Car 2 Details
    char engine2[20] = "V6";
    char fuelType2[10] = "Diesel";
    float fuelTankCap2 = 55.0;
    int seatingCap2 = 7;
    float cityMileage2 = 14.2;

    // Car 3 Details
    char engine3[20] = "Electric";
    char fuelType3[10] = "Battery";
    float fuelTankCap3 = 75.0;
    int seatingCap3 = 4;
    float cityMileage3 = 150.0;

    // Displaying the details of the cars
    printf("------------------------------------------------------\n");
    printf("Car No | Engine  | Fuel Type | Tank Cap | Seats | Mileage\n");
    printf("------------------------------------------------------\n");

    printf("1      | %-7s | %-8s | %-8.1f | %-5d | %.1f kmpl\n", 
           engine1, fuelType1, fuelTankCap1, seatingCap1, cityMileage1);

    printf("2      | %-7s | %-8s | %-8.1f | %-5d | %.1f kmpl\n", 
           engine2, fuelType2, fuelTankCap2, seatingCap2, cityMileage2);

    printf("3      | %-7s | %-8s | %-8.1f | %-5d | %.1f kmpl\n", 
           engine3, fuelType3, fuelTankCap3, seatingCap3, cityMileage3);

    printf("------------------------------------------------------\n");

    return 0;
}
