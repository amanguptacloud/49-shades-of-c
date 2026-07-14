// Find the largest number.

#include <stdio.h>

int main() {
    int number[100];
    int n;
    start:
    printf("how many numbers to compare (upto 100): ");
    scanf("%d",&n);
    if(n<=0 || n>100){
        printf("invalid input try again.\n");
    goto start;
    }
    printf("give %d numbers: ",n);
    for(int i=0;i<n;i++) {
        scanf("%d",&number[i]);
    }
    int largest;
    largest = number[0];
    for(int i = 1; i<n; i++){
        if(largest < number[i]) {
            largest = number[i];
        }
    }
    printf("\nthe largest number is: %d",largest);
    return 0;
}