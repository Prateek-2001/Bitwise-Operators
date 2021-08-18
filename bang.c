#include<stdio.h>

int bang(int x)
{
    return (((~x + 1) | x) >> 31) + 1;
}

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d", bang(x));
}