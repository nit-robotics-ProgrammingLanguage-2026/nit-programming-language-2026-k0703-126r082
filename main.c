
#include <stdio.h>

int fibo(int n);

int main(void)
{
    int number;

    scanf("%d", &number);

    if (number < 1 || number > 30)
    {
        printf("NG");
        return 0;
    }

    printf("%d", fibo(number));

    return 0;
}

int fibo(int n)
{
    int previous = 1;
    int current = 1;
    int next;

    if (n <= 2)
    {
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}