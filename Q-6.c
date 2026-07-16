// Fibonacci series up to N terms.

#include <stdio.h>

int main() {
    int fst =0, sec=1;
    int n,temp=0;
    printf("enter n:");
    scanf("%d",&n);
    if(n<=0){
        printf("invalid input");
        return 1;
    }

    for(int i=1;i<=n;i++) {
        printf("%d, ",fst);
        temp = fst +sec;
        fst = sec;
        sec =temp;
    }
    return 0;

}