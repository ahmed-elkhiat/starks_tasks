#include <stdio.h>

int main()
 {
    float num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

   
    printf("Number 1 = %.2f\n", num1);
    printf("Number 2 = %.2f\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping:\n");
    printf("Number 1 = %.2f\n", num1);
    printf("Number 2 = %.2f\n", num2);

    return 0;
}