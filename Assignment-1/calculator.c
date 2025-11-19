#include <stdio.h>

int main() {
    int num1, num2;  
    int sum, diff, product, mod;
    float division;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2;  // cast for float result
    mod = num1 % num2;

    // Output
    printf("\n--- Results ---\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", product);
    printf("Division: %.2f\n", division);
    printf("Modulus: %d\n", mod);

    return 0;
}
