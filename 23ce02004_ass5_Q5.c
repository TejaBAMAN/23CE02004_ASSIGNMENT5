#include <stdio.h>

int main()
{
    int num, sum = 0;
    char choice;
    while (1)
    {
        printf("Provide the number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            sum += num;
        }
        while (1)
        {
            printf("Do you want to continue? (Y/N): ");
            scanf(" %c", &choice);
            if (choice == 'Y' || choice == 'y')
            {
                break;
            }
            else if (choice == 'N' || choice == 'n')
            {
                break;
            }
            else
            {
                printf("Not a valid input\n");
            }
        }
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
