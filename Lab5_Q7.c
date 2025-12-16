#include <stdio.h>
#include <math.h>

int main() {
    int age, points, rating, rideType, requests;
    float balance, distance, driverDistance;
    float ratePerKm, surge, discount, fare;

    /* Passenger Eligibility */
    printf("Enter passenger age: ");
    scanf("%d", &age);

    printf("Enter account balance: ");
    scanf("%f", &balance);

    if (age < 21) {
        printf("Passenger Status: Not eligible (underage)\n");
        return 0;
    }
    else if (balance < 200) {
        printf("Passenger Status: Not eligible (insufficient balance)\n");
        return 0;
    }
    else {
        printf("Passenger Status: Eligible\n");
    }

    /* Ride Type */
    printf("\nSelect Ride Type:\n1. Economy\n2. Business\n3. Luxury\n");
    scanf("%d", &rideType);

    if (rideType == 1)
        ratePerKm = 50;
    else if (rideType == 2)
        ratePerKm = 100;
    else if (rideType == 3)
        ratePerKm = 200;
    else {
        printf("Invalid ride type\n");
        return 0;
    }

    /* Distance */
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    /* Surge Calculation */
    printf("Enter number of ride requests: ");
    scanf("%d", &requests);

    surge = sqrt(requests) / 2;
    if (surge > 3)
        surge = 3;

    /* Loyalty Discount */
    printf("Enter loyalty points: ");
    scanf("%d", &points);

    discount = (points > 1000) ? 20.0 : 5.0;

    /* Driver Assignment */
    printf("Enter driver rating: ");
    scanf("%d", &rating);

    printf("Enter driver distance (km): ");
    scanf("%f", &driverDistance);

    if (rating >= 4 && driverDistance <= 5)
        printf("Driver Assigned: Top driver nearby\n");
    else if (rating >= 3 && driverDistance <= 10)
        printf("Driver Assigned: Average driver assigned\n");
    else {
        printf("Driver Assigned: No suitable driver available\n");
        return 0;
    }

    /* Fare Calculation */
    fare = distance * ratePerKm;
    fare = fare * surge;
    fare = fare - (fare * discount / 100);

    printf("\n----- Ride Summary -----\n");
    printf("Ride Distance: %.2f km\n", distance);
    printf("Rate per km: %.2f\n", ratePerKm);
    printf("Surge Multiplier: %.2f\n", surge);
    printf("Discount Applied: %.0f%%\n", discount);
    printf("Final Fare: %.2f\n", fare);

    return 0;
}
