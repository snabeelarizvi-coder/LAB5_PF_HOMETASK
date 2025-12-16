#include <stdio.h>
#include <math.h>

int main() {
    int requests;
    float multiplier;

    printf("Enter number of ride requests: ");
    scanf("%d", &requests);

    multiplier = sqrt(requests) / 2;

    if (multiplier > 3)
        multiplier = 3;

    printf("Final Surge Multiplier: %.2f\n", multiplier);

    return 0;
}
