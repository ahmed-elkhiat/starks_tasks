#include <stdio.h>
#include <string.h>
#define USER_ID "user12345"
#define PASSWORD "pass12345" 
int main()
 {
    char entered_id[50], entered_password[50]; 
    int attempts = 0, is_authenticated = 0;

  
    printf("Enter your ID: ");
    scanf("%s", entered_id);
 
    if (strcmp(entered_id, USER_ID) == 0) 
	{
       
        while (attempts < 3)
		{
            printf("Enter your password: ");
            scanf("%s", entered_password);

            if (strcmp(entered_password, PASSWORD) == 0)
			{ 
                is_authenticated = 1;
                break;
            } else {
                printf("Incorrect password. Try again.\n");
                attempts++;
            }
        }
        if (is_authenticated)
		{
            printf("Welcome!\n");
        } else {
            printf("No more tries.\n"); 
        }
    }
	else 
	{
        printf("You are not registered.\n"); 
    }

    return 0;
}