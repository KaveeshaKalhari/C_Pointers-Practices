#include <stdio.h>
void AddSum(int *p, int x);

int main()
{
    int n;

    printf("Enter number of numbers:");
    scanf("%d", &n);

    int a[n];

    printf("Input %d number of elements in the array:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Element - %d:", i + 1);
        scanf("%d", &a[i]);
    }

    AddSum(a, n);

    return 0;
}

void AddSum(int *p, int x)
{
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum = sum + p[i];
    }

    printf("Sum of array:%d\n", sum);
}