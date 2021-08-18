#include<stdio.h>

int sign(int n){
    return (!( n & (1 << (sizeof(n) -1 )) | (!n)));
}

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    sign(a)? printf("1\n"):(a)? printf("-1\n"): printf("0\n");
    return 0;
}