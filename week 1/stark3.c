#include <stdio.h>

int main()
 {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nCharacter entered: %c\n", ch);
    printf("ASCII code: %d\n", ch);
	
    printf("Previous character: %c (ASCII: %d)\n", ch - 1, ch - 1);
    printf("Next character: %c (ASCII: %d)\n", ch + 1, ch + 1);

    return 0;
}