#include<stdio.h>

int conditional(int x, int y, int z)
{
    return ((y ^ z) & ((!x) + ~0)) ^ z;
}

int main()
{
    int x, y, z;
    printf("Enter First number: ");
    scanf("%d", &x);
    printf("Enter Second number: ");
    scanf("%d", &y);
    printf("Enter Third number: ");
    scanf("%d", &z) ;

    printf("%d", conditional(x, y, z));
}