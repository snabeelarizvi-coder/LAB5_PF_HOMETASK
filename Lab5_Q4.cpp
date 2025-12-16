#include <stdio.h>
#include <math.h>

int main() {
    float distance, surgeMultiplier;
    int rideType;
    float ratePerKm, totalFare;
    int requests;

    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    printf("Select Ride Type:\n1 = Economy\n2 = Business\n3 = Luxury\n");
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

    printf("Enter number of ride requests: ");
    scanf("%d", &requests);

    surgeMultiplier = sqrt(requests) / 2;
    if (surgeMultiplier > 3)
        surgeMultiplier = 3;

    totalFare = distance * ratePerKm * surgeMultiplier;

    printf("Total Fare: %.2f\n", totalFare);

    return 0;
}
