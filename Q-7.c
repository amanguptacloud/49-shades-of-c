// Check whether a number is prime.

#include <stdio.h>
int main() {
    int n;
    start:
    printf("enter number:");
    scanf("%d",&n);
    if(n<=1) {
        printf("try again\n");
        goto start;
    }
    for(int i=2;i<n;i++) {
        if(n%i == 0) {
            printf("not prime number");
            return 1;
        }
    }
    printf("prime number");
    return 0;
}