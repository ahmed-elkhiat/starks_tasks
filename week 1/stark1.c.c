#include <stdio.h>

int main()
{
    int intValue;
    char charValue;
    float floatValue;

    printf("Enter an integer: ");
    scanf("%d", &intValue);
    
    printf("Enter a character: ");
    scanf(" %c", &charValue);  

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

 
    printf("Integer: %d\n", intValue);
    printf("Character: %c\n", charValue);
    printf("Float: %.2f\n", floatValue);

    return 0;
}