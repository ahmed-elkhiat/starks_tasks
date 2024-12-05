#include <stdio.h>

int main() 
{
    double num1, num2, sum;

    while (1)
	{ 
        printf("Enter two numbers (separated by space): ");
        if (scanf("%lf %lf", &num1, &num2) != 2) 
		{ 
            printf("Invalid input. Please enter numbers.\n");
           
            while (getchar() != '\n');
            continue;
        }

        sum = num1 + num2;
        printf("Sum: %lf\n\n", sum); 
    }

    return 0;
}