// Take two integers and print sum, difference, product, 
// quotient, and remainder.

#include <stdio.h>

int main() {
    int n,m;
    printf("enter two numbers: \n");
    scanf("%d %d",&n,&m);

    printf("sum: %d \n",n+m);
    printf("difference: %d\n",n-m);
    printf("product: %d\n",n*m);
    printf("Quotient: %d\n",n/m);    
    printf("Remainder: %d\n",n%m);
    return 0;
}
