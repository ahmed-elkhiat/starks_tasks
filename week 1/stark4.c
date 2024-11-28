#include <stdio.h>

int main()
 {
    float num1, num2;
    float sum, difference, product, quotient;

    
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

 
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

   
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("\nDivision by zero is not allowed.\n");
        quotient = 0; // Assigning 0 as a placeholder
    }

   
    printf("\nResults:\n");
    printf("Addition: %.2f\n", sum);
    printf("Subtraction: %.2f\n", difference);
    printf("Multiplication: %.2f\n", product);

    if (num2 != 0) {
        printf("Division: %.2f\n", quotient);
    }

    return 0;
}