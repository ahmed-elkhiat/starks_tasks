#include <stdio.h>

int main() {
    int V, A, B, C; 
    scanf("%d %d %d %d", &V, &A, &B, &C);

    while (1)
	{
        V -= A;
        if (V < 0) 
		{ 
            printf("Father\n");
            break; 
        }

        V -= B; 
        if (V < 0) 
		{ 
            printf("Mather\n");
            break; 
        }

        V -= C; 
        if (V < 0)
		{
            printf("Takahashe\n"); 
            break; 
        }
    }

    return 0;
}