// Find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int temp,res=0,sum=0;
    while(n>0) {
        temp = n%10;
        sum += temp;
        n = n/10;
    }
    printf("result is: %d",sum);
    return 0;
}