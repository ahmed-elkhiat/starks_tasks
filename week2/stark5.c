#include <stdio.h>

int sum_of_digits(int n)
 {
    int sum = 0;
    while (n > 0)
	{
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

int main() 
{
    int N, A, B, total_sum = 0;
   
    scanf("%d %d %d", &N, &A, &B);

    for (int i = 1; i <= N; i++)
	{
        int digit_sum = sum_of_digits(i);
        if (digit_sum >= A && digit_sum <= B) 
		{
            total_sum += i; 
        }
    }
    printf("%d\n", total_sum);

    return 0;
}