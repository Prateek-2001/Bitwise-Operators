#include<stdio.h>

int bitAND(int a, int b){
    return  ~((~a)|(~b));
}

int main(){
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("BitAND: %d",  bitAND(a, b));
    return 0;
}