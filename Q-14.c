// Find GCD and LCM of two numbers.

#include <stdio.h> 

int main() {
    int n,m,gcd;
    printf("enter smaller and greater numbers: ");
    scanf("%d %d",&n,&m);
    if(n>m) {
        n=n+m;
        m=n-m;
        n=n-m;
    }

    int i;
    for( i =1;i<=n;i++) {
        if(n%i==0 && m%i==0) {
            gcd = i;
        }    
    }
    printf("%d\n",gcd);
    i=m;
    while(1){
        if(i%n==0 && i%m==0) {
            printf("%d\n",i);
            break;
        }
        i++;
    }
}