#include <stdio.h>

int main() {
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    if(n%2 == 0) {
        printf("Even number\n");
    } else if(n%2 != 0) {
        printf("odd number \n");
    }
    return 0;
}