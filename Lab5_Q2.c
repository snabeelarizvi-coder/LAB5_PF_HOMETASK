#include <stdio.h>

int main() {
    int rideType;
    char distance;
    int baseFare;

    printf("Select Ride Type:\n");
    printf("1 = Economy\n2 = Business\n3 = Luxury\n");
    scanf("%d", &rideType);

    printf("Enter distance (S for short, L for long): ");
    scanf(" %c", &distance);

    if (distance == 'S' || distance == 's') {
        baseFare = 100;
    }
    else if (distance == 'L' || distance == 'l') {
        baseFare = 300;
    }
    else {
        printf("Invalid distance type\n");
        return 0;
    }

    printf("Assigned Base Fare: %d\n", baseFare);
    return 0;
}
