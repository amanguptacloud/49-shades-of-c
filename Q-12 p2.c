// Swap two numbers using a third variable and again without using a third variable.

#include <stdio.h>

int main() {
    int a,b;
    printf(" enter values of a and b: ");
    scanf("%d%d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a = %d,b = %d",a,b);
    return 0;
}