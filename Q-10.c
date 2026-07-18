// Check whether a number is a palindrome.

#include <stdio.h>

int main() {
    int n;
    int m,t;

    printf("enter number:");
    scanf("%d",&n);
    if(n<10) {
        printf("wrong input");
        return 0;
    }
    int rev=0;
    t=n;
    while(n>0) {
        m=n%10;
        rev = rev * 10 + m;
        n=n/10;
    }
    printf("reverse is:%d\n",rev);

    if(t==rev) {
        printf("its a palindrome\n");
        return 0;
    } else {
        printf("its not palindrome\n");
    }
    return 0;
}