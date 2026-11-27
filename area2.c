#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base of the parallelogram: ");
    scanf("%lf", &base);

    printf("Enter the height of the parallelogram: ");
    scanf("%lf", &height);

    area = base * height;

    printf("Area of the parallelogram: %.2lf\n", area);

    return 0;
}
