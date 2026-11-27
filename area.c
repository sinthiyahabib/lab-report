#include <stdio.h>

int main() {
    double a, b, h, area;

    printf("Enter the length of the first parallel side (a): ");
    scanf("%lf", &a);

    printf("Enter the length of the second parallel side (b): ");
    scanf("%lf", &b);

    printf("Enter the height (h): ");
    scanf("%lf", &h);

    area = 0.5 * (a + b) * h;

    printf("Area of the trapezoid: %.2lf\n", area);

    return 0;
}
