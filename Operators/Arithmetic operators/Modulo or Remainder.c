#include <stdio.h>

int main()
{
    int a, b, remainder;

        printf("Enter 1st number :");
        scanf("%d", &a);
        printf("Enter 2nd number :");
        scanf("%d", &b);

        remainder = a % b;

        printf("%d", remainder);

    return 0;
}