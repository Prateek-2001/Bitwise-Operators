#include<stdio.h>

int LogicalShift(int x, int n){
    return x >> n;
}

int main(){
    int x, n;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("Enter number of Logical shifts: ");
    scanf("%d", &n);
    printf("%d", LogicalShift(x, n));
    return 0;
}