#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = a * b;

    printf("Result: %d\n", result);

    return 0;
}
