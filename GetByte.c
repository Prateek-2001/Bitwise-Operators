#include<stdio.h>

int getByte(int x, int n)
{
    return (x >> (n << 3)) & 0xff;
}

int main()
{
    int x, n;
    printf("Enter Word:");
    scanf("%d", &x);
    printf("Enter byte: ");
    scanf("%d", &n);
    printf("%d", getByte(x, n));
    return 0;
}