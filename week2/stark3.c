#include <stdio.h>

int main() {
    int N, count = 1;
    printf("Enter the number of lines: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) 
	{
        printf("%d %d %d PUM\n", count, count + 1, count + 2);
        count += 4;
    }
    return 0;
}