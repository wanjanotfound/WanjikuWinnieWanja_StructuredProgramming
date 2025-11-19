#include <stdio.h>

#define PI 3.14159   // define constant PI

int main() {
    float radius, surfaceArea;

    // Input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculation
    surfaceArea = 4 * PI * radius * radius;

    // Output
    printf("Surface Area of the Sphere = %.2f\n", surfaceArea);

    return 0;
}
