// Reverse a number.

#include <stdio.h>

int main() {
    int n,temp;

    start:
    printf("enter number:");
    scanf("%d",&n);
    if(n<=1) {
        printf("wrong input\n");
        goto start;
    }
    int res = 0;
    while(n>0) {
        temp = n % 10;
        res = res * 10 + temp;
        n = n/10; 
    }
    printf("result: %d",res);
    return 0;
}