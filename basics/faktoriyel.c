#include <stdio.h>

int faktoriyel(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(void)
{
    int a;
    printf("Please enter a number for factorial: ");
    scanf("%d", &a);

    int result2 = faktoriyel(a);

    printf("%d", result2);

    return 0;
}
