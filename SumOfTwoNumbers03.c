#include <stdio.h>
void sum(int *n1, int *n2);

int main()
{
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);

    sum(&num1, &num2);

    return 0;
}

void sum(int *n1, int *n2)
{
    printf("%d\n", *n1 + *n2);
}