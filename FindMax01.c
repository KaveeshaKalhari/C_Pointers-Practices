#include <stdio.h>
void FindMax(int *n1, int *n2);

int main()
{
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d%d", &num1, &num2);

    FindMax(&num1, &num2);

    return 0;
}

void FindMax(int *n1, int *n2)
{
    if (*n1 < *n2)
    {
        printf("%d\n", *n2);
    }
    else
    {
        printf("%d\n", *n1);
    }
}