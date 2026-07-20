// Count digits in a number.

#include <stdio.h>

int main() {
    int n,count=0;
    printf("enter number: ");
    scanf("%d",&n);
    if(n==0) {
        printf("1");
        return 0;
    }
    if(n<0) {
        n = -n;
    }
    while(n>0){
        n=n/10;
        count++;
    }
    printf("%d",count);
}