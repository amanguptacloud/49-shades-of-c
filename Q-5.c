// Calculate the factorial of a number

#include <stdio.h>

int main() {
    int n,fact=1;
    printf("enter number: ");
    scanf("%d",&n);
    for(int i=1; i<=n;i++) {
        fact = fact *i;
    }
    printf("\nresult: %d",fact);
    return 0;
}