#include<stdio.h>

int invert(int x, int p, int n)
{
    return x ^ (((1 << n) - 1) << p);
}

int main()
{
    int x, p, n;
     printf("Enter number: ");
    scanf("%d", &x);
    printf("Enter position: ");
    scanf("%d", &p);
    printf("Enter bits: ");
    scanf("%d", &n);

    printf("%d", invert(x, p, n));
}