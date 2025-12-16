#include <stdio.h>

int main() {
    int points;
    float discount;

    printf("Enter loyalty points: ");
    scanf("%d", &points);

    discount = (points > 1000) ? 20.0 : 5.0;

    printf("Discount applied: %.0f%%\n", discount);

    return 0;
}
