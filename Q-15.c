// Print all prime numbers between 1 and N.

#include <stdio.h>

int main() {
    int n;
    printf("enter range from 1 to: ");
    scanf("%d",&n);

    int prime;
    for(int i=2;i<n;i++){
        prime =1;
        for(int j=2;j<i;j++){
            if(i%j==0) {    
                prime=0;
                break;
            }
        
        }    
        if(prime == 1) {
       printf("%d\n",i);
        } 
    }
    return 0;
}