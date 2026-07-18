// Print multiplication table of a number.

#include <stdio.h>

int main() {
    int n;
    printf("enter the number for table: ");
    scanf("%d",&n);
    
    if(n<0) {
        printf("try again");
        return 1;
    }
    for(int i=1; i<11;i++) {
        printf("%d x %d: %d\n",n,i,n*i);
    }
    return 0;
}