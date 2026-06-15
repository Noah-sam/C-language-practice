#include <stdio.h>
#include <string.h>

int main()
{
    char number[21];

    printf("Enter your mobile number: ");
    fgets(number, sizeof(number), stdin);

    number[strlen(number) - 1] = '\0';

    while (strlen(number) != 10)
    {
        printf("The number should be 10 digits. Enter again: ");
        scanf("%10s", number);
        if (strlen(number) < 10){
           printf("The number should be 10 digits. Enter again: ");
        scanf("%10s", number);
        }
    }

    printf("Enter the OTP: ");

    return 0;
}
