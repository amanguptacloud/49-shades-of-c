// Check whether a year is a leap year.

#include <stdio.h>

int main() {
    int n;
    printf("enter year: ");
    scanf("%d",&n);
    if(n%400 == 0) {
        printf("leap year");
    } else if(n%100 == 0){
        printf("not a leap year");
    } else if(n%4 == 0) {
        printf("a leap year");
    } else {
        printf("not a leap year");
    }
    return 0;
}