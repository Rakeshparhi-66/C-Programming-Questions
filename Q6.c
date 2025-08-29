#include <stdio.h>

int main() {
    const float PI = 3.14159f;
    float radius = 5.0;
    float area = PI * radius * radius;

    printf("The area of a circle with radius :\n%.2f is %.2f\n", radius, area);

    return 0;
}
