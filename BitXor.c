#include<stdio.h>

int bitXOR(int a, int b){
    int temp;
    temp = ~(a&b);
    return ~(~(temp&a)&~(temp&b));
}

int main(){
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("BitXOR: %d",  bitXOR(a, b));
    return 0;
}