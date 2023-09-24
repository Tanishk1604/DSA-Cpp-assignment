#include <stdio.h>
int main()
{
    printf("The given number should be divisible by 5 or 3 but not 15");

    int n;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {

            printf("The given number is divisible by 5 or 3 but not 15");
        }

        else
        {
            printf("The condition does not satisfy");
        }
    }
    else
    {
        printf("The Condition does not satisfy");
    }

    return 0;
}