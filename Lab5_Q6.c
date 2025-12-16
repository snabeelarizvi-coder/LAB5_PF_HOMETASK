#include <stdio.h>

int main() {
    int rating;
    float distance;

    printf("Enter driver rating (1-5): ");
    scanf("%d", &rating);

    printf("Enter driver distance (km): ");
    scanf("%f", &distance);

    if (rating >= 4 && distance <= 5) {
        printf("Top driver nearby\n");
    }
    else if (rating >= 3 && distance <= 10) {
        printf("Average driver assigned\n");
    }
    else {
        printf("No suitable driver available\n");
    }

    return 0;
}
