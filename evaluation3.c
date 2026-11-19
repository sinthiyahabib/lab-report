#include <stdio.h>

int main() {
    int a, b, sin;

    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        sin = b;
        b = a % b;
        a = sin;
    }

    printf("%d\n", a);

    return 0;
}
