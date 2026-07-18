// Swap two numbers using a third variable and again without using a third variable.
// methods without a third variable 
// 1st methode
#include <stdio.h>

int main() {
    int a,b;
    printf(" enter values of a and b: ");
    scanf("%d%d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a = %d,b = %d\n",a,b);

    // 2nd method 
    int f,s;
    printf("enter numbers: ");
    scanf("%d%d",&f,&s);

    f= f^s;
    s= f^s;
    f= f^s;

    printf("a= %d, b= %d\n",f,s);

    return 0;
}